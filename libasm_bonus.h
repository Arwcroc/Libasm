/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm_bonus.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tefroiss <tefroiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 18:00:34 by tefroiss          #+#    #+#             */
/*   Updated: 2020/10/07 18:24:43 by tefroiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BONUS_H
# define BONUS_H

# include "libasm.h"

typedef struct		s_list
{
	void			*data;
	struct s_list	*next;
}					t_list;

int		atoi_base(char *str, char *base);
int		ft_atoi_base(char *str, char *base);
int		ft_list_size(t_list *begin_list);
int		ft_strstr(char	*str, char c);
int		list_size(t_list *begin_list);

void	print_list(t_list *list);
void	list_push_front(t_list **begin_list, void *data);
void	ft_list_sort(t_list **begin_list, int (*cmp)());
void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *));

t_list	*ft_list_push_front(t_list **begin_list, void *data);
t_list	*ft_create_elem(void *data);

#endif
