/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_funcs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:24:23 by marvin            #+#    #+#             */
/*   Updated: 2024/03/12 17:24:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

// void	lsadd_back(t_stack **lst, t_stack *new)
// {
// 	if (lst && new)
// 	{
// 		if (!*lst)
// 			*lst = new;
// 		else
// 		{
// 			find_top(lst);
// 		}	
// 	}
// }

void	lstadd_front(t_stack **lst, t_stack *new)
{
	new->next = *lst;
	*lst = new;
}

void	push_a(t_stack **source, t_stack **recieve)
{
	t_stack	*poped_node;

	poped_node = pop_node(source);
	*recieve = create_node(poped_node->value);
	ft_printf("pa\n");
}

void	push_b(t_stack **source, t_stack **recieve)
{
	t_stack	*poped_node;

	poped_node = pop_node(source);
	*recieve = create_node(poped_node->value);
	ft_printf("pb\n");
}

t_stack	*create_node(int nbr)
{
	t_stack	*node;

	node = (t_stack *)malloc(sizeof(t_stack *));
	node->value = nbr;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}
