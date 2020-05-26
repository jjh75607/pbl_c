//
//  11주과제01.c
//  c언어
//
//  Created by 정순재 on 2020/05/26.
//  Copyright © 2020 정순재. All rights reserved.
//

#include <stdio.h>

int main() {
    int sum = 0;
    
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= i; j++) {
            sum += j;
        }
    }
    
    printf("sum = %d\n", sum);
    
    
    return 0;
}
