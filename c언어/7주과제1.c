//
//  7주과제1.c
//  c언어
//
//  Created by 정순재 on 2020/04/29.
//  Copyright © 2020 정순재. All rights reserved.
//

#include <stdio.h>

int main() {
    int frontResidentNumber, backResidentNumber;
    
    scanf("%d %d", &frontResidentNumber, &backResidentNumber);
    
    printf("생년월일은 %d입니다.\n", frontResidentNumber);
    
    if (backResidentNumber / 1000000 == 1 || backResidentNumber / 1000000 == 3) {
        printf("당신은 남자 입니다.\n");
    } else {
        printf("당신은 여자 입니다.\n");
    }
}
