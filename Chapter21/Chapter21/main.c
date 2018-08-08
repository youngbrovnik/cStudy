//
//  main.c
//  Chapter21
//
//  Created by youngpilyun on 2018. 2. 13..
//  Copyright © 2018년 Youngpilyun. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char *str ="Simple String";
    
    printf("1. puts test ----- \n");
    puts(str);
    puts("So Simple String");
    
    printf("2. fputs test ----- \n");
    fputs(str, stdout); printf("\n");
    fputs("So Simple String", stdout); printf("\n");
    
    printf("3. end of main -----\n");
    return 0;
}
