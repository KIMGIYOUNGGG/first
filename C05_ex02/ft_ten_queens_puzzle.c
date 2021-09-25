//
//  ft_the_ten_queens.c
//  C05_ex02
//
//  Created by kiyoung on 2021/09/25.
//  Copyright © 2021 kiyoung. All rights reserved.
//

#include <unistd.h>
void ft_put_arr(int arr[10])
{
    int i;
    
    i = 0;
    while (i < 10)
    {
        arr[i] += '0';
        write(1, &arr[i], 1);
    }
}

int ft_is_correct_arr(int *arr, int idx, int next)
{
    int i;
    
    i = 0;
    while (i < idx)
    {
        if (arr[i] == next || arr[i] - next == i - idx || arr[i] - next == idx - i)
            return 0;
        i++;
    }
    return 1;
}
void ft_find_recur(int arr[10], int *count, int idx)
{
    int i;

    if (idx == 10)
    {
        *count += 1;
        ft_put_arr(arr);
    }
    else
    {
        i = 0;
        while (i < 10)
        {
            if (ft_is_correct_arr(arr, idx, i))
            {
                arr[idx] = i;
                ft_find_recur(arr, count, idx + 1);
            }
            i++;
        }
    }
}

int ft_ten_queens_puzzle(void)
{
    int arr[10];
    int i;
    int count;
    
    i = -1;
    count = 0;
    while (++i < 10)
        arr[i] = -100;
    ft_find_recur(arr, &count, 0);
    return count;
}
