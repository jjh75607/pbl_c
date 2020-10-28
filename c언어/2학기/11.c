//
//  11.c
//  c언어
//
//  Created by 정순재 on 2020/10/27.
//  Copyright © 2020 정순재. All rights reserved.
//

#include <stdio.h>

int main() {
    int a[] = {1, 2, 3};
    int *p = a;
    
    printf("%d\n", p[0]);
    printf("%d\n", *(p + 1));
    printf("%d\n", *(p + 4));
    
    
    return 0;
}
