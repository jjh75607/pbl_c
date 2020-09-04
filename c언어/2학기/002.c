//
//  002.c
//  c언어
//
//  Created by 정순재 on 2020/09/04.
//  Copyright © 2020 정순재. All rights reserved.
//

#include <stdio.h>

int main() {
    int numbers[6] = {1, 30, 20, 53, 13, 27};
    int inputNumbers[6];
    int count = 0;
    
    for (int i = 0; i < 6; i++) {
        scanf("%d", &inputNumbers[i]);
    }
    
    for(int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (numbers[i] == inputNumbers[j]) {
                count++;
            }
        }
    }
    
    switch (count) {
        case 3:
            printf("4등\n");
            break;
        case 4:
            printf("3등\n");
            break;
        case 5:
            printf("2등\n");
            break;
        case 6:
            printf("1등\n");
            break;
        default:
            printf("꽝\n");
            break;
    }
    
    return 0;
}
