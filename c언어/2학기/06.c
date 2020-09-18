//
//  06.c
//  c언어
//
//  Created by 정순재 on 2020/09/18.
//  Copyright © 2020 정순재. All rights reserved.
//

#include <stdio.h>

int main() {
    char names[10][10] = {
        {"java"}, {"c"}, {"c++"},
        {"go"}, {"python"}, {"js"},
        {"ruby"}, {"php"}, {"c#"}, {"b"}
    };
    char name[10];
    int result = 0;
    
    scanf("%s", name);
    
    for (int i = 0; i < 10; i++) {
        for(int j = 0; j < 20; j++) {
            if(names[i][j] == '\0' && name[j] == '\0') {
                result = 1;
                printf("%s", name);
                break;
            }
            
            if(names[i][j] == name[j]) {
                continue;
            } else {
                break;
            }
        }
        
        if (result == 1) {
            break;
        }
        
    }
    
    if(result == 0) {
        printf("%s는 없습니다.\n", name);
    }
    
    return 0;
}
