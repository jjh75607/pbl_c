#include <stdio.h>
#include <string.h>

void search();
void modify();
void includeSearch();
void add();

char names[10][20] = {
  {"kimjinhee"},{"hongsungin"}, {"leeheajin"}
};
char phones[10][20] = {
    {"01011111111"}, {"01022222222"}, {"01033333333"}
};

int in = 3;

int main() {
    int index;
    
    while (1) {
        printf("\n===============================\n");
        printf("=1검색, 2수정, 3추가, 4출력, 5화면지우기, 6종료, 7포함문자열");
        printf("\n===============================\n");
        
        printf(">>");
        scanf("%d", &index);
        
//        int row = sizeof(names) / sizeof(names[0]);
        
        if (index == 1) {
            search();
        } else if( index == 2) {
            modify();
        } else if (index == 3) {
            add();
        } else if (index == 4) {
            for (int i = 0; i < in; i++) {
                printf("%s == %s\n", names[i], phones[i]);
            }
        } else if (index == 5) {
            printf("지우기\n"); //윈도우즈 컴퓨터가 아닌 맥os를 사용하고있어 cls가 오류가 나서 대체했습니다.
        } else if (index == 6) {
            break;
        } else if (index == 7) {
            includeSearch();
        } else {
            printf("잘못된 입력\n");
        }
    }
    
    return 0;
}

void search() {
    int result = 0;
    char name[20];
    
    printf("검색할 이름을 입력해주세요. >> ");
    scanf("%s", name);
    
    for (int i = 0; i < in; i++) {
        for(int j = 0; j < 20; j++) {
            if(names[i][j] == '\0' && name[j] == '\0') {
                result = 1;
                printf("존재함\n");
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
        printf("존재하지 않음\n");
    }
}

void modify() {
    char name[20];
    char phone[20];
    
    int result = 0;
    
    printf("수정 할 이름 입력 : ");
    scanf("%s", name);
    
    printf("수정 할 번호 입력 : ");
    scanf("%s", phone);
    
    for (int i = 0; i < in; i++) {
        for(int j = 0; j < 20; j++) {
            if(names[i][j] == '\0' && name[j] == '\0') {
                result = 1;
                for (int k = 0; k < sizeof(phone); k++) {
                    phones[i][k] = phone[k];
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
}

void includeSearch() {
    char searchName[20];
    scanf("%s", searchName);
    
    for (int i = 0; i < in; i++) {
        if (strstr(names[i], searchName)) {
            printf("%s\n", names[i]);
        } else {
            printf("X\n");
            break;
        }
    }
}

void add() {
    
    printf("이름을 입력하세요 : ");
    scanf("%s", names[in]);
    printf("번호를 입력하세요 : ");
    scanf("%s", phones[in]);
    
    in++;
}
