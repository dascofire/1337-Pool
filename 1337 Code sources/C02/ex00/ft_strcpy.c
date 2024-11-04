/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melbakka <melbakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:49:36 by melbakka          #+#    #+#             */
/*   Updated: 2024/07/31 15:39:44 by melbakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*original_dest;

	original_dest = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (original_dest);
}
// // Function prototype
//  char *ft_strcpy(char *dest, char *src);

// int main() {
//     char src[] = "Hello, World!";
//     char dest[50]; 

//     ft_strcpy(dest, src);

//     printf("Source: %s\n", src);
//     printf("Destination: %s\n", dest);

//     return 0;
// } 
