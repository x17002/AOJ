//
//  main.c
//  05
//
//  Created by x17002xx on 2018/12/11.
//  Copyright © 2018 AIT. All rights reserved.
//

#include <stdio.h>
int main(int argc, const char * argv[]) {
    int a, b;
    scanf("%d %d",&a, &b);
    if(a>b){
        printf("a>b\n");
    }else if (a==b){
        printf("a==b\n");
    }else{
        printf("a<b\n");
    }
    return 0;
}
