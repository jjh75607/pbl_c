#include <stdio.h>

struct student {
    char name[20];
    int kor, eng, mat;
    int sum;
    double avg;
    int rank;
};

int main() {
    struct student st[5];
    
    for (int i = 0; i < 5; i++) {
        scanf("%d %d %d", &st[i].eng, &st[i].kor, &st[i].mat);
        st[i].sum = st[i].eng + st[i].kor + st[i].mat;
        st[i].avg = st[i].sum / 3.0;
        
        printf("%d번 -> sum : %d, avg : %.2lf\n", i + 1, st[i].sum, st[i].avg);
    }
    
    return 0;
}
