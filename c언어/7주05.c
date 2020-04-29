//
//  7주05.c
//  c언어
//
//  Created by 정순재 on 2020/04/29.
//  Copyright © 2020 정순재. All rights reserved.
//

#include <stdio.h>

int main() {
    int cScore;
    
    scanf("%d", &cScore);
    
    if (cScore > 100 || cScore < 0) {
        printf("입력 범위는 0~100 사이 입니다.\n");
    } else if(cScore >= 90) {
        printf("A학점입니다.\n");
    } else if(cScore >= 80) {
        printf("B학점입니다.\n");
    } else if(cScore >= 70) {
        printf("C학점입니다.\n");
    } else if(cScore >= 60) {
        printf("D학점입니다.\n");
    }
    
    return 0;
}
