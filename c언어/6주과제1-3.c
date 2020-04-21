//
//  조건03.c
//  c언어
//
//  Created by 정순재 on 2020/04/21.
//  Copyright © 2020 정순재. All rights reserved.
//

#include <stdio.h>

int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    
    if (n1 > n2) {
        if (n2 != 0) {
            printf("%d\n", n1 / n2);
            printf("%f\n", (float)n1 / n2);
        }
    } else {
        if (n1 != 0) {
            printf("%d\n", n2 / n1);
            printf("%f\n", (float)n2 / n1);
        }
    }
    
    return 0;
}


