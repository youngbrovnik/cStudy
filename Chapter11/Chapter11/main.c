//
//  main.c
//  Chapter11
//
//  Created by youngpilyun on 2017. 12. 28..
//  Copyright © 2017년 Youngpilyun. All rights reserved.
//

#include <stdio.h>
#include "Header.h"

void exam1_1(void);
void exam1_2(void);
void exam2_1(void);
void exam2_2(void);
void exam2_3(void);

int main(int argc, const char * argv[]) {
//    exam1_1();
//    exam1_2();
//    exam2_1();
//    exam2_2();
    exam2_3();
    
//    char str[50];
//    int idx=0;
//
//    printf("문자열 입력: ");
//    scanf("%s", str);
//    printf("입력 받은 문자열 : %s \n", str);
//
//    printf("문자단위 출력: ");
//    while(str[idx] != '\0') {
//        printf("%c", str[idx]);
//        idx++;
//    }
//    printf("\n");

//    char str[50]="I like C programing";
//    printf("string: %s \n", str);
//
//    str[8]='\0';
//    printf("string: %s \n", str);
//
//    str[6]='\0';
//    printf("string: %s \n", str);
//
//    str[1]='\0';
//    printf("string: %s \n", str);
    
    return 0;
}

void exam1_1(void) {
    int arr[5];
    
    //배열의 크기를 입력하세요
    for(int i=0; i<sizeof(arr)/sizeof(int); i++) {
        printf("%d 번째 숫자 입력 : ", i+1);
        arr[i] = ReadNum();
    }
    
    printf("입력된 정수 중에서 최댓값은 %d \n", Max(arr, sizeof(arr)/sizeof(int)));
    printf("입력된 정수 중에서 최소값은 %d \n", Min(arr, sizeof(arr)/sizeof(int)));
    printf("입력된 정수의 총 합은 %d \n", Sum(arr, sizeof(arr)/sizeof(int)));
}

void exam1_2(void) {
    char arr[]="\"Good time\"";
    printf("%s \n",arr);
}

void exam2_1(void) {
    char arr[100];
    int count=0;
    
    printf("영단어를 입력하세요 : ");
    scanf("%s", arr);
    
    for(int i=0; arr[i]!='\0'; i++){
        count=i+1;
        if (i > 50) {
            printf("문자열이 너무 깁니다. \n");
            return;
        }
    }
    
    printf("문자열의 길이 : %d\n", count);
}

void exam2_2(void) {
    // 문자 뒤집기
    char arr[100];
    int count=0;
    char temp;
    
    printf("영단어를 입력하세요 : ");
    scanf("%s", arr);
    
    for(int i=0; arr[i]!='\0'; i++) {
        count=i+1;
    }
    
    for(int i=0; count/2 > i; i++) {
        temp=arr[i];
        arr[i]=arr[count-1-i];
        arr[count-1-i]=temp;
    }
    
    printf("입력한단어의 역순은 : %s\n", arr);
}

void exam2_3(void) {
    // 아스키코드 값이 큰 글자
    char arr[100];
    int count=0;
    int maxVal;
    
    printf("영단어를 입력하세요 : ");
    scanf("%s", arr);
    
    for(int i=0; arr[i]!='\0'; i++){
        count=i+1;
    }
    maxVal=arr[0];
    for(int i=1; i<count; i++) {
        if(arr[i]>maxVal) {
            maxVal = arr[i];
        }
    }
    printf("입력된 단어 중에서 아스키 값이 큰 문자는 %c \n", maxVal);
}
