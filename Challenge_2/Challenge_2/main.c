//
//  main.c
//  Challenge_2
//
//  Created by youngpilyun on 2018. 2. 2..
//  Copyright © 2018년 Youngpilyun. All rights reserved.
//

#include <stdio.h>
#include <string.h>

void challenge1(void);
void challenge2(void);
void challenge3(void);
void challenge4(void);
void challenge5(void);
void BubbleSort(int ary[], int len);
void DesSort(int ary[], int len);

int main(int argc, const char * argv[]) {

    challenge1();
//    challenge2();
//    challenge3();
//    challenge4();
//    challenge5();
    
    return 0;
}

// 10개의 수를 입력받아 홀수 짝수 출력
void challenge1(void){
    int arr[10];
    
    //입력부
    printf("10개의 숫자를 입력하세요\n");
    for(int i=0; i<10; i++) {
        printf("%d/10번째 입력 : ", i+1);
        scanf("%d", arr+i);
    }
    
    //출력부
    for(int j=1; j>=0; j--) {
        
        if(j==1){
            printf("홀수 출력: ");
        } else {
            printf("짝수 출력: ");
        }
        
        for(int i=0; i<10; i++) {
            if(arr[i]%2==j){
                printf("%d ", arr[i]);
            }
        }
        printf("\n");
    }
}

// 십진수를 입력받아 이진수로 출력
void challenge2(void){
    int inputVal;
//    int p=0x80;
    int arr[8];
    int leng=0;
    
    //입력부
    printf("십진수를 입력하세요 : ");
    scanf("%d", &inputVal);

    //출력부
    printf("입력값의 2진수 값은 : ");
    
    //배열을 이용한 출력
    for (int i=0; i<8; i++) {
        arr[i]=inputVal%2;
        inputVal=inputVal/2;
        if(inputVal==0){
            leng=i;
            break;
        }
    }
    
    for (int i=0; i<=leng; i++) {
        printf("%d", arr[leng-i]);
    }
    
    //비트 단위 출력
//    for (int j = 0; j < sizeof(inputVal)*2; j++) {
//        if(inputVal&p){
//            printf("1");
//        } else {
//            printf("0");
//        }
//        p=p>>1;
//    }
    
    printf("\n");
}

// 홀수 짝수 양쪽 저장
void challenge3(void){
    int arr[10];
    int *ptr1=arr;
    int *ptr2=&arr[9];
    int inputVal;
    
    printf("10개의 정수 입력 \n");
    for (int i=0; i<10; i++) {
        printf("%d번째 입력 : ", i+1);
        scanf("%d", &inputVal);
        if (inputVal%2==1) {
            *ptr1=inputVal;
            ptr1++;
        } else {
            *ptr2=inputVal;
            ptr2--;
        }
    }
    
    for (int i=0; i<10; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
}

//회문 확인
void challenge4(void){
    char str[50];
    char *ptr1=str;
    char *ptr2;
    int result = 1;
    
    printf("문자열 입력: ");
    scanf("%s", str);
    
    ptr2 = &str[(char) strlen(str)-1];
    
    for (int i=0; i<((char) strlen(str)/2); i++) {
        if (*ptr1==*ptr2) {
            result = 1;
        } else {
            result = 0;
            break;
        }
        ptr1++;
        ptr2--;
    }
    
    if (result==1) {
        printf("회문 입니다.\n");
    } else {
        printf("회문이 아닙니다.\n");
    }
}

void challenge5(void) {
    int arr[7];
    
    for (int i=0; i<sizeof(arr)/sizeof(int); i++) {
        printf("%d 번째 입력: ", i+1);
        scanf("%d", arr+i);
    }
    
    DesSort(arr, sizeof(arr)/sizeof(int));
    
    for (int i=0; i<sizeof(arr)/sizeof(int); i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void DesSort(int ary[], int len) {
    int i, j;
    int temp;
    
    for(i=0; i<len-1; i++) {
        for (j=0; j<(len-i)-1; j++) {
            if(ary[j]<ary[j+1]) {
                temp = ary[j];
                ary[j]=ary[j+1];
                ary[j+1]=temp;
            }
        }
    }
}

void BubbleSort(int ary[], int len) {
    int i, j;
    int temp;
    
    for(i=0; i<len-1; i++) {
        for (j=0; j<(len-i)-1; j++) {
            if(ary[j]>ary[j+1]) {
                temp = ary[j];
                ary[j]=ary[j+1];
                ary[j+1]=temp;
            }
        }
    }
}
