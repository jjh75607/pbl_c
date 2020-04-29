//
//  6주과제2-2.c
//  c언어
//
//  Created by 정순재 on 2020/04/21.
//  Copyright © 2020 정순재. All rights reserved.
//

#include <stdio.h>

int main() {
    int n1, n2;
    int result;

    scanf("%d %d", &n1, &n2);

    if (n1 > n2) {
        result = n1 * n2;
        printf("(n1 * n2) result = %d", result);
    } else if (n2 < n1) {
        result = n1 / n2;
        printf("(n1 / n2)result = %d", result);
    } else {
        n1 -= 5;
        n2 += 3;
        printf("n1 = %d, n2 = %d", n1, n2);
    }
}
