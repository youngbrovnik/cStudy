//
//  main.c
//  List
//
//  Created by youngpilyun on 2018. 4. 4..
//  Copyright © 2018년 Youngpilyun. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define randmax 99
typedef struct node_elm* node;
struct node_elm {
    int item;
    node next;
};
node insertAtHead(node head, int item);
node insertAtTail(node head, int item);
node insertAtNext(node head, int beforeValue, int insertValue);
node deleteFromHead(node head);
node deleteFromTail(node head);
node deleteAtNext(node head, int beforeValue);
node search(node head, int searchValue);
node randomNodes(node head, int randMax);
node bubleSorting(node head);
void print(node head);

int main(int argc, const char * argv[]) {
    int inputNum, searchNum;
    node mainHead = NULL;
    
    printf("===== List Program =====\n");
    while(1){
        printf("원하는 입력 선택 (insertAtHead=1, delFromHead=2, insertAtTail=3, delFromTail=4, insertAtNext=5, delAtNext=6, randomNode=7, bubleSorting=8, print=9, quit=0) : ");
        scanf("%d", &inputNum);
        switch (inputNum) {
            case 0:
                printf("프로그램 종료\n");
                return 0;
            case 1:
                printf("입력 : ");
                scanf("%d", &inputNum);
                mainHead = insertAtHead(mainHead, inputNum);
                break;
            case 2:
                mainHead = deleteFromHead(mainHead);
                break;
            case 3:
                printf("입력 : ");
                scanf("%d", &inputNum);
                mainHead = insertAtTail(mainHead, inputNum);
                break;
            case 4:
                mainHead = deleteFromTail(mainHead);
                break;
            case 5:
                printf("삽입 전 숫자 입력 : ");
                scanf("%d", &searchNum);
                printf("삽입 할 숫자 입력 : ");
                scanf("%d", &inputNum);
                mainHead = insertAtNext(mainHead, searchNum, inputNum);
                break;
            case 6:
                printf("삭제 전 숫자 입력 : ");
                scanf("%d", &inputNum);
                mainHead = deleteAtNext(mainHead, inputNum);
                break;
            case 7:
                printf("랜덤으로 삽입할 갯수 입력 : ");
                scanf("%d", &inputNum);
                mainHead = randomNodes(mainHead, inputNum);
                print(mainHead);
                break;
            case 8:
                mainHead = bubleSorting(mainHead);
//                print(mainHead);
                break;
            case 9:
                print(mainHead);
                break;
            default:
                printf("잘못된 숫자를 입력하셨습니다.\n");
                break;
        }
    }
    
    return 0;
}

node insertAtHead(node head, int item) {
    node new_node = (node)malloc(sizeof(struct node_elm));
    new_node->item=item;
    new_node->next=head;
    return new_node;
}

node deleteFromHead(node head) {
    if (head==NULL) {
        printf("head is null!!\n");
        return NULL;
    }
    node tmp = head;
    head = head->next;
    printf("%d is deleted\n", tmp->item);
    
    return head;
}

node insertAtTail(node head, int item) {
    node tmp = head;
    if (head==NULL) {
        return insertAtHead(head, item);
    }
    while(tmp->next!=NULL) {
        tmp=tmp->next;
    }
    node new_node = (node)malloc(sizeof(struct node_elm));
    tmp->next = new_node;
    new_node->item=item;
    new_node->next=NULL;
    return head;
}

node deleteFromTail(node head) {
    node tmp = head;
    if (head==NULL) {
        printf("head is null!!\n");
        return NULL;
    }
    if (tmp->next==NULL) {
        printf("%d is deleted\n", tmp->item);
        return NULL;
    }
    while(tmp->next->next!=NULL) {
        tmp=tmp->next;
    }
    printf("%d is deleted\n", tmp->next->item);
    tmp->next=NULL;
    return head;
}

void print(node head) {
    if (head==NULL) {
        printf("head is null!!\n");
        return;
    }
    printf("%d ",head->item);
    for (; head->next!=NULL; ) {
        head=head->next;
        printf("%d ",head->item);
    }
    printf("\n");
}

node insertAtNext(node head, int beforeValue, int insertValue) {
    node tmp = search(head, beforeValue);
    if (tmp==NULL) {
        printf("찾으시는 숫자가 없습니다.\n");
        return head;
    }
    
    node next = tmp->next;
    node new_node = (node)malloc(sizeof(struct node_elm));
    new_node->item=insertValue;
    
    if (tmp->next==NULL) {
        tmp->next = new_node;
        new_node->next=NULL;
        return head;
    }
    tmp->next = new_node;
    new_node->next = next;
    return head;
}

node deleteAtNext(node head, int beforeValue) {
    node tmp = search(head, beforeValue);
    if (tmp==NULL) {
        printf("찾으시는 숫자가 없습니다.\n");
        return head;
    }
    
    if (tmp->next==NULL) {
        printf("찾으신 숫자는 마지막 숫자입니다.\n");
        return head;
    }
    
    printf("%d is deleted\n", tmp->next->item);
    tmp->next = tmp->next->next;
    return head;
}

node search(node head, int searchValue){
    if (head==NULL) {
        return NULL;
    }
    for (;head!=NULL; head=head->next) {
        if ( head->item == searchValue ) {
            return head;
        }
    }
    return NULL;
}

node randomNodes(node head, int randMax) {
    srand((int)time(NULL));
    int randNum = rand()%randmax+1;
    
    for(int i=0; i<randMax; i++){
        while(search(head, randNum)!=NULL){
            randNum = rand()%randmax+1;
        }
        head = insertAtHead(head, randNum);
    }
    return head;
}

//    todo
//    tmp i, j node
node bubleSorting(node head) {
    if (head==NULL){
        printf("head is null!!\n");
        return NULL;
    }
    
    if (head->next==NULL){
        printf("한개의 노드만 존재합니다!!\n");
        return head;
    }
    
    node temphead = head;
    node preNode = NULL;
    node nextnextNode = NULL;
    int lenthOfNode=0;
    
    //노드의 갯수..
    for (;temphead!=NULL; temphead=temphead->next) {
        lenthOfNode++;
    }
    
    for(int i=0; i<lenthOfNode-1; i++) {
        temphead = head;
        preNode = NULL;
        nextnextNode = temphead->next->next;
        
        for (int j=0;j<(lenthOfNode-i)-1; j++) {
            //지금 보고 있는 item이 다음 item보다 큰경우 swap
            if(temphead->item > temphead->next->item){
                
                //temphaed의 next->next를 temphead로
                temphead->next->next = temphead;
                //tmephead 변경
                temphead = temphead->next;
                temphead->next->next = nextnextNode;
                
                //첫번째 노드의 경우
                if (preNode==NULL) {
                    head = temphead;
                } else {
                    preNode->next = temphead;
                }
            }
            
            if (preNode==NULL) {
                preNode = temphead;
            } else {
                preNode = preNode->next;
            }
            
            temphead = temphead->next;
            if (nextnextNode!=NULL) {
                nextnextNode = nextnextNode->next;
            }

            print(head);
        }
        printf("\n");
    }
    return head;
}
