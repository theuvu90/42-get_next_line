/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thivu <thivu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 12:52:19 by thivu             #+#    #+#             */
/*   Updated: 2024/08/09 14:51:01 by thivu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	size_t	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

char	*ft_strchr(char *s, int c)
{
	while (*s && *s != (char)c)
		s++;
	if (*s == (char)c || !c)
		return ((char *)s);
	return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*strjoin;
	size_t	len1;
	size_t	len2;
	size_t	i;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	i = 0;
	strjoin = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!strjoin)
		return (NULL);
	while (i < len1)
	{
		strjoin[i] = s1[i];
		i++;
	}
	while (i < len1 + len2)
	{
		strjoin[i] = s2[i - len1];
		i++;
	}
	strjoin[len1 + len2] = '\0';
	free(s1);
	return (strjoin);
}
