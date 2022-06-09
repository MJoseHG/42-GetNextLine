/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahernan <mahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 19:55:07 by mahernan          #+#    #+#             */
/*   Updated: 2022/06/05 19:55:10 by mahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1_len;
	int		i;
	char	*d;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1_len = ft_strlen(s1);
	d = malloc(sizeof(*s1) * (ft_strlen(s2) + s1_len + 1));
	if (!d)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		d[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		d[s1_len + i] = s2[i];
		i++;
	}
	d[s1_len + i] = '\0';
	return (d);
}

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str)
	{
		if (*str == (char)c)
			return (str);
		str++;
	}
	if (*str == '\0' && (char)c == '\0')
		return (str);
	return (0);
}

void	ft_bzero(void *s, size_t n)
{
	char	*pnt;
	size_t	i;

	pnt = (char *)s;
	i = 0;
	while (i < n)
	{
		pnt[i] = 0;
		i++;
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*pnt;

	pnt = malloc(count * size);
	if (((count == SIZE_MAX) && count > 1) || ((size == SIZE_MAX) && size > 1))
		return (NULL);
	if (pnt == 0)
		return (pnt);
	if (!pnt)
		return (NULL);
	ft_bzero(pnt, count * size);
	return (pnt);
}

size_t	ft_strlen(const char *s)
{
	int	c;

	c = 0;
	while (s[c] != '\0')
	{
		++c;
	}
	return (c);
}
