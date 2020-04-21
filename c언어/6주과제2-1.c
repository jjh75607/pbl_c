//
//  6주과제2-1.c
//  c언어
//
//  Created by 정순재 on 2020/04/21.
//  Copyright © 2020 정순재. All rights reserved.
//

#include <stdio.h>

int main() {
    int n1, n2;
    int sum, sub;
    
    scanf("%d %d", &n1, &n2);
    
    sum = n1 + n2;
    
    if (n1 > n2) {
        sub = n1 - n2;
    } else {
        sub = n2 - n1;
    }
        
    printf("sum = %d\nsub = %d\n", sum, sub);
    
}
