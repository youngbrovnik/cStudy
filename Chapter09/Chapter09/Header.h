//
//  Header.h
//  Chapter09
//
//  Created by youngpilyun on 2017. 12. 21..
//  Copyright © 2017년 Youngpilyun. All rights reserved.
//

#ifndef Header_h
#define Header_h

void Fibo(int num) {
    long long fibo[100];
    fibo[0]=0;
    fibo[1]=1;
    for(int i = 2; i<num; i++) {
        fibo[i]=fibo[i-2]+fibo[i-1];
        printf(", %lld", fibo[i]);
    }
    printf("\n");
}

float CelToFah(float cel){
    return 1.8*cel+32;
}

float FahToCel(float fah){
    return (fah-32)/1.8;
}

int Max(int inputArr[], int count){
    int maxVal=inputArr[0];
    for(int i=1; i<count; i++) {
        if(inputArr[i]>maxVal) {
            maxVal = inputArr[i];
        }
    }
    return maxVal;
}

int Min(int inputArr[], int count){
    int minVal=inputArr[0];

    for(int i=1; i<count; i++) {
        if(inputArr[i]<minVal) {
            minVal = inputArr[i];
        }
    }
    return minVal;
}

int Add(int num1, int num2) {
    return num1 + num2;
}

void ShowAddResult(int num) {
    printf("덧셈결과 출력: %d \n", num);
}

void HowToUseThisProg(void) {
    printf("두 개의 정수를 입력하시면 덧셈결과가 출력됩니다. \n");
    printf("자! 그럼 두 개의 정수를 입력하세요.\n");
}

int ReadNum(void) {
    int num;
    scanf("%d", &num);
    return num;
}

void SmartAddFunc(void) {
    int num1, num2;
    HowToUseThisProg();
    num1 = ReadNum();
    num2 = ReadNum();
    ShowAddResult(Add(num1, num2));
}

int SimpleFuncOne(void) {
    int num=10;
    num++;
    printf("SimpleFuncOne num: %d\n", num);
    return 0;
}

int SimpleFuncTwo(void) {
    int num1=20;
    int num2=30;
    num1++;
    num2--;
    printf("num1 & num2 : %d %d \n", num1, num2);
    return 0;
}

#endif /* Header_h */
