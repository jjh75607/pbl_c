//
//  06.c
//  c언어
//
//  Created by 정순재 on 2020/09/18.
//  Copyright © 2020 정순재. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main() {
    char names[4][20] = {
        {"kimjaehe"},
        {"kimjaesoon"},
        {"kimsoonjae"},
        {"jungsoon"}
    };
    
    char searchName[10];

    scanf("%s", searchName);
    
    for (int i = 0; i < 4; i++) {
        if (strstr(names[i], searchName)) {
            printf("%s\n", names[i]);
        } else {
            printf("X");
            break;
        }
    }
    
//    case 2
    int W[4] = { 0 };
    for (int i = 0, j = 1, status = 0; searchName[j] != '\0'; ++j)
    {
        if (searchName[i] == searchName[j])
        {
            i++;
            W[j] = ++status;
        }
        else if (i > 0)
        {
            i = 0;
            W[j] = status = 0;
        }
    }
    
    //
    for (int i = 0; i < sizeof(names) / sizeof(names[0]); i++) {
        for (int s = 0, f = 0; s < strlen(names[i]);)
        {
            while (names[i][s] == searchName[f] && f < strlen(searchName))
            {
                s++;
                f++;
            }

            if (f > strlen(searchName) - 1)
            {
                for (int k = 0; k < strlen(names[i]); k++) {
                    printf("%c", names[i][k]);
                }
                f = W[f - 1];
            }
            else
            {
                if (W[f] == 0)
                    f = 0;
                else if (W[f] > 0)
                    f = W[f] - 1;
                s++;
            }
        }
        printf("\n");
    }
    
    return 0;
}
