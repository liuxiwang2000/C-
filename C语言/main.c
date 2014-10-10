//
//  main.c
//  C语言
//
//  Created by user on 14-9-4.
//  Copyright (c) 2014年 user. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])//数量和值
{

    // insert code here...
    printf("Hello, C!\n");
    for (int x=0; x<argc; x++) {
        printf("%s\n",argv[x]);
    }
    return 0;
}

