//
//  main.c
//  23
//
//  Created by x17002xx on 2019/05/16.
//  Copyright © 2019 AIT. All rights reserved.
//

#include <stdio.h>

void outPut(int Array[],char mark){
    for(int i = 1; i <= 13; i++){
        if(Array[i] == 0) printf("%c %d\n",mark,i);
    }
}

int main(int argc, const char * argv[]) {
    char mark[2];
    int n,S[14],H[14],C[14],D[14],tmp;
    for(int i = 0; i < 14; i++) S[i] = H[i] = C[i] = D[i] = 0;
    scanf("%d",&n);
    
    for(int i = 0; i < n; i++){
        scanf("%s %d",mark,&tmp);
        switch(mark[0]){
            case 'S':
                S[tmp] = 1;
                break;
            case 'H':
                H[tmp] = 1;
                break;
            case 'C':
                C[tmp] = 1;
                break;
            case 'D':
                D[tmp] = 1;
                break;
        }
    }
    outPut(S,'S');
    outPut(H,'H');
    outPut(C,'C');
    outPut(D,'D');
}
