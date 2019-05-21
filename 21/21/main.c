//
//  main.c
//  21
//
//  Created by x17002xx on 2019/05/16.
//  Copyright © 2019 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,x;
    scanf("%d",&n);
    
    for(int i = 1; i<= n; i++)
    {
        if(i%3 == 0){
            printf(" %d",i);
        }else{
            x = i;
            do{
                if(x%10 == 3){
                    printf(" %d",i);
                    break;
                }
                x /=10;
            }while(x);
        }
    }
    printf("\n");
    return 0;
}
