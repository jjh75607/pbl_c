//
//  10주03.c
//  c언어
//
//  Created by 정순재 on 2020/05/19.
//  Copyright © 2020 정순재. All rights reserved.
//

#include <stdio.h>

int main() {
    int max = 0, min = 999999;
    int n;
    
    for (int i = 0; i < 5; i++) {
        scanf("%d", &n);
        
        if (max < n) {
            max = n;
        }
        
        if (min > n) {
            min = n;
        }
    }
    
    return 0;
}
