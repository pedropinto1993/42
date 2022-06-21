/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pepinto <pepinto@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 15:49:43 by pepinto           #+#    #+#             */
/*   Updated: 2022/06/18 14:58:18 by pepinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*pointer;

	pointer = (void *)malloc(n * size);
	if (pointer != NULL)
	{
		ft_memset(pointer, 0, n * size);
	}
	return (pointer);
}

void	*ft_memset(void *b, int c, size_t len)
{
	char	*ptr;

	ptr = (char *)b;
	while (len > 0)
	{
		ptr[len - 1] = c;
		len--;
	}
	return (b);
}

char	*ft_strjoin(char const *str1, char const *str2)
{
	unsigned int	len1;
	unsigned int	len2;
	unsigned int	i;
	unsigned int	j;
	char			*dest;

	if (str1 == NULL || str2 == NULL)
		return (NULL);
	len1 = ft_strlen(str1);
	len2 = ft_strlen(str2);
	i = 0;
	j = 0;
	dest = malloc(sizeof(char) * (len1 + len2 + 1));
	while (str1[i] != '\0')
	{
		dest[i] = str1[i];
		i++;
	}
	while (str2[j] != '\0')
		dest[i++] = str2[j++];
	dest[i] = '\0';
	return (dest);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != (char)c)
	{
		if (*str == '\0')
		{
			return ((char *) '\0');
		}
		str++;
	}
	return (str);
}
