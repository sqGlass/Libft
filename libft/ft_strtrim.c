/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 12:16:48 by sglass            #+#    #+#             */
/*   Updated: 2020/11/05 10:40:31 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		counterp(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		count;

	i = 0;
	j = 0;
	count = 0;
	while (s1[i] != '\0')
	{
		while (set[j] != '\0')
		{
			if (s1[i] != set[j])
				count++;
			j++;
		}
		if (count == j)
			return (i);
		j = 0;
		count = 0;
		i++;
	}
	return (i);
}

static int		counterz(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		count;

	i = ft_strlen(s1) - 1;
	j = 0;
	count = 0;
	while (i >= 0)
	{
		while (set[j] != '\0')
		{
			if (s1[i] != set[j])
				count++;
			j++;
		}
		if (count == j)
			return (i);
		j = 0;
		count = 0;
		i--;
	}
	return (i);
}

static char		*trim(char *a, char const *s1, int b, int c)
{
	int		i;

	i = 0;
	while (b <= c)
	{
		a[i] = s1[b];
		i++;
		b++;
	}
	a[i] = '\0';
	return (a);
}

static char		*ret(void)
{
	char	*a;

	a = malloc(1);
	a[0] = '\0';
	return (a);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		f;
	char	*a;

	i = 0;
	j = 0;
	f = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	if ((size_t)counterp(s1, set) == ft_strlen(s1))
		return (ret());
	if (s1[0] == '\0')
		return (ret());
	if (counterz(s1, set) == -1 && counterp(s1, set) == (int)ft_strlen(s1))
		return (a = malloc(sizeof(char)));
	f = counterz(s1, set) - counterp(s1, set) + 2;
	a = malloc(f);
	if (a == NULL)
		return (NULL);
	a = trim(a, s1, counterp(s1, set), counterz(s1, set));
	return (a);
}
