//
//  7주과제2.c
//  c언어
//
//  Created by 정순재 on 2020/04/29.
//  Copyright © 2020 정순재. All rights reserved.
//

#include <stdio.h>

int main() {
    int n1, n2, n3, n4;
    int max;
    
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
   
    if (n1 > n2 && n1 > n3 && n1 > n4) {
        max = n1;
    } else if(n2 > n1 && n2 > n3 && n2 > n4) {
        max = n2;
    } else if(n3 > n1 && n3 > n2 && n3 > n4) {
        max = n3;
    } else {
        max = n4;
    }
    
    printf("가장 큰 수는 %d입니다.", max);
}
