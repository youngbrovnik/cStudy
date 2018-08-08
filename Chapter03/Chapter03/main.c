//
//  main.c
//  Chapter03
//
//  Created by youngpilyun on 2017. 12. 8..
//  Copyright © 2017년 Youngpilyun. All rights reserved.
//

void exam1_1(void) {
    int input1=0, input2=0;
    printf("두개의 정수 입력 : ");
    scanf("%d %d", &input1, &input2);
    printf("%d - %d = %d\n", input1, input2, input1-input2);
    printf("%d x %d = %d\n", input1, input2, input1*input2);
}

void exam1_2(void) {
    int num[3];
    int result=0;
    for(int i=0; i < 3; i++) {
        printf("%d 번째 숫자 입력 입력 : ", i+1);
        scanf("%d", &num[i]);
    }
    result = num[0]*num[1]+num[2];
    printf("%d x %d + %d = %d\n", num[0], num[1], num[2], result);
}

void exam1_3(void) {
    int inputVal=0;
    printf("숫자입력 : ");
    scanf ("%d", &inputVal);
    printf("입력값의 제곱 값은 %d\n", inputVal*inputVal);
}

void exam1_4(void) {
    int inputVal1=0, inputVal2=0;
    printf("두 수를 입력하세요 : ");
    scanf("%d %d", &inputVal1, &inputVal2);
    printf("몫 = %d, 나머지 = %d\n", inputVal1/inputVal2, inputVal1%inputVal2);
}

void exam1_5(void) {
    int input[3];
    int result=0;
    for(int i=0; i < 3; i++) {
        printf("%d 번째 숫자 입력 : ", i+1);
        scanf("%d", &input[i]);
    }
    result = (input[0]-input[1])*(input[1]+input[2])*(input[2]%input[0]);
    printf("(num1-num2)x(num2+num3)x(num3%%num1)=%d\n", result);
}

void exam1_6(void) {
    
    int num;
    scanf("%d", num);
    printf("num = %d\n", num);
    
}

#include <stdio.h>

int main(int argc, const char * argv[]) {
    exam1_1();
    //    exam1_2();
    //    exam1_3();
    //    exam1_4();
    //    exam1_5();
    //    exam1_6();
    
    return 0;
}

