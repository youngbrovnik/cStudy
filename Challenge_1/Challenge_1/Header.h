//
//  Header.h
//  Challenge_1
//
//  Created by youngpilyun on 2017. 12. 22..
//  Copyright © 2017년 Youngpilyun. All rights reserved.
//

#ifndef Header_h
#define Header_h


#endif /* Header_h */

int ReadNum(void) {
    int input;
    scanf("%d", &input);
    return input;
}

void MultiTable(int num) {
    for(int i = 1; i < 10; i++){
        printf("%d X %d = %d\n", num, i, num*i);
    }
}

int GCD(int num1, int num2) {
    int r=1;
    while(r){
        if(num1>num2){
            r = num1%num2;
        }else{
            r = num2%num1;
        }
        num1 = num2;
        num2 = r;
    }
    return num1;
}

int PrimeNumber(int num){
    for(int i=2; i<num; i++){
        if(num%i==0){
            return 0;
        }
    }
    return num;
}

int Square(int num){
    static int result = 2;
    if (num<=1) {
//        printf("2의 승은 %d",result);
        return result;
    }else {
        result=result<<1;
        Square(num-1);
        return result;
    }
}

int Factorial(int num){
    if(num<=0){
        return 1;
    } else {
        return num * Factorial(num-1);
    }
}

int Fibo(int n){
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }else {
        return Fibo(n-1)+Fibo(n-2);
    }
}
