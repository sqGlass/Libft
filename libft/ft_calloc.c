/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 15:47:07 by sglass            #+#    #+#             */
/*   Updated: 2020/11/02 21:03:53 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*c;

	i = 0;
	c = (void*)malloc(count * size);
	if (NULL == c)
		return (NULL);
	while (i < count * size)
	{
		c[i] = '\0';
		i++;
	}
	return (c);
}
