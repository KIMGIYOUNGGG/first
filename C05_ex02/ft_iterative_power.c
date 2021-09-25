//
//  ft_iterative_power.c
//  C05_ex02
//
//  Created by kiyoung on 2021/09/25.
//  Copyright © 2021 kiyoung. All rights reserved.
//

#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    int res;
    int i;
    
    if (power < 0)
        return 0;
    else if (power == 0 && nb == 0)
        return 1;
    i = 1;
    res = 1;
    while (i <= power)
    {
        res *= nb;
        i++;
    }
    return (res);
}
