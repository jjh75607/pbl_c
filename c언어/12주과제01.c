#include <stdio.h>

int main() {
    int cScore[100];
    int i = 0;
    int max = 0, min = 9999, sum = 0;
    
    while(1) {
        printf("번호 점수 입력 : ");
        scanf("%d", &cScore[i]);
        
        if (cScore[i] == 999) {
            break;
        }
        
        sum += cScore[i];
        
        if (max < cScore[i]) {
            max = cScore[i];
        }
        
        if (min > cScore[i]) {
            min = cScore[i];
        }
        
        i++;
    }
    
    printf("\n입력 갯수 : %d\n", i);
    printf("평균 : %.2lf\n", sum / (double)i );
    printf("최대값 : %d\n최소값 : %d\n", max, min);
    
    return 0;
}
