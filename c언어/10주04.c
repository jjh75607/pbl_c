//
//  10주04.c
//  c언어
//
//  Created by 정순재 on 2020/05/19.
//  Copyright © 2020 정순재. All rights reserved.
//

#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
