//
//  001.c
//  c언어
//
//  Created by 정순재 on 2020/09/04.
//  Copyright © 2020 정순재. All rights reserved.
//

#include <stdio.h>

int main() {
    int n;
    
    scanf("%d", &n);
    
    switch (n % 12) {
        case 0:
            printf("원숭이\n");
            break;
        case 1:
            printf("닭\n");
            break;
        case 2:
            printf("개\n");
            break;
        case 3:
            printf("돼지\n");
            break;
        case 4:
            printf("쥐\n");
            break;
        case 5:
            printf("소\n");
            break;
        case 6:
            printf("호랑이\n");
            break;
        case 7:
            printf("토끼\n");
            break;
        case 8:
            printf("용\n");
            break;
        case 9:
            printf("뱀\n");
            break;
        case 10:
            printf("말\n");
            break;
        case 11:
            printf("양\n");
            break;
        default:
            printf("존재하지 않습니다.\n");
            break;
    }
    
    return 0;
}
