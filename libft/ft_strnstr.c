/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 17:24:37 by sglass            #+#    #+#             */
/*   Updated: 2020/11/04 15:17:30 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		help(const char *hay, const char *nee, int i, int len)
{
	int k;
	int	j;
	int ln;

	j = 0;
	k = 0;
	ln = 0;
	while (nee[ln] != '\0')
		ln++;
	while (hay[i] != '\0' && nee[j] == hay[i] && i < len)
	{
		j++;
		i++;
	}
	if (j == ln)
		return (1);
	else
		return (0);
}

char			*ft_strnstr(const char *hay, const char *nee, size_t len)
{
	size_t	tmp;
	size_t	ln;
	size_t	i;

	i = 0;
	ln = 0;
	tmp = 0;
	while (nee[ln] != '\0')
		ln++;
	if (nee[0] == '\0')
		return ((char*)hay);
	while (hay[i] != '\0' && i < len)
	{
		if (hay[i] == nee[0])
			tmp = help(hay, nee, i, len);
		if (tmp == 1)
		{
			return ((char *)&hay[i]);
		}
		i++;
	}
	return (NULL);
}
