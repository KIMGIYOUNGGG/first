#include <stdio.h>
#include <unistd.h>

int ft_iterative_power(int nb, int power);
int ft_recursive_power(int nb, int power);
int ft_sqrt(int nb);
int ft_is_prime(int nb);
int ft_find_next_prime(int nb);
int ft_ten_quuens_puzzle(void);
int qt(void);

int ft_recursive_factorial(int nb)
{
    if (nb < 0)
        return (0);
    else if (nb < 2)
        return (1);
    return nb * ft_recursive_factorial(nb - 1);
}           

int main(void)
{
 //   printf("%d", ft_recursive_factorial(5));
//    printf("%d", ft_iterative_power(10, 0));
//    printf("%d", ft_recursive_power(2, 5));
//    printf("%d", ft_fibonacci(4));
 //   printf("%d", ft_sqrt(2147395600));
 //   printf("%d", ft_is_prime(2147395601));
 //   printf("%d", ft_find_next_prime(2147000041));
    ft_ten_quuens_puzzle();
   
  //  qt();
    printf("\n");
}
