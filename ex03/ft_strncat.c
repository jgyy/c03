/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 15:34:55 by jegoh             #+#    #+#             */
/*   Updated: 2023/07/29 15:38:05 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, const char *src, unsigned int nb)
{
	char	*original_dest;

	original_dest = dest;
	while (*dest != '\0')
		dest++;
	while (*src != '\0' && nb > 0)
	{
		*dest = *src;
		dest++;
		src++;
		nb--;
	}
	*dest = '\0';
	return (original_dest);
}
