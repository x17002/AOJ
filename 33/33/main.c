//
//  main.c
//  33
//
//  Created by x17002xx on 2019/05/17.
//  Copyright © 2019 AIT. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int j,s_length = 0;
    char s[101],p[101];
    scanf("%s",s);
    scanf("%s",p);
    
    for(int i = 0; s[i] != '\0';i++) s_length++;
    
    for(int left = 0;s[left] != '\0';left++){
        for(j = 0;p[j] != '\0' && p[j] == s[(left+j)%s_length];j++);
        if(p[j] == '\0'){
            printf("Yes\n");
            return 0;
        }
    }
    printf("No\n");
    return 0;
}
