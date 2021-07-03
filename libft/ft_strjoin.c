/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinn.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 15:55:33 by sglass            #+#    #+#             */
/*   Updated: 2020/11/04 15:55:57 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		f;
	char	*a;

	i = 0;
	f = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	a = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (a == NULL)
		return (NULL);
	while (s1[f] != '\0')
	{
		a[f] = s1[f];
		f++;
	}
	while (s2[i] != '\0')
	{
		a[f] = s2[i];
		f++;
		i++;
	}
	a[f] = '\0';
	return (a);
}
