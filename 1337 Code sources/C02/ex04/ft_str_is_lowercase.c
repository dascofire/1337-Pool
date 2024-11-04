/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melbakka <melbakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 14:11:09 by melbakka          #+#    #+#             */
/*   Updated: 2024/07/31 15:45:03 by melbakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// int main() {
//     printf("%d\n", ft_str_is_lowercase("a")); 
//     // Should print 1
//     printf("%d\n", ft_str_is_lowercase("D")); 
//                       // Should print 0
//     printf("%d\n", ft_str_is_lowercase(""));
//     // Should print 1
//     return 0;
// }
