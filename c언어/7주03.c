//
//  7주03.c
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
        if (cScore < 40) {
            printf("c과락");
        }
        if (javaScore < 40) {
            printf("java과락");
        }
        if (cppScore < 40) {
            printf("c++과락");
        }
    } else {
        printf("탈락");
    }
    
    return 0;
}
