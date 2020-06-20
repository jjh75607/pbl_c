//
//  14주과제3.c
//  c언어
//
//  Created by 정순재 on 2020/06/17.
//  Copyright © 2020 정순재. All rights reserved.
//

#include <stdio.h>

int main() {
    int score[10][4] = {
        {0, 0, 0, 1},
        {1, 1, 1, 1},
        {0, 1, 0, 1},
        {1, 0, 1, 1},
        {0, 0, 1, 1},
        {0, 1, 1, 1},
        {1, 1, 0, 1},
        {0, 0, 1, 0},
        {1, 0, 1, 1},
        {0, 0, 1, 0}
    };
    int sum = 0;
    double avg;
    
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 4; j++) {
            sum += score[i][j];
        }
    }
    avg = sum / 10;
    printf("sum : %d\navg : %.2lf\n", sum, avg);
    
    return 0;
}
