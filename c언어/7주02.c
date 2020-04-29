//
//  7주02.c
//  c언어
//
//  Created by 정순재 on 2020/04/28.
//  Copyright © 2020 정순재. All rights reserved.
//

#include <stdio.h>

int main() {
    int cScore, javaScore, cppScore;
    int total;
    float avg;
    
    scanf("%d %d %d", &cScore, &javaScore, &cppScore);
    
    total = cScore + javaScore + cppScore;
    avg = total / 3.0;
    
    if (avg >= 60) {
        if (cScore >= 40 && javaScore >= 40 && cppScore >= 40) {
            printf("합");
        } else {
            printf("과락");
        }
    } else {
        printf("불합");
    }
    
    return 0;
}
