//
//  main.c
//  18
//
//  Created by x17002xx on 2019/05/14.
//  Copyright © 2019 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int h,w;
    while (1) {
        scanf("%d %d",&h,&w);
        for (int i=0; i<h; i++) {
            printf("#");
            for (int j=1; j<w; j++) {
                printf("#");
            }
            printf("\n");
        }
        if (h==0 && w==0) {
            break;
        }
    }
    return 0;
}
