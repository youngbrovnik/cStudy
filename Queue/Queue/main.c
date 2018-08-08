//
//  main.c
//  Queue
//
//  Created by youngpilyun on 2018. 4. 10..
//  Copyright © 2018년 Youngpilyun. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#define MAX 5

typedef struct queue {
    int que[MAX];
    int front;
    int rear;
} queue;

void enqueue(int k);
int dequeue(void);
void print(void);
int isEmpty(void);
int front(void);
int size(void);

queue Q;

int main(int argc, const char * argv[]) {
    
    int inputNum;
    
    Q.front=0;
    Q.rear=-1;
    
    printf("---- Queue 프로그램 ----\n");
    
    while(1){
        printf("원하는 입력 선택 (enqueue=1, dequeue=2, size=3, isEmpty=4, print=5, front=6, quit=0) :");
        scanf("%d",&inputNum);
        switch (inputNum) {
            case 0:
                printf("queue 프로그램 종료\n");
                return 0;
            case 1:
                printf("입력할 숫자는:");
                scanf("%d", &inputNum);
                enqueue(inputNum);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                printf("queue의 size는 %d입니다\n",size());
                break;
            case 4:
                if (isEmpty()==1) {
                    printf("queue가 비어있습니다.\n");
                    break;
                }
                printf("queue가 비어있지 않습니다.\n");
                break;
            case 5:
                print();
                break;
            case 6:
                printf("fornt의 값 : %d\n", front());
                break;
            default:
                printf("잘못된 입력입니다.\n");
                break;
        }
    }
    return 0;
}

void enqueue(int k) {
    (Q.rear)++;
    
    Q.rear = Q.rear % MAX;
    
    if ((Q.front==Q.rear)&&(isEmpty()!=1)) {
        printf("Queue is full \n");
        (Q.rear)--;
        return;
    }
    Q.que[Q.rear]=k;
    
}

int dequeue(void) {
    int retVal;
    
    Q.front = Q.front % MAX;
    
    if (isEmpty()) {
        printf("Queue is empty \n");
        return 0;
    }
    retVal = Q.que[(Q.front)];
    Q.que[(Q.front)] = NULL;
    (Q.front)++;
    
    return retVal;
}

int front(void) {
    if (isEmpty()) {
        printf("Queue is empty \n");
        return 0;
    }
    return Q.que[Q.front];
}

int isEmpty(void) {
    if (Q.que[Q.front]==NULL){
        return 1;
    }
    return 0;
}

int size(void) {
    if (isEmpty()) {
        return 0;
    }
    return Q.rear - Q.front + 1;
}

void print(void) {
    printf("queue의 값 : ");
    for(int temp=0; temp<MAX; temp++){
        printf("%d ",Q.que[temp]);
    }
    printf("\n");
}
