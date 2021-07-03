/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 10:29:16 by sglass            #+#    #+#             */
/*   Updated: 2020/10/31 15:25:06 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	const char		*ss;
	unsigned char	cc;

	i = 0;
	ss = s;
	cc = c;
	while (ss[i] != '\0')
	{
		if (ss[i] == cc)
			return ((char *)&ss[i]);
		i++;
	}
	if (ss[i] == cc)
		return ((char *)&ss[i]);
	return (NULL);
}
