/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melbakka <melbakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:52:37 by melbakka          #+#    #+#             */
/*   Updated: 2024/08/05 12:55:11 by melbakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strlowcase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr != '\0')
	{
		if (*ptr >= 'A' && *ptr <= 'Z')
		{
			*ptr += 32;
		}
		ptr++;
	}
	return (str);
}

// int main() {
//     char str[] = "HELLO , WORLD ! ";
//     printf("Original: %s\n", str);
//     printf("lowerrcase: %s\n", ft_strlowcase(str));
//     return 0;
// }
