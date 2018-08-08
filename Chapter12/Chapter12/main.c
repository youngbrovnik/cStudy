//
//  main.c
//  Chapter12
//
//  Created by youngpilyun on 2018. 1. 15..
//  Copyright © 2018년 Youngpilyun. All rights reserved.
//

#include <stdio.h>

void exam1_1(void);
void exam1_2(void);

int main(int argc, const char * argv[]) {
//    int num=10;
//    int *pnum=&num;
//    printf("%d\n",num);
//    *pnum=20;
//    printf("%d\n",*pnum);
//    printf("%d\n",num);
    
    
//    int num1=10;
//    int num2=num1;
//    num1=30;
    
//    exam1_1();
    exam1_2();
    
    return 0;
}


void exam1_1(void) {
    int num=10;
    int *ptr1=&num;
    int *ptr2=ptr1;
    
    (*ptr1)++;
    (*ptr2)++;
    printf("%d \n", num);
}

void exam1_2(void) {
    int num1=10, num2=20;
    int *ptr1=&num1, *ptr2=&num2;
    *ptr1+=10;
    *ptr2-=10;
    ptr1=&num2;
    ptr2=&num1;
    
    printf("ptr1 = %d \nptr2 = %d \n", *ptr1, *ptr2);
}
