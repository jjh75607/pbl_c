//
//  9주과제1.c
//  c언어
//
//  Created by 정순재 on 2020/05/12.
//  Copyright © 2020 정순재. All rights reserved.
//

#include <stdio.h>

int main() {
    int i;
    for (i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
}
