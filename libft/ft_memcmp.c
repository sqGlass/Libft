/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 20:06:33 by sglass            #+#    #+#             */
/*   Updated: 2020/10/31 11:59:59 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char*)s1)[i] < ((unsigned char *)s2)[i] ||
		((unsigned char*)s1)[i] > ((unsigned char *)s2)[i])
		{
			return ((unsigned char*)s1)[i] - ((unsigned char*)s2)[i];
		}
		i++;
	}
	return (0);
}
