//
//  main.c
//  22
//
//  Created by x17002xx on 2019/05/16.
//  Copyright © 2019 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d\n",&n);
    int a[n];
    
    for (int i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    for (int j=n-1; j>0; j--) {
        printf("%d ",a[j]);
    }
    
    printf("%d\n",a[0]);
    return 0;
}
