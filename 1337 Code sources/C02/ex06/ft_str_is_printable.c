/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melbakka <melbakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 14:26:05 by melbakka          #+#    #+#             */
/*   Updated: 2024/07/31 15:46:33 by melbakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 32 && *str <= 126))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// int main() {
//     printf("%d\n", ft_str_is_printable("~"));  // Should print 1
//     printf("%d\n", ft_str_is_printable("Hello\x01World"));  // Should print 0
//     printf("%d\n", ft_str_is_printable(""));                // Should print 1
//     return 0;
// }
