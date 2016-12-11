//
//  utils.c
//  Intro_algrithm
//
//  Created by xin chen on 10/12/2016.
//  Copyright © 2016 xin chen. All rights reserved.
//

#include "utils.h"

void print_int_array(int *array, int len)
{
    int* array_p = array;
    int i;
    for ( i = 0; i < len; i++) {
        printf("%d ", array_p[i]);
    }
    printf("\n");
}
