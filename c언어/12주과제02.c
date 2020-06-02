#include <stdio.h>

int main() {
    int data[10] = {78, 89, 98, 96, 85, 74, 61, 55, 49, 83};
    int i, searchData;
    int searchCount = 0;
    
    printf("input search data : ");
    scanf("%d", &searchData);
    
    printf("데이터의 위치 : ");
    for (i = 0; i < 10; i++) {
        printf("%4d", i);
    }
    
    printf("\n\n");
    
    printf("저장된 데이터 : ");
    for (i = 0; i < 10; i++) {
        printf("%4d", data[i]);
    }
    
    
    for (i = 0; i < 10; i++) {
        if (data[i] == searchData) {
            printf("\n검색한 데이터의 위치는 %d번째 입니다.\n", i);
        } else {
            searchCount++;
        }
    }
    
    if (searchCount == 10) {
        printf("\n데이터를 찾지 못 했습니다.\n");
    }
    
    return 0;
}
