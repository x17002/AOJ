//
//  main.c
//  08
//
//  Created by x17002xx on 2018/12/13.
//  Copyright © 2018 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int x;
    while (1) {
        printf("x?");
        scanf("%d", &x);
        printf("case i: %d\n", x);
        if (x == 0) {
            break;
        }
    }
    
    return 0;
}
