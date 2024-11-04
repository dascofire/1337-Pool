/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melbakka <melbakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 12:32:27 by melbakka          #+#    #+#             */
/*   Updated: 2024/07/31 15:41:43 by melbakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!((*str >= 'A' && *str <= 'Z')
				|| (*str >= 'a' && *str <= 'z')))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

//  int main() {
//     printf("%d\n", ft_str_is_alpha("HelloWorld")); // Should print 1
//     printf("%d\n", ft_str_is_alpha("Hello123"));   // Should print 0
//     printf("%d\n", ft_str_is_alpha(""));           // Should print 1
//     return 0;
// }
