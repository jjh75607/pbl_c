#include <stdio.h>

void sumAndAvg(int (*ptr)[3], char (*names)[100]);

int main() {
    char names[3][100];
    int score[3][3];
    
    printf("국 영 수 성적 입력\n");
    for (int i = 0; i < 3; i++) {
        scanf("%s", names[i]);
        for (int j = 0; j < 3; j++) {
            scanf("%d", &score[i][j]);
        }
    }
    
    sumAndAvg(score, names);
    
    return 0;
}

void sumAndAvg(int (*ptr)[3], char (*names)[100]) {
    for (int i = 0; i < 3; i++) {
        int sum = 0;
     
        for (int j = 0; j < 3; j++) {
            sum += ptr[i][j];
        }
        
        double avg = sum / 3.0;
        printf("%s : %d, %.2lf\n", names[i], sum, avg);
    }
}
