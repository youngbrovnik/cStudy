//
//  main.c
//  Chapter16
//
//  Created by youngpilyun on 2018. 2. 20..
//  Copyright © 2018년 Youngpilyun. All rights reserved.
//

#include <stdio.h>

void exam1_1(void);
void exam1_2(void);
void exam1_3(void);

int main(int argc, const char * argv[]) {
//    exam1_1();
//    exam1_2();
    exam1_3();
    
    return 0;
}

void exam1_1(void){
    int arr[3][9] = {
        {2, 4, 6, 8, 10, 12, 14, 16, 18},
        {3, 6, 9, 12, 15, 18, 21, 24, 27},
        {4, 8, 12, 16, 20, 24, 28, 32, 36}
    };
    for (int i=0; i<3; i++){
        for (int j=0; j<9; j++){
            printf("%d * %d = %d \n", i+2, j+1, arr[i][j]);
        }
    }
}

void exam1_2(void){
    int arrA[2][4] = {{1, 2, 3, 4},{5, 6, 7, 8}};
    int arrB[4][2];
    
    for (int i=0; i<2; i++){
        for (int j=0; j<4; j++){
            arrB[j][i] = arrA[i][j];
        }
    }
    
    for (int i=0; i<4; i++){
        for (int j=0; j<2; j++){
            printf("%d행 %d열 값 : %d \n", i+1, j+1, arrB[i][j]);
        }
    }
}

void exam1_3(void){
    int arr[5][5] = {
        {5, 4, 6, 5},
        {3, 6, 9, 3},
        {4, 8, 2, 7},
        {3, 8, 9, 7}
    };
    
    
    
    printf("국어 영어 수학 국사 점수 입력 : ");
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            arr[i][4] += arr[i][j];
            arr[4][j] += arr[i][j];
        }
        arr[4][4] += arr[i][4];
    }
    
    
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
}
