/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sglass <sglass@studen.21-school.r>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 11:54:53 by sglass            #+#    #+#             */
/*   Updated: 2020/11/03 17:34:03 by sglass           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *f;

	f = malloc(sizeof(t_list));
	if (f == NULL)
		return (NULL);
	f->content = content;
	f->next = NULL;
	return (f);
}
