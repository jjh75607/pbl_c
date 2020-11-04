//
//  11.c
//  c언어
//
//  Created by 정순재 on 2020/10/27.
//  Copyright © 2020 정순재. All rights reserved.
//

#include <stdio.h>

int main() {
    char c[4][10] = {"korea", "Japan",  "China", "Greece"};
    char *a[] = {"korea", "Japan",  "China", "Greece"};
    
    printf("c[0] %s\n", c[0]);
    printf("c[0] %c\n", c[0][3]);
    printf("a[2] %s\n", a[2]);
    printf("a[2][3] %c\n", a[2][3]);
    
    return 0;
}
