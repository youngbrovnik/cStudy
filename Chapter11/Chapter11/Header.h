//
//  Header.h
//  Chapter11
//
//  Created by youngpilyun on 2017. 12. 28..
//  Copyright © 2017년 Youngpilyun. All rights reserved.
//

#ifndef Header_h
#define Header_h


#endif /* Header_h */

int ReadNum(void) {
    int num;
    scanf("%d", &num);
    return num;
}

int Max(int inputArr[], int count){
    int maxVal=inputArr[0];
    for(int i=1; i<count; i++) {
        printf("maxVal : %d\n",maxVal);
        if(inputArr[i]>maxVal) {
            maxVal = inputArr[i];
        }
    }
    return maxVal;
}

int Min(int inputArr[], int count){
    int minVal=inputArr[0];
    for(int i=1; i<count; i++) {
        if(inputArr[i]<minVal) {
            minVal = inputArr[i];
        }
    }
    return minVal;
}

int Sum(int inputArr[], int count){
    int sum=0;
    for(int i=0; i<count; i++) {
        sum += inputArr[i];
    }
    return sum;
}
