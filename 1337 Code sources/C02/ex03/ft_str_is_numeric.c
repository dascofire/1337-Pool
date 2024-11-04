/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melbakka <melbakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 13:04:19 by melbakka          #+#    #+#             */
/*   Updated: 2024/07/31 15:42:38 by melbakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= '0' && *str <= '9'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
// int main() {
//     printf("%d\n", ft_str_is_numeric("1"));  // Should print 1
//     printf("%d\n", ft_str_is_numeric("a"));  // Should print 0
//     printf("%d\n", ft_str_is_numeric(""));        // Should print 1
//     return 0;
// }
