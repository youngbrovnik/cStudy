//
//  main.c
//  Chapter09
//
//  Created by youngpilyun on 2017. 12. 19..
//  Copyright © 2017년 Youngpilyun. All rights reserved.
//

#include <stdio.h>
#include "Header.h"

void exam1_1(void);
void exam1_2(void);
void exam1_3(void);
int AddToTotal(int num);

//int Add(int val);
static int total=0;;

int main(int argc, const char * argv[]) {
    
//    SmartAddFunc();
    
//    최대값 최소값
//    exam1_1();
    
//    섭씨화씨변환
//    exam1_2();
    
//    피보나치수열
//    exam1_3();
    
//    int num=17;
//    SimpleFuncOne();
//    SimpleFuncTwo();
//    printf("main num: %d \n", num);

//    int num=1;
//
//    if(num==1) {
//        int num=7;
//        num+=10;
//        printf("if문 내 지역변수 num: %d \n", num);
//    }
//    printf("main 함수 내 지역변수 num: %d \n", num);
    
//    int num=1;
//
//    printf("num: %d \n", num);
//    num = Add(3, num);
//    printf("num: %d \n", num);
//    num++;
//    printf("num: %d \n", num);
    
//    int num=5;
//    printf("num: %d \n", Add(3));
//    printf("num: %d \n", num+9);
    
    int num;
    for(int i=0; i<3; i++) {
        printf("입력%d: :", i+1);
        num = ReadNum();
        printf("누적: %d \n", AddToTotal(num));
    }
    
    return 0;
}

//int Add(int val) {
////    int num=9;
//    num += val;
//    return num;
//}

void exam1_1(void) {
    int input[3];
    
    printf("세 개의 정수를 입력하세요. \n");
    for(int i=0; i<sizeof(input)/sizeof(int); i++) {
        input[i] = ReadNum();
    }
    printf("입력하신 값의 최대값은 %d 입니다.\n", Max(input, sizeof(input)/sizeof(int)));
    printf("입력하신 값의 최소값은 %d 입니다.\n", Min(input, sizeof(input)/sizeof(int)));
}

void exam1_2(void) {
    float input;
    int select;
    printf("변환할 값을 선택하세요 (섭씨 > 화씨 : 1, 화씨 > 섭씨 : 2) : ");
    select = ReadNum();
    if(select==1) {
        printf("변환할 섭씨를 입력하세요 : ");
        input = ReadNum();
        printf("입력하신 온도의 화씨는 %f\n", CelToFah(input));
    }else {
        printf("변환할 화씨를 입력하세요 : ");
        input = ReadNum();
        printf("입력하신 온도의 섭씨는 %f\n", FahToCel(input));
    }
    
}

void exam1_3(void) {
    int input;
    printf("출력을 원하는 수만큼 숫자를 입력 : ");
    input = ReadNum();
    printf("피보나치 수열 : 0, 1");
    Fibo(input);
}

int AddToTotal(int num) {
    total += num;
    return total;
}
