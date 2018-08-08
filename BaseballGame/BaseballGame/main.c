//
//  main.c
//  BaseballGame
//
//  Created by youngpilyun on 2018. 1. 9..
//  Copyright © 2018년 Youngpilyun. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define overflow 2
#define overlap 3
#define ok 1

//    중복이 무한히 반복.....................
//    야구 게임 과제.
//    1. 난수 생성 - 중복 제거.
//    2. 사용자로부터 3개의 정수 (1 ~ 9) 까지 입력 받는 부분.
//    3. 야구게임 (다 맞출때까지 수행 - 쓰리 스트라이크)

int isValid(int arr[3]);

int main(int argc, const char * argv[]) {
    int randNum, strikeCount, bollCount, inputCount=1;
    int srcArray[3], inputArray[3];
    
    printf("=====야구 게임=====\n");
    printf("세 개의 정수를 입력 해서 야구 게임을 즐기세요.\n");
    printf("숫자와 자리수를 모두 맞으면 스트라이크, 숫자만 맞으면 볼이 됩니다.\n");
    
    
    // 난수 초기화
    srand((unsigned int)time(NULL));
    
    
    
    // 구조 좀더 간단히
    // 난수 생성
    for (int idx = 0; idx < 3; idx++) {
        // 1 에서 9 까지 난수 생성
        randNum = (rand() % 9) + 1;
//        이전에 저장된 값과 중복 검사
        
        for (int i = 0; idx > i; i++){
            while (srcArray[i] == randNum){
                randNum = (rand() % 9) + 1;
            }
        }
        srcArray[idx] = randNum;
//        랜덤력출력
//        printf("%d ", srcArray[idx]);
    }
//        printf("\n");
    
    
    
    while (1) {
        strikeCount=0;
        bollCount=0;
        printf("%d번째 입력 ",inputCount);
        printf("세 개의 정수를 입력 하세요 (1~9) ");
        scanf("%d %d %d", &inputArray[0], &inputArray[1], &inputArray[2]);
        
        if (isValid(inputArray) == overflow) {
            printf("1~9의 숫자가 입력 되어야 합니다.\n");
            continue;
        } else if (isValid(inputArray) == overlap) {
            printf("서로다른 세개의 정수가 입력 되어야 합니다.\n");
            continue;
        }
        
        //구조를 좀더 간단히
        for (int idx = 0; idx <3; idx++) {
            if (srcArray[idx]==inputArray[idx]) {
                strikeCount++;
                if (strikeCount==3){
                    printf("3 스트라이크!!\n");
                    return 0;
                }
            }else {
                for (int i = 0; i < 3; i++) {
                    if (srcArray[idx] == inputArray[i]){
                        bollCount++;
                    }
                }
            }
//            printf("%d\n", idx);
        }
        printf("%d 스트라이크, %d 볼\n", strikeCount, bollCount);
        inputCount++;
    }
}
//유효성 검사
int isValid(int arr[3]) {
    for (int idx = 0; idx < 3; idx++) {
//        입력값 범위 검사
        if(arr[idx]<1||arr[idx]>9) {
            return overflow;
        }
//        입력값 중복사검사
        for (int i = 0; idx > i; i++){
            if (arr[idx] == arr[i]){
                return overlap;
            }
        }
    }
    return ok;
}
