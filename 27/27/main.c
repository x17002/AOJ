//
//  main.c
//  27
//
//  Created by x17002xx on 2019/05/17.
//  Copyright © 2019 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,x,count;
    while(1){
        scanf("%d %d",&n,&x);
        if(n == 0 && x == 0) break;
        count = 0;
        for(int min = 1; min < x/3 && min <= n-2;min++){
            for(int middle = min+1;middle < x - (min+middle) && middle <= n-1; middle++){
                if(x-(min+middle) <= n) count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
