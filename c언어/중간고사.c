//
//  중간고사.c
//  c언어
//
//  Created by 정순재 on 2020/05/02.
//  Copyright © 2020 정순재. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int entryTime, exitTime;
    int parkingTicket;
    int price = 0;
    
    printf("입차시간을 입력하세요 : ");
    scanf("%d", &entryTime);
    
    printf("출차시간을 입력하세요 : ");
    scanf("%d", &exitTime);
    
    printf("보호자증 있나요?(1 또는 0) : ");
    scanf("%d", &parkingTicket);
    
    int entryDay = entryTime / 10000; // 각각 일, 시, 분을 알아내기 위하여 나누고 나머지,몫을 구함
    int entryHour = (entryTime % 10000) / 100;
    int entryMinute = entryTime % 100;
    
    int exitDay = exitTime / 10000;
    int exitHour = (exitTime % 10000) / 100;
    int exitMinute = exitTime % 100;
    
    int totalMinute = (exitHour * 60 + exitMinute) - (entryHour * 60 + entryMinute); // 시간을 분으로 변환하여 분과 합쳐줌
    int changeDayIsMinute = (exitDay - entryDay) * 24 * 60; // 날짜를 분으로 변환
    
    if (parkingTicket == 0) { // 주차증이 없다면
        price += 500;
        int temp = (totalMinute - 30) / 15; // 30분까지는 기본요금이니 30분빼고, 15분부터 초과요금을 구하기 위함
        
        if ((exitTime - entryTime) / 10000 >= 1) { // 하루가 넘어갔는지 확인
            price += (changeDayIsMinute > 0) ? (changeDayIsMinute / 1440) * 30000 : 0; // 만약 날짜가 하루가 넘어간다면 얼마나 넘어갔는지, 분으로 변환했기 때문에 하루가 1440분인것을 감안하여 나눈후 금액을 곱합.
        } else if(temp > 0) { // 15분이 넘은 만큼 가격 증가
            price += temp * 300;
        }
    } else { //주치권 있을때
        int temp = totalMinute - 240; // 4시간은 무료라서 240분을 빼줌.
        
        if (temp < 0) { // 주차증이 있고 4시간 미만 주차는 공짜
            price = 0;
        }
        
        if ((exitTime - entryTime) / 10000 >= 1) {
            price += changeDayIsMinute > 0 ? (changeDayIsMinute / 1440) * 20000 : 0;
        } else if(entryHour >= 18) {
            price += (exitHour - entryHour) * 2000;
        }
    }
    
    int time = changeDayIsMinute + totalMinute;
    
    if (time < 60) {
        printf("%d분, %d원입니다.", time, price);
    } else {
        printf("%d시간, %d원입니다.", time / 60, price);
    }
    
    return 0;
}

