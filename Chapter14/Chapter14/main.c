//
//  main.c
//  Chapter14
//
//  Created by youngpilyun on 2018. 1. 23..
//  Copyright © 2018년 Youngpilyun. All rights reserved.
//

#include <stdio.h>
void ShowArayElem(int *param, int len) {
    int i;
    for(i=0; i<len; i++){
        printf("%d ", param[i]);
    }
    printf("\n");
}

//void Swap(int n1, int n2) {
//    int temp=n1;
//    n1=n2;
//    n2=temp;
//    printf("n1 n2: %d %d \n", n1, n2);
//}

void Swap(int *ptr1, int *ptr2) {
    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}

int SquareVal(int number) {
    number = number * number;
    return number;
}

void SquareRef(int *num) {
    *num = *num * *num;
}

void Swap3(int *n1, int *n2, int *n3) {
    int temp1, temp2;

    temp1 = *n2;
    temp2 = *n3;
    *n2 = *n1;
    *n3 = temp1;
    *n1 = temp2;
}

struct name_card {
    int birthday;
    char name[100];
};

int main(int argc, const char * argv[]) {
    
    struct name_card friend;
    
    friend.birthday = 10;
//    friend.name;
    
    printf("%d\n", friend.birthday);
    printf("%s\n", friend.name);
//    int arr1[3]={1, 2, 3};
//    int arr2[5]={4, 5, 6, 7, 8};
//    ShowArayElem(arr1, sizeof(arr1) / sizeof(int));
//    ShowArayElem(arr2, sizeof(arr2) / sizeof(int));
    
//    int num1=10;
//    int num2=20;
//    printf("num1 num2: %d %d \n", num1, num2);
//
//    Swap(&num1, &num2);
//    printf("num1 num2: %d %d \n", num1, num2);
    
//    문제1-1
//    int inputNumber;
//    int *ptr = &inputNumber;
//
//    printf("제곱할 값을 입력 : ");
//    scanf("%d", ptr);
//
//    printf("call-by-value : %d\n", SquareVal(*ptr));
//    SquareRef(ptr);
//    printf("call-by-reference : %d\n", *ptr);

//    문제1-2
//    int num1, num2, num3;
//    printf("세개의 숫자 입력 : ");
//    scanf("%d %d %d", &num1, &num2, &num3);
//    Swap3(&num1, &num2, &num3);
//    printf("swap 된 숫자 : %d %d %d\n", num1, num2, num3);
    
//    문제2-1
//    입력 인자의 시작 주소를 고정하기위해
    
//    문제2-2
//    고정해논 ptr주소를 *rptr로받아 변경을 시도.
    
    return 0;
}
