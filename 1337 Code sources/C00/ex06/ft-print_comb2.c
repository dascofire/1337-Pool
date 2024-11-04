/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft-print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melbakka <melbakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 16:27:49 by melbakka          #+#    #+#             */
/*   Updated: 2024/08/06 09:05:24 by melbakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(int n, int m)
{
	ft_putchar (n / 10 + '0');
	ft_putchar (n % 10 + '0');
	ft_putchar (' ');
	ft_putchar (m / 10 + '0');
	ft_putchar (m % 10 + '0');
	if (n != 98)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int		i;
	int		j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_print_comb(i, j);
			j++;
		}
		i++;
	}
	write(1, "\n", 1);
}
// int main (){
// 	ft_print_comb2();
// }