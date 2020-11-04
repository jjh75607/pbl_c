//
//  12.c
//  c언어
//
//  Created by 정순재 on 2020/10/29.
//  Copyright © 2020 정순재. All rights reserved.
//

#include <stdio.h>

char *string_cpy(char *dest, const char *src);

int main() {
    char str[20];
    char *pt;
    
    pt = string_cpy(str, "string copy");
    
    printf("str : %s\n", str);
    printf("pt : %s\n", pt);
}

char *string_cpy(char *dest, const char *src) {
    char *p = dest;
    while (*src) {
        *p++ = *src++;
    }
//    *p = NULL; <-- 이 부분에서 계속 오류가 발생해서 주석처리 했습니다
// Incompatible pointer to integer conversion assigning to 'char' from 'void *'
    
    return dest;
}
