//
//  main.c
//  Challenge3
//
//  Created by youngpilyun on 2018. 2. 20..
//  Copyright © 2018년 Youngpilyun. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Rotate(int inputArr[4][4]);
void PrintArr(int inputArr[4][4]);
void exam1(void);
void exam2(void);
void exam3(void);
void exam4(void);
void exam5(void);

struct rcptext
{
    char text[10];
};

int main(int argc, const char * argv[]) {
    
//    exam1();
//    exam2();
//    exam3();
    exam4();
//    exam5();
    
    return 0;
}

void Rotate(int inputArr[4][4]){
    int after[4][4];
    
    for (int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            after[j][3-i] = inputArr[i][j];
        }
    }
    
    for (int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            inputArr[i][j] = after[i][j];
        }
    }
}

void PrintArr(int inputArr[4][4]){
    for (int i=0; i<4; i++){
        for (int j=0; j<4; j++){
            printf("%d ", inputArr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void exam1(void){
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    
    PrintArr(arr);
    
    Rotate(arr);
    PrintArr(arr);
    
    Rotate(arr);
    PrintArr(arr);
    
    Rotate(arr);
    PrintArr(arr);
}

void exam2(void){
    int number = 1;
    int count, inputSize;
    
    printf("숫자를 입력 : ");
    scanf("%d", &inputSize);
    count = inputSize;
    
    int arr5[inputSize][inputSize];
    arr5[0][0] = 1;
    int *ptr=arr5[0];
    int arr[4] = {inputSize, -1, -inputSize, 1};
    
    //가로
    for(int i=0; i<count-1; i++){
        ptr=ptr+1;
        number++;
        *ptr = number;
    }

    int k=0;
    while(1){
        //포인터의 인덱스를 네칸의 배열 형태로 받기 때문에 인덱스가 4이상이면 0으로 조정
        if(k>=4){
            k=0;
        }
        //가로세로를 반복할때마다 count를 1씩 줄임
        count--;
        //count가 0이 되면 브레이크
        if (count<1) {
            break;
        }
        //세로, 가로를 위해 두번 반복
        for(int j=0; j<2; j++){
            //사이즈 만큼 반복
            for(int i=0; i<count; i++){
                ptr=ptr+arr[k];
                number++;
                *ptr = number;
            }
            k++;
        }
    }

    for (int i=0; i<inputSize; i++){
        for (int j=0; j<inputSize; j++){
            printf("%d\t", arr5[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void exam3(void){
    printf("난수의 범위: 0 부터 %d까지 \n", RAND_MAX);
    for(int i=0; i<5; i++){
        printf("난수 출력: %d \n", rand() % 100);
    }
}

void exam4(void){
    srand((int)time(NULL));
    for(int i=0; i<5; i++){
        printf("주사위 %d의 결과 : %d \n",i+1, rand()%6+1);
    }
}

void exam5(void){
    struct rcptext rcparr[3]={{"가위"}, {"바위"}, {"보"}};
    int userRcp, comRcp, win=0, same=0, lose=0;

    srand((int)time(NULL));

    printf("가위바위보 게임\n");
    
    while(lose==0){
        printf("가위는 1 바위는 2 보는 3 : ");
        scanf("%d", &userRcp);
        comRcp = rand()%3+1;
        if(userRcp==comRcp){
            printf("당신은 %s선택, 컴퓨터는 %s선택, 비겼습니다!", rcparr[userRcp-1].text, rcparr[comRcp-1].text);
            same++;
        }else if(userRcp==3 && comRcp==1){
            printf("당신은 %s선택, 컴퓨터는 %s선택, 당신이 졌습니다!", rcparr[userRcp-1].text, rcparr[comRcp-1].text);
            lose++;
        }else if(userRcp==1 && comRcp==3){
            printf("당신은 %s선택, 컴퓨터는 %s선택, 당신이 이겼습니다!", rcparr[userRcp-1].text, rcparr[comRcp-1].text);
            win++;
        }else if(userRcp<comRcp){
                printf("당신은 %s선택, 컴퓨터는 %s선택, 당신이 졌습니다!", rcparr[userRcp-1].text, rcparr[comRcp-1].text);
                lose++;
        }else {
                printf("당신은 %s선택, 컴퓨터는 %s선택, 당신이 이겼습니다!", rcparr[userRcp-1].text, rcparr[comRcp-1].text);
                win++;
        }
        printf("\n");
    }
    
    printf("%d승, %d무 \n", win, same);
}
