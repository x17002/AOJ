//
//  main.c
//  10
//
//  Created by x17002xx on 2018/12/18.
//  Copyright © 2018 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int x;
    int i=0;
    
    while (1) {
//        printf("x?");
        scanf("%d", &x);
        if (x == 0) {
            break;
        }
        i += 1;
        
        printf("Case %d: %d\n", i, x);
    }
    
    return 0;
}
