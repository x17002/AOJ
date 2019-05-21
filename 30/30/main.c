//
//  main.c
//  30
//
//  Created by x17002xx on 2019/05/17.
//  Copyright © 2019 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char ch;
    while((ch = getchar()) != EOF){
        if(ch >= 97 && ch <= 122)
            printf("%c",ch-32);
        else if(ch >= 65 && ch <= 90)
            printf("%c",ch+32);
        else
            printf("%c",ch);
    }
    return 0;
}
