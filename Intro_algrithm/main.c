//
//  main.c
//  Intro_algrithm
//
//  Created by xin chen on 10/12/2016.
//  Copyright © 2016 xin chen. All rights reserved.
//

#include "header.h"
int main(int argc, const char * argv[]) {

    //测试插入排序
    /*
    int array[10] = { 2, 3, 1, 89, 78, 32, 24, 30, 21, 211};
    insert_sort_bts(array, sizeof(array)/sizeof(int));
    print_int_array(array, sizeof(array)/sizeof(int));
    
    insert_sort_stb(array, sizeof(array)/sizeof(int));
    print_int_array(array, sizeof(array)/sizeof(int));
     */
    
    //测试分治法计算幂函数
    int n1 = 10;
    int n2 = 11;
    int result1 = power(2, n1);
    int result2 = power(2, n2);
    printf("%d \n", result1);
    printf("%d \n", result2);
    
    return 0;
}
