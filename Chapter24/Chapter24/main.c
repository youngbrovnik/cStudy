//
//  main.c
//  Chapter24
//
//  Created by youngpilyun on 2018. 2. 21..
//  Copyright © 2018년 Youngpilyun. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
//    FILE *fp=fopen("data.txt", "wt");
//    if(fp==NULL) {
//        puts("파일오픈 실패!");
//        return -1;
//    }
//
//    fputc('A', fp);
//    fputc('B', fp);
//    fputc('C', fp);
//    fclose(fp);
//    return 0;
    
//    int ch;
//    FILE *fp=fopen("data.txt", "rt");
//    if (fp==NULL) {
//        puts("파일오픈 실패!");
//        return -1;
//    }
//
//    for (int i=0; i<3; i++) {
//        ch=fgetc(fp);
//        printf("%c \n", ch);
//    }
//    fclose(fp);
//    return 0;
    
//    FILE *fp=fopen("simple.txt", "wt");
//    if (fp==NULL) {
//        puts("파일오픈 실패!");
//        return -1;
//    }
//
//    fputc('A', fp);
//    fputc('B', fp);
//    fputs("My name is Yun \n", fp);
//    fputs("Your name is Han \n", fp);
//    fclose(fp);
//    return 0;
    
    char str[30];
    int ch;
    FILE *fp=fopen("simple.txt", "rt");
    if (fp==NULL) {
        puts("파일오픈 실패!");
        return -1;
    }

    ch=fgetc(fp);
    printf("%c \n", ch);
    ch=fgetc(fp);
    printf("%c \n", ch);

    fgets(str, sizeof(str), fp);
    printf("%s", str);
    fgets(str, sizeof(str), fp);
    printf("%s", str);

    fclose(fp);
    return 0;
}
