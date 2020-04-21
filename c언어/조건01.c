//
//  조건01.c
//  c언어
//
//  Created by 정순재 on 2020/04/21.
//  Copyright © 2020 정순재. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int kor, eng, mat;
    float avg;
    
    scanf("%d %d %d", &kor, &eng, &mat);
    avg = (kor + eng + mat) / 3.0;
    
    if (avg > 60) {
        printf("%.1f, 평균이상", avg);
    }
    if (avg < 60) {
        printf("%.1f, 평균이하", avg);
    }
}
