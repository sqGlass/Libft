/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 17:10:31 by sglass            #+#    #+#             */
/*   Updated: 2020/10/31 15:27:51 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	const char		*ss;
	unsigned char	cc;

	i = 0;
	ss = s;
	cc = c;
	while (ss[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (ss[i] == cc)
			return ((char *)&ss[i]);
		i--;
	}
	return (NULL);
}
