//
//  11주과제02-1.c
//  c언어
//
//  Created by 정순재 on 2020/05/26.
//  Copyright © 2020 정순재. All rights reserved.
//

#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    int max = 0;
    int maxLocation;
    int min = 999;
    int minLocation;
    double avg;

    int i;
    for (i = 0; ; i++) {
        scanf("%d", &n);
        
        if (n == 9999) {
            break;
        }
        
        if (n < min) {
            min = n;
            minLocation = i + 1;
        }
        if (n > max) {
            max = n;
            maxLocation = i + 1;
        }
        
        sum += n;
    }
    
    avg = sum / i;
    
    printf("sum : %d, avg : %.2lf\n", sum, avg);
    printf("max : %d, maxLocation : %d\n", max, maxLocation);
    printf("min : %d, minLocation : %d\n", min, minLocation);
    
    return 0;
}
