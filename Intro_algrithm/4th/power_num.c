//
//  power_num.c
//  Intro_algrithm
//
//  Created by xin chen on 10/12/2016.
//  Copyright © 2016 xin chen. All rights reserved.
//

#include "power_num.h"

int power(int num, int power_n)
{
    if (power_n == 1) {
        return num;
    }
    if (power_n % 2 == 0) {
        return power(num, power_n / 2) * power(num, power_n / 2);
    }
    else
    {
        return power(num, (power_n -1) / 2) * power(num, (power_n - 1) / 2) * num;
    }
}
