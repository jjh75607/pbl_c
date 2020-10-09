//
//  10.c
//  c언어
//
//  Created by 정순재 on 2020/10/09.
//  Copyright © 2020 정순재. All rights reserved.
//

#include <stdio.h>

void printBadukBoard(int row, int col);

int main() {
    int n1, n2;
    
    scanf("%d %d", &n1, &n2);
    
    printBadukBoard(n1, n2);
        
    return 0;
}

void printBadukBoard(int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if ((i + j) % 2 == 0) {
                printf("◼︎");
            } else {
                printf("◻︎");
            }
        }
        printf("\n");
    }
}
