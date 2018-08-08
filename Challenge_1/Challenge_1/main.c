//
//  main.c
//  Challenge_1
//
//  Created by youngpilyun on 2017. 12. 22..
//  Copyright © 2017년 Youngpilyun. All rights reserved.
//
#include <stdio.h>
#include <math.h>
#include "Header.h"

void Challenge1(void);
void Challenge2(void);
void Challenge3(void);
void Challenge4(void);
void Challenge5(void);
void Challenge6(void);
void Challenge7(void);
void Challenge8(void);
void Challenge9(void);



int main(int argc, const char * argv[]) {
//    Challenge1();
//    Challenge2();
//    Challenge3();
//    Challenge4();
//    Challenge5();
    Challenge6();
//    Challenge7();
//    Challenge8();
//    printf("1! = %d \n", Factorial(1));
//    Challenge9();
    
    return 0;
}

void Challenge1(void){
    int input;
    printf("정수를 입력하세요 : ");
    input = ReadNum();
    printf("입력한 수의 16진수 : %x\n", input);
    
}

void Challenge2(void){
    int input1, input2;
    printf("두개의 정수를 입력하세요\n");
    input1 = ReadNum();
    input2 = ReadNum();
    if(input1 > input2){
        for(;input1 >= input2; input2++){
            MultiTable(input2);
        }
    }else if(input2 > input1){
        for(;input2 >= input1; input1++){
            MultiTable(input1);
        }
    }else{
        MultiTable(input1);
    }
}

void Challenge3(void){
    int input1, input2;
    printf("두개의 정수를 입력하세요\n");
    input1 = ReadNum();
    input2 = ReadNum();
    printf("두수의 최대 공약수는 %d 입니다.\n", GCD(input1, input2));
}

void Challenge4(void){
    int money=35;
    int bread=5;
    int snack=7;
    int coke=4;

    printf("현재 당신이 소유하고 있는 금액 : %d원\n", money*100);
    for(int i=1; i<=money/bread; i++){
        for(int j=1; j<=money/snack; j++){
            for(int k=1; k<=money/coke; k++){
                if((money-bread*i-snack*j-coke*k)==0){
                    printf("크림빵 %d개, 새우깡 %d개, 콜라 %d개 \n", i, j, k);
                }
            }
        }
    }
    printf("어떻게 구입하시겠습니까?\n");
}

void Challenge5(void){
    int count=0;
    
    for(int i = 2; count<10;i++){
        if(PrimeNumber(i)){
            printf("%d ", i);
            count++;
        }
    }
    printf("\n");
}

void Challenge6(void){
    int input, hour=0, min=0, sec=0;
    printf("초(second) 입력: ");
    input = ReadNum();
    hour = input / 3600;
    input = input % 3600;
    min = input / 60;
    sec = input % 60;
    printf("h:%d, m:%d, s:%d \n", hour, min, sec);
}

void Challenge7(void){
    int input;
    int k=0;
    printf("상수 n 입력: ");
    input = ReadNum();
    for(int i=1; (2<<i)<=input; i++){
        k=i+1;
    }
    printf("공식을 만족하는 k의 최댓값은 %d \n", k);
}

void Challenge8(void){
    int input;
    printf("정수 입력 : ");
    input = ReadNum();
    printf("2의 %d승은 %d \n", input, Square(input));
}

void Challenge9(void){
    int input;
    printf("정수 입력 : ");
    input = ReadNum();
    printf("%d의 피보나치 수는 %d \n", input, Fibo(input));
}
