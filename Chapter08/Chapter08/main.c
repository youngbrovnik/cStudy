//
//  main.c
//  Chapter08
//
//  Created by youngpilyun on 2017. 12. 8..
//  Copyright © 2017년 Youngpilyun. All rights reserved.
//

#include <stdio.h>

void exam1_1(void);
void exam1_2(void);
void exam1_3(void);
void exam1_4(void);
void exam2_1(void);
void exam2_2(void);
void exam2_3(void);

int main(int argc, const char * argv[]) {
//    exam1_1();
//    exam1_2();
//    exam1_3();
//    exam1_4();
//    exam2_1();
//    exam2_2();
    exam2_3();
    return 0;
}

void exam1_1(void) {
    for(int i=1; i<=100; i++) {
        if(i%7==0) {
            if(i%9==0){
                printf("7의배수 이면서 9의 배수 : %d \n", i);
            }else {
                printf("7의배수 : %d \n", i);
            }
        }else if (i%9==0) {
            printf("9의배수 : %d \n", i);
        }
    }
}

void exam1_2(void) {
    int input1, input2;
    int result=0;
    printf("두개의 정수를 입력 : ");
    scanf("%d %d", &input1, &input2);
    
    if(input1>input2) {
        result = input1 - input2;
    }else {
        result = input2 - input1;
    }
    
    printf("두수의 차는 : %d 입니다.\n", result);
}

void exam1_3(void) {
    int lang, eng, math;
    int average;
    printf("국어 점수 입력 : ");
    scanf("%d", &lang);
    printf("영어 점수 입력 : ");
    scanf("%d", &eng);
    printf("수학 점수 입력 : ");
    scanf("%d", &math);
    
    average = (lang + eng + math)/3;
    if(average>=90) {
        printf("학점은 A 입니다.\n");
    }else if(average>=80) {
        printf("학점은 B 입니다.\n");
    }else if(average>=70) {
        printf("학점은 C 입니다.\n");
    }else if(average>=50) {
        printf("학점은 D 입니다.\n");
    }else {
        printf("학점은 F 입니다.\n");
    }
}

void exam1_4(void) {
    int input1, input2;
    int result=0;
    printf("두개의 정수를 입력 : ");
    scanf("%d %d", &input1, &input2);
    
    result = input1 > input2 ? input1-input2 : input2-input1;
    
    printf("두수의 차는 : %d 입니다.\n", result);
}

void exam2_1(void) {
    int first, second;
    for(first=2; first<10; first++) {
        for(second=1; second<10; second++){
            if(first%2==1) {
                continue;
            }
            if(first<second) {
                break;
            }
            printf("%d X %d = %d\n",first, second, first*second);
        }
        printf("\n");
    }
}

void exam2_2(void) {
    int A, Z;
    for(A=0; A<10; A++){
        for(Z=0; Z<10; Z++){
            if(A+Z==9){
                printf("  %d %d\n", A, Z);
                printf("+ %d %d\n", Z, A);
                printf("------\n");
                printf("  9 9 \n");
                printf("\n");
            }
        }
    }
}

void exam2_3(void) {
    int n;
    
    scanf("%d", &n);
    
    switch(n/10) {
        case 0:
            printf("0이상 10미만\n");
            break;
        case 1:
            printf("10이상 20미만\n");
            break;
        case 2:
            printf("20이상 30미만\n");
            break;
        default:
            printf("30이상\n");
            
    }
}


