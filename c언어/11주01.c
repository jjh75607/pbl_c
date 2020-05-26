//
//  11주01.c
//  c언어
//
//  Created by 정순재 on 2020/05/26.
//  Copyright © 2020 정순재. All rights reserved.
//

#include <stdio.h>


int main() {
    for (int i = 0; i < 3; i++) {
        printf("       %d단\t", i + 1);
    }
    
    printf("\n\n");
    
    for (int i = 1; i < 10; i++) {
        for (int j = 1; j < 4; j++) {
            printf("%d * %d = %d\t", j, i, j * i);
        }
        printf("\n");
    }
    
    return 0;
}
