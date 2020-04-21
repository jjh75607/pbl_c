//
//  조건02.c
//  c언어
//
//  Created by 정순재 on 2020/04/21.
//  Copyright © 2020 정순재. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d", &n);
    
    if (n > 0) {
        printf("양수 %d", n);
    }
    
    if (n < 0) {
        printf("음수 %d", n);
    }
}
