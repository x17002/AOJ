//
//  main.c
//  12
//
//  Created by x17002xx on 2019/05/08.
//  Copyright © 2019 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b,c,x=0;
    scanf("%d %d %d",&a,&b,&c);
    for (int i=a; i<=b; i++) {
        if(c%i==0){
            x++;
        }
    }
    printf("%d\n",x);
    return 0;
}
