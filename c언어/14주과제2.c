//
//  14주과제2.c
//  c언어
//
//  Created by 정순재 on 2020/06/17.
//  Copyright © 2020 정순재. All rights reserved.
//

#include <stdio.h>

int main() {
    int sum = 0;
    double avg;
    
    int score[2][5] = {
        {57, 12, 32, 95, 100},
        {49, 76, 63 ,98, 21}
    };
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            sum += score[i][j];
        }
    }
    
    avg = sum / 10.0;
    printf("sum : %d\navg : %.2lf\n", sum, avg);
    
    return 0;
}
