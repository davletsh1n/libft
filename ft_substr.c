/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssandman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 15:25:15 by ssandman          #+#    #+#             */
/*   Updated: 2020/11/06 10:01:30 by ssandman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*copy;

	if (!s || len == 0)
		return ((!s ? NULL : malloc(1 * sizeof(char))));
	copy = malloc((len + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (copy);
	i = start;
	j = 0;
	while (s[i] != '\0' && i < len)
	{
		i++;
	}
	while (len > j)
		copy[j++] = s[start++];
	copy[j] = '\0';
	return (copy);
}
