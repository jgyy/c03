/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 09:53:48 by jegoh             #+#    #+#             */
/*   Updated: 2023/08/11 12:39:01 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				diff;
	unsigned int	i;

	i = 0;
	diff = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		diff = s1[i] - s2[i];
		i++;
		if (diff != 0)
			return (diff);
	}
	return (diff);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (to_find[len] != '\0')
		len++;
	if (len == 0)
		return (str);
	while (str[i] != '\0')
	{
		if (ft_strncmp(&str[i], to_find, len) == 0)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
