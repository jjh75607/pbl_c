#include <stdio.h>
//#include <windows.h>

int main() {
    char names[][20] = {"kimjinhee", "honggildong", "leemeja"};
    char phoneNumbers[][14] = {"01011111111", "01022222222", "01044444444"};
    
    int i, j, k;
    int choice = 0;
    int result = 0;
    char name[20] = {""};
    char phone[14] = {""};
    
    while (1) {
        printf("============================================\n");
        printf("= 1.검색 2.수정 3.추가 4.출력 5.화면지우기 6.종료: =\n");
        printf("============================================\n");
        
        printf("원하는 번호를 선택하세요 >> ");
        scanf("%d", &choice);
        
        if (choice == 1) {
            printf("검색할 이름을 입력해주세요. >> ");
            scanf("%s", name);
            
            for (i = 0; i < sizeof(names) / 20; i++) {
                for(j = 0; j < 20; j++) {
                    if(names[i][j] == '\0' && name[j] == '\0') {
                        result = 1;
                        printf("%s의 번호는 %s입니다.\n", name, phoneNumbers[i]);
                        break;
                    }
                    
                    if(names[i][j] == name[j]) {
                        continue;
                    } else {
                        break;
                    }
                }
            }
            
            if(result == 0) {
                printf("%s의 번호는 없습니다.\n", name);
            }
        } else if (choice == 2) {
            printf("수정 할 이름 입력 : ");
            scanf("%s", name);
            
            printf("수정 할 번호 입력 : ");
            scanf("%s", phone);
            
            for (i = 0; i < sizeof(names) / 20; i++) {
                for(j = 0; j < 20; j++) {
                    if(names[i][j] == '\0' && name[j] == '\0') {
                        result = 1;
                        for (k = 0; k < sizeof(phone); k++) {
                            phoneNumbers[i][k] = phone[k];
                        }
                        break;
                    }
                    
                    if(names[i][j] == name[j]) {
                        continue;
                    } else {
                        break;
                    }
                }
            }
            
            if(result == 0) {
                printf("등록되지 않은 이름입니다.\n");
            } else {
                printf("변경되었습니다.\n");
            }
        } else if (choice == 3) {
            printf("이름을 입력하세요 : ");
            scanf("%s", name);
            printf("번호를 입력하세요 : ");
            scanf("%s", phone);
            
            int n = sizeof(names) / 20;
            
            for (k = 0; k < sizeof(name); k++) {
                names[n][k] = name[k];
            }
            
            for (k = 0; k < sizeof(phone); k++) {
                phoneNumbers[n][k] = phone[k];
            }
            
        } else if (choice == 4) {
            printf("번호\t이름\t\t전화번호\n");
            printf("===================================================\n");
            
            for (i = 0; i < sizeof(names) / 20; i++) {
                printf("%d %s\t\t%s\n", i + 1, names[i], phoneNumbers[i]);
            }
            printf("\n\n\n");
        } else if (choice == 5) {
//            system( "cls" );
        } else if (choice == 6) {
            break;
        }
    }
    
    return 0;
}
