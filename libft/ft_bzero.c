/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 14:07:31 by sglass            #+#    #+#             */
/*   Updated: 2020/10/31 11:56:36 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*x;

	i = 0;
	x = s;
	if (n == 0)
	{
		return ;
	}
	while (i < n)
	{
		x[i] = '\0';
		i++;
	}
}
