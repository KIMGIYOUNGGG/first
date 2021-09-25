//
//  ft_sqrt.c
//  C05_ex02
//
//  Created by kiyoung on 2021/09/25.
//  Copyright © 2021 kiyoung. All rights reserved.
//

#include <stdio.h>

int ft_sqrt(int nb)
{
    int i;
    
    i = 1;
    while (i <= 46340)
    {
        if (i * i == nb)
            return i;
        i++;
    }
    return 0;
}
