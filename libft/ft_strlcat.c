/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 13:41:04 by sglass            #+#    #+#             */
/*   Updated: 2020/10/31 20:28:48 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t k;
	size_t i;
	size_t j;
	size_t res;

	i = 0;
	j = 0;
	k = 0;
	while (src[k] != '\0')
		k++;
	while (dst[i] != '\0' && i < dstsize)
		i++;
	if (dstsize == 0)
		return (k);
	res = i + k;
	while (dstsize != 0 && src[j] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (dstsize != 0 && dstsize > i)
		dst[i] = '\0';
	return (res);
}
