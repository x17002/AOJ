//
//  main.c
//  09
//
//  Created by x17002xx on 2018/12/17.
//  Copyright © 2018 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a, b;
    while(1){
        scanf("%d %d",&a, &b);
        if(a == 0 && b == 0){
            break;
        }
        if(a > b){
            printf("%d %d\n",b, a);
        }
        else{
            printf("%d %d\n",a, b);
        }
    }
}
