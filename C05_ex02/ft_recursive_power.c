//
//  ft_recursive_power.c
//  C05_ex02
//
//  Created by kiyoung on 2021/09/25.
//  Copyright © 2021 kiyoung. All rights reserved.
//

#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
    int res;
    
    res = 1;
    if (power < 0)
        return 0;
    if (power == 0)
        return 1;
    return nb * ft_recursive_power(nb, power - 1);
}
