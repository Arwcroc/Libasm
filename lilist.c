/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lilist.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tefroiss <tefroiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 18:28:19 by tefroiss          #+#    #+#             */
/*   Updated: 2020/10/07 18:28:40 by tefroiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm_bonus.h"

t_list		*ft_create_elem(void *data)
{
	t_list	*elemt;

	elemt = malloc(sizeof(t_list));
	elemt->next = NULL;
	elemt->data = data;
	return (elemt);
}

void	list_push_front(t_list **begin_list, void *data)
{
	t_list *elemt;
	elemt = ft_create_elem(data);
	if (*begin_list == NULL)
		*begin_list = elemt;
	else
	{
		elemt->next = *begin_list;
		*begin_list = elemt;
	}
}

int		list_size(t_list *begin_list)
{
	int size;

	size = 0;
	while (begin_list != NULL)
	{
		size++;
		begin_list = begin_list->next;
	}
	return (size);
}

void	print_list(t_list *list)
{
	while (list != NULL)
	{
		printf("%s => ", (char*)list->data);
		list = list->next;
	}
	printf("NULL\n");
}
