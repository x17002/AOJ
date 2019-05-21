//
//  main.c
//  28
//
//  Created by x17002xx on 2019/05/17.
//  Copyright © 2019 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
        int r,c,sum,total_sum = 0;
        scanf("%d %d",&r,&c);
        int table[r+1][c+1];
        
        for(int i = 0; i < r+1; i++){
            for(int j = 0; j < c+1; j++){
                table[i][j] = 0;
            }
        }
        
        for(int i = 0; i < r; i++){
            sum = 0;
            for(int j = 0; j < c; j++){
                scanf("%d",&table[i][j]);
                sum += table[i][j];
                table[r][j] += table[i][j];
            }
            table[i][c] = sum;
            total_sum += sum;
        }
        table[r][c] = total_sum;
        
        for(int i = 0; i < r+1; i++){
            for(int j = 0; j < c; j++){
                printf("%d ",table[i][j]);
            }
            printf("%d\n",table[i][c]);
        }
}
