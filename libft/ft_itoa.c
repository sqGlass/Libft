/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 11:44:24 by sglass            #+#    #+#             */
/*   Updated: 2020/11/04 15:19:54 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		coun(int n)
{
	int i;

	i = 1;
	while (n / 10 != 0)
	{
		n = n / 10;
		i++;
	}
	if (n < 0)
		i++;
	return (i);
}

static int		jj(int n)
{
	int j;

	j = 1;
	while (n / 10 != 0)
	{
		n = n / 10;
		j = j * 10;
	}
	return (j);
}

static char		*res(char *a, int n, int j)
{
	int		i;
	char	mod;

	i = 0;
	if (n < 0)
	{
		a[i] = '-';
		n = n * (-1);
		i++;
	}
	while (j != 0)
	{
		mod = n / j + '0';
		a[i] = mod;
		n = n % j;
		j = j / 10;
		i++;
	}
	a[i] = '\0';
	return (a);
}

static char		*kost(void)
{
	char *a;

	a = malloc(sizeof(char) * 12);
	a[0] = '-';
	a[1] = '2';
	a[2] = '1';
	a[3] = '4';
	a[4] = '7';
	a[5] = '4';
	a[6] = '8';
	a[7] = '3';
	a[8] = '6';
	a[9] = '4';
	a[10] = '8';
	a[11] = '\0';
	return (a);
}

char			*ft_itoa(int n)
{
	int		j;
	char	*a;

	j = 1;
	if (n == -2147483648)
	{
		return (kost());
	}
	a = malloc(sizeof(char) * coun(n) + 1);
	if (a == NULL)
		return (NULL);
	a = res(a, n, jj(n));
	return (a);
}
