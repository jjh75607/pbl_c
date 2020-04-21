//
//  과제1-2.c
//  c언어
//
//  Created by 정순재 on 2020/04/21.
//  Copyright © 2020 정순재. All rights reserved.
//

#include <stdio.h>

int main() {
    int data1, data2;
    
    scanf("%d %d", &data1, &data2);
    
    if (data1 > data2 && data2 != 0) {
        printf("\n정수결과=%d\n", data1 / data2);
        printf("\n실수결과=%f\n", (float)data1 / data2);
    }
    
    if (data2 > data1 && data1 != 0) {
        printf("\n정수결과=%d\n", data2 / data1);
        printf("\n실수결과=%f\n", (float)data2 / data1);
    }
}
