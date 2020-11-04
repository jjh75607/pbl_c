//
//  13.c
//  c언어
//
//  Created by 정순재 on 2020/10/30.
//  Copyright © 2020 정순재. All rights reserved.
//

#include <stdio.h>

void func(int *data) {
    *data = 10;
}

int main(){
    int var = 1;
    func(&var);
    printf("%d\n", var);
    return 0;
}
