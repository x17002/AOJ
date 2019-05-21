//
//  main.c
//  32
//
//  Created by x17002xx on 2019/05/17.
//  Copyright © 2019 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int countTable[256] = {0};
    char ch;
    
    while((ch = getchar()) != EOF){
        countTable[ch]++;
    }
    for(int i = 97; i <=122;i++){
        printf("%c : %d\n",i,countTable[i]+countTable[i-32]);
    }
}
