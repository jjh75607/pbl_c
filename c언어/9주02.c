//
//  9주02.c
//  c언어
//
//  Created by 정순재 on 2020/05/12.
//  Copyright © 2020 정순재. All rights reserved.
//

#include <stdio.h>

int main() {
    int kor, eng, mat, total, avg;
    int i;
    
    for (i = 0; i < 10; i++) {
        scanf("%d %d %d", &kor, &eng, &mat);
        total = kor + eng + mat;
        avg = total / 3;
        
        printf("%d %d", total, avg);
    }
    
    return 0;
}
