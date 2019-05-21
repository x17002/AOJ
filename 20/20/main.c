//
//  main.c
//  20
//
//  Created by x17002xx on 2019/05/14.
//  Copyright © 2019 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int H,W;
    while(1){
        scanf("%d %d",&H,&W);
        if(H == 0 && W == 0) break;
        for(int i = 0; i < H; i++){
            for(int j = 0; j < W; j++){
                if((i+j)%2 == 0) printf("#");
                else{
                    printf(".");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
}
