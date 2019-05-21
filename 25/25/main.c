//
//  main.c
//  25
//
//  Created by x17002xx on 2019/05/16.
//  Copyright © 2019 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int m, n;
    int a[100][100], b[100];
    long c[100] = {0};
    
    scanf(" %d %d", &m, &n);
    
    for(int i=0; i<m; ++i){
        for(int j=0; j<n; ++j){
            scanf(" %d", &a[i][j]);
        }
    }
    
    for(int i=0; i<n; ++i){
        scanf(" %d", &b[i]);
    }
    
    for(int i=0; i<m; ++i){
        for(int j=0; j<n; ++j){
            c[i] += a[i][j]*b[j];
        }
    }
    
    for(int i=0; i<m; ++i)
        printf("%ld\n", c[i]);
    
    return 0;
}
