//
//  14.c
//  c언어
//
//  Created by 정순재 on 2020/10/30.
//  Copyright © 2020 정순재. All rights reserved.
//

#include <stdio.h>

int main() {
    int isCheck;
    char s1[20], s2[20];
    
    printf("s1 : ");
    scanf("%s", s1);
    printf("s2 : ");
    scanf("%s", s2);
    
    char *p1 = s1, *p2 = s2;
    
    int i = 0;
    while ((*(p1 + i) != NULL) && (*(p2 + i) != NULL)) {
        if (*(p1 + i) > *(p2 + i)) {
            isCheck = 1;
            break;
        } else if(*(p1 + i) == *(p2 + i)) {
            isCheck = 2;
        } else {
            isCheck = 0;
            break;
        }
        i++;
    }
    
    switch (isCheck) {
        case 0:
            printf("%s", p2);
            break;
        case 1:
            printf("%s", p1);
            break;
        case 2:
            printf("같음");
            break;
        default:
            break;
    }
    
    return 0;
}
