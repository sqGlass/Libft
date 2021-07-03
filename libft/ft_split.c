/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 19:57:09 by sglass            #+#    #+#             */
/*   Updated: 2020/11/05 09:57:32 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count(char const *s, char c)
{
	int	i;
	int counter;

	i = 0;
	counter = 1;
	while (s[i] != '\0')
	{
		if (s[i] == c && (s[i + 1] != '\0' && s[i + 1] != c))
			counter++;
		i++;
	}
	if (s[0] == c)
		counter--;
	return (counter);
}

static char		**fre(char **s, int j)
{
	while (j >= 0)
	{
		free(s[j]);
		j--;
	}
	free(s);
	return (NULL);
}

static char		**hellp(char const *s, char **ss, char c, int n)
{
	int i;
	int j;
	int counter;

	i = 0;
	j = 0;
	counter = 0;
	while (j < n)
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			i++;
			counter++;
		}
		ss[j] = (char *)malloc(counter * sizeof(char) + 1);
		if (ss[j] == NULL)
			return (fre(ss, j - 1));
		counter = 0;
		j++;
	}
	return (ss);
}

static char		**hellper(char const *s, char **ss, char c, int n)
{
	int i;
	int j;
	int counter;

	i = 0;
	j = 0;
	counter = 0;
	while (j < n)
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			ss[j][counter] = s[i];
			counter++;
			i++;
		}
		ss[j][counter] = '\0';
		counter = 0;
		j++;
	}
	ss[j] = NULL;
	return (ss);
}

char			**ft_split(char const *s, char c)
{
	char	**a;
	int		n;

	if (s == NULL)
		return (NULL);
	if (s[0] == '\0')
	{
		a = (char**)malloc(sizeof(char*));
		a[0] = NULL;
		return (a);
	}
	n = count(s, c);
	a = (char**)malloc((n + 1) * sizeof(char*));
	if (a == NULL)
		return (NULL);
	a = hellp(s, a, c, n);
	a = hellper(s, a, c, n);
	return (a);
}
