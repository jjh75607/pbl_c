//
//  10주02.c
//  c언어
//
//  Created by 정순재 on 2020/05/19.
//  Copyright © 2020 정순재. All rights reserved.
//

#include <stdio.h>

int main() {
    int oddSum = 0, evenSum = 0;
    
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            evenSum += i;
        } else {
            oddSum += i;
        }
    }
}
