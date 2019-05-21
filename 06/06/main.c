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
//    printf("a b c?");
    scanf("%d %d %d", &a, &b, &c);
    if (a<b) {
        if (b<c) {
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }else{
        printf("No\n");
    }
    return 0;
}
