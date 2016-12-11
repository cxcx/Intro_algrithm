//
//  insert_sort.h
//  Intro_algrithm
//
//  Created by xin chen on 10/12/2016.
//  Copyright © 2016 xin chen. All rights reserved.
//

#ifndef insert_sort_h
#define insert_sort_h

#include <stdio.h>

/**
 对整型数组从大到小排序

 @param array 数组首地址
 @param length 数组长度
 */
void insert_sort_bts(int* array, int length);


/**
 对整型数组从小到大排序

 @param array 数组首地址
 @param length 数组长度
 */
void insert_sort_stb(int* array, int length);

#endif /* insert_sort_h */
