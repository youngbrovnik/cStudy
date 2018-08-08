//
//  main.c
//  Challenge_4
//
//  Created by youngpilyun on 2018. 3. 5..
//  Copyright © 2018년 Youngpilyun. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
typedef struct _book book;
struct _book {
    char author[50];
    int pages;
    char title[50];
};

typedef struct _compNum compNum;
struct _compNum {
    float realNum;
    float imagiNum;
};

void exam1(void);
void exam2(void);
void exam3(void);
void exam4(void);
void exam5(void);

int main(int argc, const char * argv[]) {
    
    
    exam1();
//    exam2();
//    exam3();
//    exam4();
//    exam5();
    
    return 0;
}

void exam1(void){

    book p[3];
    
    printf("도서 정보 입력\n");
    for(int i=0; i<3; i++){
        fputs("저자 : ", stdout);
        fgets(p[i].author, sizeof(p[i].author), stdin);
        fflush(stdin);
        printf("제목 : ");
        fgets(p[i].title, sizeof(p[i].title), stdin);
        fflush(stdin);
        printf("페이지 수 : ");
        scanf("%d", &p[i].pages);
        fflush(stdin);
    }
    
    printf("\n");
    printf("도서 정보 출력\n");
    for (int i=0; i<3; i++) {
        printf("저자 : %s", p[i].author);
        printf("제목 : %s", p[i].title);
        printf("페이지 수 : %d", p[i].pages);
    }
}

void exam2(void){
    int countBooks;
    
    printf("입력할 책의 수를 입력 : ");
    scanf("%d", &countBooks);
    book *p[countBooks];
    
    printf("도서 정보 입력\n");
    for(int i=1; i<countBooks+1; i++){
        p[i] = (book*) malloc(sizeof(book));
        printf("저자 :");
        fgets(p[i]->author, 20, stdin);
        //        printf("제목 :");
        //        fgets(p[i]->title, 20, stdin);
        //        printf("페이지 수 :");
        //        scanf("%d", &p[i]->pages);
    }
    
    printf("\n");
    printf("도서 정보 출력\n");
    for (int i=0; i<countBooks; i++) {
        printf("저자 : %s\n", p[i]->author);
        printf("제목 : %s\n", p[i]->title);
        printf("페이지 수 : %d\n", p[i]->pages);
    }
}

void exam3(void){
    compNum compArr[2];
    for (int i=0; i<2; i++) {
        printf("복소수 입력 %d[실수 허수]: ",i+1);
        scanf("%g %g",&compArr[i].realNum, &compArr[i].imagiNum);
    }
    printf("합의결과] 실수: %g 허수: %gi\n", compArr[0].realNum+compArr[1].realNum, compArr[0].imagiNum+compArr[1].imagiNum);
    printf("곱의결과] 실수: %g 허수: %gi\n", compArr[0].realNum*compArr[1].realNum-compArr[0].imagiNum*compArr[1].imagiNum, compArr[1].realNum*compArr[0].imagiNum+compArr[0].realNum*compArr[1].imagiNum);
    
}

void exam4(void){
    char str[50];
    int acount=0, pcount=0;
    FILE *fp=fopen("simple.txt", "rt");
//    if (fp==NULL) {
//        puts("파일오픈 실패!");
//        return -1;
//    }
    
    while(fscanf(fp, "%s", str) != EOF){
        if(str[0]=='a'){
            acount++;
        } else if(str[0]=='p'){
            pcount++;
        }
        
    }
    printf("A로 시작하는 단어의 수: %d \n", acount);
    printf("P로 시작하는 단어의 수: %d \n", pcount);
    
    fclose(fp);
}

void exam5(void){
    int same = 0;
    FILE *fp1=fopen("d1.txt", "rt");
    FILE *fp2=fopen("d2.txt", "rt");
    
    while(!(feof(fp1)&&feof(fp2))){
        if(getc(fp1) == getc(fp2)){
            same = 1;
        } else {
            same = 0;
            break;
        }
    }
    
    if (same==1) {
        printf("두 개의 파일은 완전히 일치합니다.\n");
    } else {
        printf("두 개의 파일은 서로 다릅니다.\n");
    }
}
