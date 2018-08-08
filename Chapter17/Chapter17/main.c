//
//  main.c
//  Chapter17
//
//  Created by youngpilyun on 2018. 2. 26..
//  Copyright © 2018년 Youngpilyun. All rights reserved.
//

#include <stdio.h>

void SwapIntPtr(int **dp1, int **dp2){
    int *temp=*dp1;
    *dp1=*dp2;
    *dp2=temp;
}

int main(int argc, const char * argv[]) {
//    double num = 3.14;
//    double *ptr = &num;
//    double **dptr = &ptr;
//    double *ptr2;
//
//    printf("%9p %9p \n", ptr, *dptr);
//    printf("%9g %9g \n", num, **dptr);
//    ptr2 = *dptr;
//    *ptr2 = 10.99;
//    printf("%9g %9g \n", num, **dptr);
    
    int num1=10, num2=20;
    int *ptr1, *ptr2;
    ptr1=&num1, ptr2=&num2;
    printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);
    
    SwapIntPtr(&ptr1, &ptr2);
    printf("*ptr1, *ptr2: %d %d \n", *ptr1, *ptr2);
    return 0;
}
