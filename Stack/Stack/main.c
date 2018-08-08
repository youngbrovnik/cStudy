//
//  main.c
//  Stack
//
//  Created by youngpilyun on 2018. 3. 29..
//  Copyright © 2018년 Youngpilyun. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#define MAX 5
typedef struct stack {
    int stk[MAX];
    int top;
} stack;

void push(int *S, int k);
int pop(int *S);
void pushSt(stack *S, int k);
int popSt(stack *S);

stack *createStack(void);

int top;
int main(int argc, const char * argv[]) {
    int S[MAX];
    int k;
    top = 0;
    push(S, 10);
    push(S, 28);
    push(S, 150);
    k = pop(S);
    printf("arr first pop = %d\n", k);
    
    stack L, *ST = &L;
    ST->top = 0;
    pushSt(ST, 10);
    pushSt(ST, 28);
    pushSt(ST, 160);
    k = popSt(ST);
    printf("struck first pop = %d\n", k);
    
    stack *STD = createStack();
    STD->top=0;
    pushSt(STD, 10);
    pushSt(STD, 28);
    pushSt(STD, 170);
    k = popSt(STD);
    printf("dynamic first pop = %d\n", k);
    
    return 0;
}

void push(int *S, int k){
    if(top >= MAX){
        exit(1);
    }
    S[top] = k;
    top++;
}

int pop(int *S){
    if(top <= 0){
        exit(1);
    }
    return (S[--top]);
}

void pushSt(stack *S, int k) {
    if(S->top >= MAX){
        exit(1);
    }
    S->stk[S->top]=k;
    (S->top)++;
}

int popSt(stack *S){
    if(S->top <= 0){
        exit(1);
    }
    return (S->stk[--S->top]);
}

stack *createStack(void){
    stack *S;
    S = (stack *)malloc(sizeof(stack));
    return S;
}



