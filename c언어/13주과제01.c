//
//  13주과제01.c
//  c언어
//
//  Created by 정순재 on 2020/06/09.
//  Copyright © 2020 정순재. All rights reserved.
//

#include <stdio.h>

int main() {
    int defualtNumber = 65;
    
    for (int i = 0; i < 26; i++) {
        for (int j = i; j < 26 + i; j++) {
            printf("%c ", defualtNumber + j);
            
            if (j == 25) {
                defualtNumber = 64 - j;
            }
        }
        defualtNumber = 65;
        printf("\n");
    }
    
    return 0;
}
