//
//  main.c
//  chapter18
//
//  Created by youngpilyun on 2018. 2. 27..
//  Copyright © 2018년 Youngpilyun. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int arr[3][2]={1, 2, 3, 4, 5, 6};
    
    printf("arr: %d \n", sizeof(arr));
    
    printf("arrp[0] : %d \n", sizeof(arr[0]));
    printf("arrp[1] : %d \n", sizeof(arr[1]));
    printf("arrp[2] : %d \n", sizeof(arr[2]));
    return 0;
}
