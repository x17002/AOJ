//
//  main.c
//  15
//
//  Created by x17002xx on 2019/05/10.
//  Copyright © 2019 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b;
    char op;
    
    while (1) {
        scanf("%d %c %d",&a,&op,&b);
        if (op=='?') {
            break;
        }
        if (op=='+') {
            printf("%d\n",a+b);
        }
        else if (op=='-') {
            printf("%d\n",a-b);
        }
        else if (op=='*') {
            printf("%d\n",a*b);
        }
        else if (op=='/') {
            printf("%d\n",a/b);
        }
    }
    return 0;
}
