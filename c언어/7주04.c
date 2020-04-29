//
//  7주04.c
//  c언어
//
//  Created by 정순재 on 2020/04/29.
//  Copyright © 2020 정순재. All rights reserved.
//

#include <stdio.h>

int main() {
    int a, b, c;
    int max, min;
    
    scanf("%d %d %d", &a, &b, &c);
    
    if (a > b && a > c) {
        max = a;
    } else {
        if (b > c) {
            max = b;
        } else {
            max = c;
        }
    }
    
    printf("max = %d", max);
}
