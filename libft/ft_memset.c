/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 10:54:19 by sglass            #+#    #+#             */
/*   Updated: 2020/10/31 16:09:44 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;
	unsigned char	*x;
	unsigned char	cc;

	i = 0;
	x = b;
	cc = c;
	while (i < len)
	{
		*x++ = cc;
		i++;
	}
	return (b);
}
