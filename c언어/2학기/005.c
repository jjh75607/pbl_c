//
//  005.c
//  c언어
//
//  Created by 정순재 on 2020/09/18.
//  Copyright © 2020 정순재. All rights reserved.
//

#include <stdio.h>

int main() {
    int p1, p2;
    int draw = 0;
    int p1Win = 0, p2Win = 0;
    int p1Lose = 0, p2Lose = 0;
    
    printf("1 가위, 2 바위, 3 보\n");
    for (int i = 0; i < 5; i++) {
        printf("p1 : ");
        scanf("%d", &p1);
        
        printf("p2 : ");
        scanf("%d", &p2);
        
        
        if (p1 == p2) {
            printf("무승부\n");
            draw++;
        } else if ((p1 + p2) % 2 == 0) {
            if (p1 < p2) {
                printf("p1승리\n");
                p1Win++;
            } else {
                printf("p2승리\n");
                p2Win++;
            }
        } else if ((p1 + p2) % 2 == 1) {
            if (p1 < p2) {
                printf("p2승리\n");
                p2Win++;
            } else {
                printf("p1승리\n");
                p1Win++;
            }
        }
    }
    
    printf("p1 >> Win %d, Lose %d\n", p1Win, p1Lose);
    printf("p2 >> Win %d, Lose %d\n", p2Win, p2Lose);
    printf("draw : %d\n", draw);
    
    return 0;
}
