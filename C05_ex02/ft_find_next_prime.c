//
//  ft_find_next_prime.c
//  C05_ex02
//
//  Created by kiyoung on 2021/09/25.
//  Copyright © 2021 kiyoung. All rights reserved.
//

#include <stdio.h>

int ft_is_prime(int nb);
/*
int ft_is_prime(int nb)
{
    int i;
    
    i = 2;
    if (nb < 2)
        return 0;
    if (nb == 2)
        return 1;
    while (i <= nb / i)
    {
        if (nb % i == 0)
            return 0;
        i++;
    }
    return 1;
}
*/
int ft_find_next_prime(int nb)
{
    int i;
    
    i = nb;
    while (i <= 2147483647)
    {
        if (ft_is_prime(i) == 1)
            return i;
        i++;
    }
    return 0;
}
