//
//  11주02.c
//  c언어
//
//  Created by 정순재 on 2020/05/26.
//  Copyright © 2020 정순재. All rights reserved.
//

#include <stdio.h>

int main() {
    for (int i = 1; i <= 9; i += 3) {
        for (int j = i; j <= i + 2; j++) {
            printf("  %d단           ", j);
        }
        printf("\n\n");
        
        for (int j = 1; j < 10; j++) {
            for (int k = i; k <= i + 2; k++) {
                printf("%d * %d = %2d    ", k, j, k * j);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
