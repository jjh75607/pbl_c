#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void search(char (*ptr1)[50], char (*ptr2)[50], int *ren);
void delete(char (*ptr1)[50], char (*ptr2)[50], int *ren);
void add(char (*ptr1)[50], char (*ptr2)[50], int *ren);
void print(char (*ptr1)[50], char (*ptr2)[50], int *ren);
void game(char (*ptr1)[50], char (*ptr2)[50], int *ren);

int main() {
    int ren = 6;
    char words[100][50] = {"apple", "coin", "black", "notebook", "banana", "pineapple"};
    char meanings[100][50] = {"사과", "동전", "검은색", "노트북", "바나나", "파인애플"};
    
    char (*wordsPtr)[] = words;
    char (*meaningsPtr)[] = meanings;
    
    int index;
    
    while (1) {
        printf("\n=====================================================\n");
        printf("= 1.단어검색 2.삭제 3. 추가 4.출력 5.화면지우기 6.단어맞추기게임 =\n");
        printf("=====================================================\n");
        printf("원하는 번호를 입력하세요 >>");
        scanf("%d", &index);
        
        if (index == 1) {
            search(wordsPtr, meaningsPtr, &ren);
        } else if(index == 2) {
            delete(wordsPtr, meaningsPtr, &ren);
        } else if(index == 3) {
            add(wordsPtr, meaningsPtr, &ren);
        } else if(index == 4) {
            print(wordsPtr, meaningsPtr, &ren);
        } else if(index == 5) {
            system("clear"); // 현재 사용하는 운영체제가 윈도우가 아니라서 다른 명령어를 사용했습니다.
        } else if(index == 6) {
            game(wordsPtr, meaningsPtr, &ren);
        } else {
            printf("1 ~ 6 중에 입력해주세요.\n");
        }
    }
    
    return 0;
}

void search(char (*ptr1)[50], char (*ptr2)[50], int *ren) {
    char searchName[50];
    
    printf("\n단어 입력 : ");
    scanf("%s", searchName);
    
    for (int i = 0; i < *ren; i++) {
        // 동일한지 확인. 같다면 0, 틀리면 1을 반환 하기에 not 연산자 이용
        if (!strcmp(ptr1[i], searchName)) {
            printf("%7s : %7s\n", ptr1[i], ptr2[i]);
            return;
        }
    }
}

void delete(char (*ptr1)[50], char (*ptr2)[50], int *ren) {
    char deleteValue[50];
    
    printf("삭제할 단어 입력 : ");
    scanf("%s", deleteValue);
    
    for (int i = 0; i < *ren; i++) {
        // 삭제를 하기 위해선 단어가 존재해야 하므로 검사.
        if (!strcmp(ptr1[i], deleteValue)) {
            // 삭제할 벨류가 존재하는 지점부터 +1씩 한 칸씩 땡겨와야 하기 떄문에 j = i이며 아래에서 j + 1을 사용하기 때문에 rne - 1이다.
            for (int j = i; j < *ren - 1; j++) {
                //앞의 인자에 뒤의 인자를 복사하는 코드.
                strcpy(ptr1[j], ptr1[j + 1]);
                strcpy(ptr2[j], ptr2[j + 1]);
            }
        }
    }
    //배열의 원소가 하나 줄었기 때문에 배열의 길이를 담고있는 ren 또한 --
    *ren -= 1;
}

void add(char (*ptr1)[50], char (*ptr2)[50], int *ren) {
    printf("추가할 단어 입력 : ");
    //현재 값이 있는 마지막 지점을 ren이 담고있으며 배열은 0부터 시작이가때문에 words[ren]
    scanf("%s", ptr1[*ren]);
    
    printf("단어의 뜻 입력 : ");
    scanf("%s", ptr2[*ren]);
    
    *ren += 1;
}

void print(char (*ptr1)[50], char (*ptr2)[50], int *ren) {
    for(int i = 0; i < *ren; i++) {
        //출력, 앞의 숫자는 2자리 채우기, 뒤의 2가지는 왼쪽에서부터 10자리
        printf("%2d %-10s %-10s\n", i + 1, ptr1[i], ptr2[i]);
    }
}
void game(char (*ptr1)[50], char (*ptr2)[50], int *ren) {
    int score = 0, life = 3;
    int n;
    char answer[50];
    int temp[*ren];
    
    // 난수를 생성하여 사용할때 중복을 막기위해 현재 1 ~ ren방에 1씩 넣어둠 ex) ren = 3 -> temp[3] = {1, 1, 1}
    for(int i = 0; i < *ren; i++) {
        temp[i] = 1;
    }
    // 랜덤의 시드 초기화
    srand((unsigned int)time(NULL));
    printf("= 단어 맞추기 게임 =\n");

    for (int i = 0; i < *ren; i++) {
        if(life == 0) {
            break;
        } else {
            n = (int)rand() % *ren;
            
            //만약 temp[n]이 1이라면 한번도 나온적 없는 수이기에 다음 단계.
            if (temp[n] == 1) {
                printf("%s의 뜻을 말하세요. >> ", ptr1[n]);
                scanf("%s", answer);
                
                // 뜻이 맞는지 확인
                if (!strcmp(answer, ptr2[n])) {
                    printf("정답!, 1점 추가\n");
                    score++;
                    
                    if(score == *ren) {
                        printf("모든 문제를 해결했습니다.\n");
                        break;
                    }
                } else {
                    printf("오답 생명 -1, 현재 생명 %d\n", life);
                    life--;
                }
                //한번 나온 수이기때문에 --를 해서 0으로 값 변경
                temp[n]--;
            } else { // 만약 1이 아니라면 나온적이 있는 수이기에 i--를해서 포문을 "한번" 다시 실행
                i--;
            }
        }
    }
    
    printf("게임이 종료되었습니다. 점수는 %d점입니다.\n", score);
}
