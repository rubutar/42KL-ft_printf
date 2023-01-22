/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutarbu <rbutarbu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 16:36:56 by rbutarbu          #+#    #+#             */
/*   Updated: 2022/08/07 16:59:57 by rbutarbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_str_count(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i] && s)
	{
		if (s[i] != c)
		{
			count ++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (count);
}

int	ft_word_len(char const *s, char c, int i)
{
	int	len;

	len = 0;
	while (s[i] != c && s[i])
	{
		i++;
		len++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	int		i;
	int		start;
	int		count;
	int		len;

	if (!s)
		return (0);
	start = 0;
	i = 0;
	count = ft_str_count (s, c);
	dest = malloc (sizeof(char *) * (count + 1));
	if (!dest)
		return (0);
	while (start < count)
	{
		while (s[i] == c)
			i++;
		len = ft_word_len(s, c, i);
		dest[start] = ft_substr(s, i, len);
		i += len;
		start++;
	}
	dest[start] = 0;
	return (dest);
}
