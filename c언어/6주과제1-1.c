//
//  과제1-1.c
//  c언어
//
//  Created by 정순재 on 2020/04/21.
//  Copyright © 2020 정순재. All rights reserved.
//

#include <stdio.h>

int main() {
    int data1, data2;
    int dividend, divisor;
    int quotient;
    float divisionResult;
    
    printf("첫 번째 데이터를 입력 : ");
    scanf("%d", &data1);
    printf("두 번째 데이터를 입력 : ");
    scanf("%d", &data2);
    
    if (data1 > data2) {
        dividend = data1;
        divisor = data2;
    } else {
        dividend = data2;
        divisor = data1;
    }
    
    if (divisor == 0) {
        printf("나눗수가 0이므로 나눗셈을 처리하지 못함\n");
    } else {
        quotient = dividend / divisor;
        divisionResult = (float)dividend / divisor;
    }
    
    printf("입력 데이터1 = %d\n입력 데이터2 = %d\n\n", data1, data2);
    printf("정수형 출력 결과 몫 = %d\n", quotient);
    printf("실수형 출력 결과 = %f\n", divisionResult);
    
    return 0;
}
