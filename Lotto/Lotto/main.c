//
//  main.c
//  Lotto
//
//  Created by youngpilyun on 2018. 3. 1..
//  Copyright © 2018년 Youngpilyun. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void BubbleSort(int ary[][6], int len, int lenlen);

int main(int argc, const char * argv[]) {
    int randNum;
    int srcArray[5][6];
    
    printf("로또 숫자 생성 프로그램\n");
    
    // 난수 초기화
    srand((unsigned int)time(NULL));
    
    
    for(int j = 0; j<5; j++){
        // 난수 생성
        for (int idx = 0; idx < 6; idx++) {
            // 1 에서 9 까지 난수 생성
            randNum = (rand() % 45) + 1;
            //        이전에 저장된 값과 중복 검사
            
            for (int i = 0; idx > i; i++){
                while (srcArray[j][i] == randNum){
                    randNum = (rand() % 9) + 1;
                }
            }
            srcArray[j][idx] = randNum;
            //        랜덤력출력
            //        printf("%d ", srcArray[idx]);
        }
    }
    
    BubbleSort(srcArray, 6, 5);
    
    for (int i=0; i<5; i++){
        for (int j=0; j<6; j++) {
            printf("%d ", srcArray[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

void BubbleSort(int ary[][6], int len, int lenlen) {
    int i, j;
    int temp;
    
    for(int k=0; k<lenlen; k++){
        for(i=0; i<len-1; i++) {
            for (j=0; j<(len-i)-1; j++) {
                if(ary[k][j]>ary[k][j+1]) {
                    temp = ary[k][j];
                    ary[k][j]=ary[k][j+1];
                    ary[k][j+1]=temp;
                }
            }
        }
    }
    
}
