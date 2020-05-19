//
//  10주차과제2-2.c
//  c언어
//
//  Created by 정순재 on 2020/05/19.
//  Copyright © 2020 정순재. All rights reserved.
//

#include <stdio.h>
int main() {
    for (int i = 6; i >= 0; i--) {
        for (int j = 0; j < 6 - i; j++) {
            printf(" ");
        }
        
        for (int j = 0; j < (i * 2) - 1; j++) {
            printf("*");
        }
        
        printf("\n");
    }
    
    return 0;
}
