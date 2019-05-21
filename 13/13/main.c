//
//  main.c
//  13
//
//  Created by x17002xx on 2019/05/08.
//  Copyright © 2019 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b,d,r;
    double f;
    scanf("%d %d",&a,&b);
    d=a/b;
    r=a%b;
    f=(double)a/(double)b;
    printf("%d %d %f",d,r,f);
    return 0;
}
