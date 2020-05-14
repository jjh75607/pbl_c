//
//  9주과제2.c
//  c언어
//
//  Created by 정순재 on 2020/05/12.
//  Copyright © 2020 정순재. All rights reserved.
//

#include <stdio.h>

int main() {
    int n, sum = 0;
    double avg;
    
    int i;
    for (i = 0; i < 5; i++) {
        scanf("%d", &n);
        sum += n;
    }
    
    avg = sum / 5.0;
    
    printf("sum = %d\navg = %.2lf\n", sum, avg);
}
