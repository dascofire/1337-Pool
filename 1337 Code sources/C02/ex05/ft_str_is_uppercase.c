/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melbakka <melbakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 14:21:21 by melbakka          #+#    #+#             */
/*   Updated: 2024/07/31 15:45:49 by melbakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!(*str >= 'A' && *str <= 'Z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// int main() {
//     printf("%d\n", ft_str_is_uppercase("a"));  
//     // Should print 0
//     printf("%d\n", ft_str_is_uppercase("D"));     
//     // Should print 1
//     printf("%d\n", ft_str_is_uppercase(""));    
//     // Should print 1
//     return 0;
// }
