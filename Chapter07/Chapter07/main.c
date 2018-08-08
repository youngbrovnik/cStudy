//
//  main.c
//  Chapter07
//
//  Created by youngpilyun on 2017. 12. 4..
//  Copyright © 2017년 Youngpilyun. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    void exam1_1(void);
    void exam1_2(void);
    void exam1_3(void);
    void exam1_4(void);
    void exam1_5(void);
    void exam2_1(void);
    void exam2_2(void);
    void exam3_1(void);
    void exam3_2(void);
    void exam3_3(void);
    void exam4_1(void);
    void exam4_2(void);
    
//    exam1_1();
//    exam1_2();
//    exam1_3();
//    exam1_4();
//    exam1_5();
    
//    exam2_1();
//    exam2_2();
    
//    exam3_1();
//    exam3_2();
//    exam3_3();
//    exam4_1();
    exam4_2();
    
    return 0;
}

void exam1_1(void) {
    int num = 0;
    printf("정수를 하나 입력하세요 : ");
    scanf("%d", &num);
    while(num>0) {
        printf("Hello, World!\n");
        num--;
    }
}

void exam1_2(void) {
    int num = 0;
    int num2 = 1;
    printf("정수 하나를 입력하세요 : ");
    scanf("%d", &num);
    
    while(num>0){
        printf("%d ", 3*num2);
        num2++;
        num--;
    }
    printf("\n");
}

void exam1_3(void) {
    int input = 1;
    int sum = 0;
    while(input){
        printf("정수를 입력하세요 (0을 입력하면 종료) : ");
        scanf("%d", &input);
        sum += input;
    }
    printf("입력한 값의 합 : %d \n", sum);
}

void exam1_4(void) {
    int num;
    int num2=9;
    printf("구구단 단을 입력하세요 : ");
    scanf("%d", &num);
    while(num2) {
        printf("%d X %d = %d\n", num, num2, num*num2);
        num2--;
    }
}

void exam1_5(void) {
    float average=0;
    int count;
    int count2=0;
    int inp;
    printf("몇개의 정수를 입력하실 건가요? : ");
    scanf("%d", &count);
    while(count) {
        printf("%d 번째 정수를 입력하세요 : ", count2+1);
        scanf("%d", &inp);
        average += inp;
        count--;
        count2++;
    }
    average = average / count2;
    printf("평균값은 %f 입니다. \n", average);
}


void exam2_1(void) {
    int num=1;
    int inp;
    int sum=0;
    printf("다섯개의 정수를 입력하세요 \n");
    while(num<6){
        printf("%d 번째 수를 입력하세요 : ", num);
        scanf("%d", &inp);
        while(inp>0) {
            sum += inp;
            num++;
            inp=0;
        }
    }
    printf("입력한 다섯 값의 합은 %d 입니다.\n", sum);
}

void exam2_2(void) {
    int num1=0, num2=0;
    while(num1<5) {
        while(num2) {
            printf("o");
            num2--;
        }
        num1++;
        num2=num1;
        printf("*\n");
    }
}

void exam3_1(void) {
    int num=1, total=0;
    while(num!=0) {
        printf("정수 입력(0 to quit) : ");
        scanf("%d", &num);
        total += num;
    }
    printf("합계 : %d", total);
    printf("\n");
}

void exam3_2(void) {
    int num=0;
    int sum=0;
    do {
        do {
            sum+=num;
            num++;
        } while(num%2==0);
        num++;
    } while(num<=100);
    printf("0이상 100이하의 정수 중 짝수의 합은 %d 입니다.\n",sum);
}

void exam3_3(void) {
    int cur=2;
    int is=0;
    
    do {
        do {
            is++;
            printf("%d X %d = %d\n", cur, is, cur*is);
        } while(is<9);
        is=0;
        cur++;
    } while(cur<10);
}

void exam4_1(void) {
    int input1, input2;
    int sum=0;
    printf("두개의 정수를 입력하세요 : ");
    scanf("%d %d", &input1, &input2);
    
    if (input1 > input2) {
        for ( ; input1>=input2; input2++) {
            sum+=input2;
        }
        printf("두 숫자와 사이의 값을 포합한 합은 %d \n", sum);
    } else {
        for ( ; input2>=input1; input1++) {
            sum+=input1;
        }
        printf("두 숫자와 사이의 값을 포합한 합은 %d \n", sum);
    }
    
}

void exam4_2(void) {
    int factorial=1;
    int n, n1;
    printf("펙토리얼 값을 입력하세요 : ");
    scanf("%d", &n);
    n1=n;
    for( ; n>0; n--) {
        factorial*=n;
    }
    printf("%d! = %d \n", n1, factorial);
}
