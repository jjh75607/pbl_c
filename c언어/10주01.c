//
//  10주01.c
//  c언어
//
//  Created by 정순재 on 2020/05/19.
//  Copyright © 2020 정순재. All rights reserved.
//

#include <stdio.h>

int main() {
    int kor, eng, mat, sum;
    int korSum = 0, engSum = 0, matSum = 0;
    
    double avg;
    
    for (int i = 0; i < 10; i++) {
        scanf("%d %d %d", &kor, &eng, &mat);
        sum = kor + eng + mat;
        avg = sum / 3.0;
        
        printf("sum = %d, avg = %lf", sum, avg);
        
        korSum += kor;
        engSum += eng;
        matSum += mat;
    }
    
    printf(".2%lf %.2lf %.2lf", korSum / 3.0, engSum / 3.0, matSum / 3.0);
    
    
    return 0;
}
