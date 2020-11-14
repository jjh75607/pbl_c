#include<stdio.h>

#include<string.h>



struct student {
    char name[20];
    int score[5];
}s[5];

void tot(char (*name)[20], int (*score)[5]);

void grade(char(*name)[20],int(*score)[5]);

int main() {
    int i, j = 0;

    for (i = 0; i < 5; i++) {
        printf("이름과 국 영 수 성적을 차례대로 입력해주세요. : ");
        scanf(" %s", &s[i].name); //&name
        
        for (j = 0; j < 3; j++) {
            scanf("%d",&s[i].score[j]); //&score[i][j]
        }
    }

    tot(s->name, s->score);
    grade(s->name ,s->score );

    return 0;
}


void tot(char(*name)[20], int(*score)[5]) {
    int i, j = 0;
    
    printf("\t  이름 국어 수학 영어 총점 평균\n");

    for (i = 0; i < 5; i++) {
        printf("%13s", s[i].name);
            
        for (j = 0; j < 3; j++) {
            printf("%5d", s[i].score[j]);
            s[i].score[3] = s[i].score[3] + s[i].score[j];
        }
            
        s[i].score[4] = s[i].score[3] / 3;
        printf("%5d%5d\n", s[i].score[3], s[i].score[4]);
    }
}



void grade(char(*name)[20], int(*score)[5]) {
    int temp;
    char str1[10] = "";
    char* str2 = NULL;

    str2 = str1;

    for (int i = 0; i < 5; i++) {
        for (int i = 0; i < 5; i++) {
            if (s[i].score[3] < s[i+1].score[3]) {
                strcpy(str2, s[i].name);
                strcpy(s[i].name,s[i+1].name);
                strcpy(s[i+1].name, str2);

                temp = s[i].score[0];
                s[i].score[0] = s[i+1].score[0];
                s[i+1].score[0] = temp;

                temp = s[i].score[1];
                s[i].score[1] = s[i+1].score[1];
                s[i+1].score[1] = temp;

                temp = s[i].score[2];
                s[i].score[2] = s[i+1].score[2];
                s[i+1].score[2] = temp;

                temp = s[i].score[3];
                s[i].score[3] = s[i+1].score[3];
                s[i+1].score[3] = temp;

                temp = s[i].score[4];
                s[i].score[4] = s[i+1].score[4];
                s[i+1].score[4] = temp;

            }
        }
    }
    
    for (int i = 0; i < 5; i++, name++) {
        printf("\n%13s", s[i].name);
        
        for (int j = 0; j < 5; j++)
            printf("%5d", s[i].score[j]);

        printf("%3d", i + 1);

    }
}
