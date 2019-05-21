//
//  main.c
//  09_2
//
//  Created by x17002xx on 2019/05/08.
//  Copyright © 2019 AIT. All rights reserved.
//

#include <stdio.h>

int main(){
    int W,H,x,y,r;
    scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
    if((x >= r && x <= W-r) && (y >= r && y <= H-r))
        printf("Yes\n");
    else{
        printf("No\n");
    }
}
