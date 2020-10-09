//
//  08.c
//  c언어
//
//  Created by 정순재 on 2020/10/09.
//  Copyright © 2020 정순재. All rights reserved.
//

#include <stdio.h>

int smallInt(int arr[]);

int gArr[3] = {6, 1, 0};

int main() {
    int arr[3] = {4, 2, 1};
    
    printf("지역 : %d\n", smallInt(arr));
    printf("전역 : %d", smallInt(gArr));
    
    return 0;
}

int smallInt(int arr[]) {
    int min = arr[0];
    
    for (int i = 0; i < 3; i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
    }
    
    return min;
}
