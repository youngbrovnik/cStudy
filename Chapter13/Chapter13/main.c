//
//  main.c
//  Chapter13
//
//  Created by youngpilyun on 2018. 1. 17..
//  Copyright © 2018년 Youngpilyun. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
//    int arr[3]={0, 1, 2};
//    printf("배열의 이름: %p \n", arr);
//    printf("첫 번째 요소: %p \n", &arr[0]);
//    printf("두 번째 요소: %p \n", &arr[1]);
//    printf("세 번째 요소: %p \n", &arr[2]);
//    printf("첫 요소: %d \n", *(arr+0));
//    printf("첫 요소: %d \n", *(arr+1));
//    printf("첫 요소: %d \n", *(arr+2));
    
//    int arr1[3]={1,2,3};
//    double arr2[3]={1.1,2.2,3.3};
//
//    printf("%d %g \n", *arr1, *arr2);
//    *arr1 += 100;
//    *arr2 += 120.5;
//    printf("%d %g \n", arr1[0], arr2[0]);
//    printf("%p %p \n", arr1, arr2);
//    printf("%p %p \n", arr1+1, arr2+1);
    
//    char str1[] = "My String";
//    char *str2 = "Your String";
//
//    printf("%s\n", str1);
//    printf("%s\n", str2);
    
//    char *strArr[3] = {"Simple", "String", "Array"};
//    printf("%s \n", strArr[0]);
//    printf("%s \n", strArr[1]);
//    printf("%s \n", strArr[2]);

    //문제 1
//    int arr[5] = {1,2,3,4,5};
//    int *ptr = arr;
//    for(int i=0; i<sizeof(arr)/sizeof(int); i++) {
//        *ptr+=2;
//        ptr++;
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
    
    //문제 2
//    int arr[5] = {1,2,3,4,5};
//    int *ptr = arr;
//    for(int i=0; i<sizeof(arr)/sizeof(int); i++) {
//        *(ptr+i)+=2;
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
    
    //문제 3
//    int arr[5] = {1,2,3,4,5};
//    int *ptr = arr+4;
//
//    for(int i=sizeof(arr)/sizeof(int)-1; i>=0; i--) {
//        --*ptr;
//        ptr--;
//
//    }
//    for(int i=0; i<sizeof(arr)/sizeof(int); i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
    
    //문제 4
//    int arr[6] = {1,2,3,4,5,6};
//    int *ptr1 = arr, *ptr2 = arr+5;
//    int temp=0;
//
//    for(int i=0; i<sizeof(arr)/sizeof(int)/2; i++) {
//        temp = *(ptr1+i);
//        *(ptr1+i) = *(ptr2-i);
//        *(ptr2-i) = temp;
//    }
//
//    for(int i=0; i<sizeof(arr)/sizeof(int); i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
    
    return 0;
}
