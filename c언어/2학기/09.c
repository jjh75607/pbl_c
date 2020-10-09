//
//  09.c
//  c언어
//
//  Created by 정순재 on 2020/10/09.
//  Copyright © 2020 정순재. All rights reserved.
//

#include <stdio.h>

void printing(int n);

int main() {
    int n;
    
    printf("1 ~ 3 사이의 임의의 숫자 >>");
    scanf("%d", &n);
    
    (n > 0 && n < 4) ? printing(n) : printf("1 ~ 3 사이의 숫자를 입력하세요.");
    
    return 0;
}

void printing(int n) {
    int temp = 1;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            temp *= n;
            printf("%7d", temp);
        }
        printf("\n");
    }
}


