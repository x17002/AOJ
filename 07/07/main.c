//
//  main.c
//  06
//
//  Created by x17002xx on 2018/12/13.
//  Copyright © 2018 AIT. All rights reserved.
//

#include <stdio.h>
int main(int argc, const char * argv[]) {
    int a, b, c;
    int tmp;
    printf("a b c?");
    scanf("%d %d %d", &a, &b, &c);
    if (a>b) {
        tmp = a;
        a = b;
        b = tmp;
    }
    if(b>c){
        tmp = b;
        b = c;
        c = tmp;
    }
    if (a>b) {
        tmp = a;
        a = b;
        b = tmp;
    }
    printf("%d %d %d\n", a, b, c);
    return 0;
}
