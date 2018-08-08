//
//  main.c
//  chapter02
//
//  Created by youngpilyun on 2017. 11. 16..
//  Copyright © 2017년 Youngpilyun. All rights reserved.
//

#include <stdio.h>

void exam1_1(void){
    printf("홍길동\n홍 길 동\n홍  길  동\n");
}

void exam1_2(void){
    printf("윤영필\n");
    printf("경기도 성남시 분당구 분당동 샛별라이프\n");
    printf("010-4520-8016\n");
}

void exam2_1(void){
    printf("제 이름은 홍길동입니다.\n");
    printf("제 나이는 %d살이고요.\n", 20);
    printf("제가 사는 곳의 번지수는 %d-%d입니다.\n", 123, 456);
}

void exam2_2(void){
    printf("%dx%d=%d\n", 4, 5, 20);
    printf("%dx%d=%d\n", 7, 9, 63);
}


int main(int argc, const char * argv[]) {
    // insert code here...
    exam1_1();
    exam1_2();
    exam2_1();
    exam2_2();
    
    return 0;
}
