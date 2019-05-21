//
//  main.c
//  34
//
//  Created by x17002xx on 2019/05/17.
//  Copyright © 2019 AIT. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    int ch1_length = 0,ch2_length = 0,div;
    for(int i = 0; ch1[i] != '\0';i++) ch1_length++;
    for(int i = 0; ch2[i] != '\0';i++) ch2_length++;
    if(ch1_length != ch2_length) return -1;
    for(int i = 0; ch1[i] != '\0';i++)
    {
        div = ch1[i] -ch2[i];
        if(div != 0 && div != 32 && div != -32)
            return -1;
    }
    return 0;
}

int main(){
    char W[11],T[1001];
    int count = 0;
    scanf("%s",W);
    while(true){
        scanf("%s",T);
        if(strcmp("END_OF_TEXT",T) == 0) break;
        if(stricmp(T, W) == 0) count++;
    }
    printf("%d\n",count);
}
