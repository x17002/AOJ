//
//  main.c
//  31
//
//  Created by x17002xx on 2019/05/17.
//  Copyright © 2019 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int sum = 0;
    char ch;
    
    while(1)
    {
        while((ch = getchar()) != '\n'){
            sum += ch - '0';
        }
        if(sum == 0)
            break;
        else{
            printf("%d\n",sum);
            sum = 0;
        }
    }
    return 0;
}
