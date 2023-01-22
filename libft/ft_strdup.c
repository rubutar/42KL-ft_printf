/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbutarbu <rbutarbu@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 22:27:59 by rbutarbu          #+#    #+#             */
/*   Updated: 2022/08/07 19:43:11 by rbutarbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*src;

	if (!s1)
		return (NULL);
	src = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + 1));
	if (!src)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		src[i] = s1[i];
		i++;
	}
	src[i] = 0;
	return (src);
}
