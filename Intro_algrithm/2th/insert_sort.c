//
//  insert_sort.c
//  Intro_algrithm
//
//  Created by xin chen on 10/12/2016.
//  Copyright © 2016 xin chen. All rights reserved.
//

#include "insert_sort.h"


void insert_sort_stb(int* array, int length)
{
    int i;
    for ( i = 1; i < length; i++) {
        int key = array[i];
        int j = i - 1;
        while (j >= 0 && key < array[j]) {
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = key;
    }
}

void insert_sort_bts(int* array, int length)
{
    int i;
    for ( i = 1; i < length; i++) {
        int key = array[i];
        int j = i - 1;
        while (j >= 0 && key > array[j]) {
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = key;
    }
}

