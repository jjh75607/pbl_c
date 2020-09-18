//
//  003.c
//  c언어
//
//  Created by 정순재 on 2020/09/18.
//  Copyright © 2020 정순재. All rights reserved.
//
#include <stdio.h>

int main() {
    //각 항목 별 점수
    int dataStructureScore[5];
    int unixScore[5];
    int javaScore[5];
    int algorithmScore[5];
    
    int sum[5] = {0, };
    
    double avg[5] = {0.0, };
    double subjectAvg[4] = {0.0, };
    
    // 입력 및 총합, 평균 계산
    for (int i = 0; i < 5; i++) {
        printf("%d학생 >>", i + 1);
        scanf("%d %d %d %d", &dataStructureScore[i], &unixScore[i], &javaScore[i], &algorithmScore[i]);
        sum[i] = dataStructureScore[i] + unixScore[i] + javaScore[i] + algorithmScore[i];
        avg[i] = sum[i] / 4;
    }
    
    // 출력
    for (int i = 0; i < 5; i++) {
        printf("%d번 학생 : %d %d %d %d %d %.2lf\n", i + 1, dataStructureScore[i], unixScore[i], javaScore[i], algorithmScore[i], sum[i], avg[i]);
    }
    
    printf("===============\n");
    
    // 각 과목별 총합
    for (int i = 0; i < 4; i++) {
        subjectAvg[0] += dataStructureScore[i];
        subjectAvg[1] += unixScore[i];
        subjectAvg[2] += javaScore[i];
        subjectAvg[3] += algorithmScore[i];
    }
    
    // 출력
    for (int i = 0; i < 4; i++) {
        printf("%.2lf ", subjectAvg[i]);
    }
    
    // 정렬 후 맨 앞에서 가장 큰 값 찾기.
    for (int i = 0; i < 4; i++) {
        for (int j = i; j < 5; j++) {
            int temp = avg[i];
            avg[i] = avg[j];
            avg[j] = temp;
        }
    }
    
    printf("\n1등 평균 : %.2lf\n", avg[0]);
    
    
    return 0;
}
