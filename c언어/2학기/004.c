#include <stdio.h>

int main() {
    // 항목 별 변수
    char goodsCode[4];
    int amount[4];
    int price[4];
    
    // 판매량 변수
    int computerSales = 0;
    int notebookSales = 0;
    int ipadSales = 0;
    
    for (int i = 0; i < 4; i++) {
        scanf("%c %d %d", &goodsCode[i], &amount[i], &price[i]);
        //입력 버퍼 비우기 -> 입력을 하고 난 후 버퍼에 엔터까지 포함되기 때문에 비움
        getchar();
    }
    
    // 입력 받은 문자를 스위치로 구분하여 판단
    for (int i = 0; i < 4; i++) {
        switch (goodsCode[i]) {
            case 'A':
                printf("컴퓨터 %d %d %d\n", amount[i], price[i], amount[i] * price[i]);
                computerSales++;
                break;
            case 'B':
                printf("노트북 %d %d %d\n", amount[i], price[i], amount[i] * price[i]);
                notebookSales++;
                break;
            case 'C':
                printf("아이패드 %d %d %d\n", amount[i], price[i], amount[i] * price[i]);
                ipadSales++;
                break;
        }
    }
    
    printf("판매량 : %d %d %d", computerSales, notebookSales, ipadSales);
    
    return 0;
}
