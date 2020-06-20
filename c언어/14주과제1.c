//
//  14주과제1.c
//  c언어
//
//  Created by 정순재 on 2020/06/16.
//  Copyright ⓒ 2020 정순재. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main() {
    int result;
    
    char dict[][2][100] = {
        {"이몽룡", "010-1111-1111"},
        {"홍길동", "010-2222-2222"}
    };
    
    char n[4];
    scanf("%s", n);

    int i;
    for (i = 0; i < strlen(dict[0][0]); i++) {
        if (strcmp(n, dict[i][0]) == 0) {
            result = 1;
            break;
        } else {
            result = 0;
        }
    }
    
    
    if (result) {
        printf("%s의 전화번호는 %s입니다.", n, dict[i][1]);
    } else {
        printf("%s의 전화번호는 없습니다.", n);
    }
    
    
}
