/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 16:41:48 by sglass            #+#    #+#             */
/*   Updated: 2020/11/03 09:58:44 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int j;
	int mod;
	int nu;

	j = 1;
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	nu = n;
	if (n < 0 && n != -2147483648)
	{
		write(fd, "-", 1);
		n = n * (-1);
	}
	while (nu / 10 != 0 && n != -2147483648)
	{
		nu = nu / 10;
		j = j * 10;
	}
	while (j != 0 && n != -2147483648)
	{
		mod = n / j + 48;
		write(fd, &mod, 1);
		n = n % j;
		j = j / 10;
	}
}