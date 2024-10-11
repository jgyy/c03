/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 10:24:00 by jegoh             #+#    #+#             */
/*   Updated: 2023/08/11 10:33:18 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlen(const char *str)
{
	unsigned int	length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	total_len;
	unsigned int	copy_len;
	unsigned int	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	total_len = dest_len + src_len;
	if (size <= dest_len)
		return (src_len + size);
	copy_len = size - dest_len - 1;
	i = 0;
	while (src[i] != '\0' && i < copy_len)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (total_len);
}
