/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melbakka <melbakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 12:16:44 by melbakka          #+#    #+#             */
/*   Updated: 2024/08/03 14:02:42 by melbakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncpy(char *dest, const char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
// int main() {
//     char dest[20];
//     const char *src = "Hello, world!";
//     unsigned int n = 10;

//     ft_strncpy(dest, src, n);
//     printf("Source: %s\n", src);
//     printf("Destination after ft_strncpy: %s\n", dest);

//     return 0;
// }
