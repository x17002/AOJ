//
//  main.c
//  04
//
//  Created by x17002xx on 2018/12/11.
//  Copyright © 2018 AIT. All rights reserved.
//

#include <stdio.h>
int main(int argc, const char * argv[]){
    int x, h, s, m, t;
    scanf("%d", &x);
    t = x % 3600;
    h = x - t;
    s = t % 60;
    m = t - s;
    printf("%d:%d:%d\n", h/3600, m/60, s);
    return 0;
}
