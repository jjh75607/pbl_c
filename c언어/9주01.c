//
//  9주01.c
//  c언어
//
//  Created by 정순재 on 2020/05/12.
//  Copyright © 2020 정순재. All rights reserved.
//

#include <stdio.h>

int main() {
    int idNo;
    int grade;
    int quantity;
    int unitCost;
    int temp;
    int tax;
    int gross;
    
    printf("idNo input : ");
    scanf("%d", &idNo);
    
    printf("grade : ");
    scanf("%d", &grade);
    
    printf("quantity : ");
    scanf("%d", &quantity);
    
    if (grade == 1) {
        unitCost = 50;
    } else if (grade == 2) {
        unitCost = 30;
    } else {
        unitCost = 20;
    }
    
    temp = quantity * unitCost;
    tax = temp * 0.1;
    gross = temp + tax;
    
    printf("%d", gross);
    
    return 0;
}
