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

void	lsadd_back(t_stack **lst, t_stack *new)
{
	if (lst && new)
	{
		if (!*lst)
			*lst = new;
		else
		{
			find_last(lst)->next = new;
		}	
	}
}

//push b: Take the first node at the top of a and put it at the top of b.
void	push_a(t_stack **stack_b, t_stack **stack_a)
{
	t_stack	*node_pop;

	node_pop = pop_node(stack_b);
	lsadd_back(stack_b, (*stack_a));
	ft_printf("pa\n");
}

void	push_b(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*node_pop;

	node_pop = pop_node(stack_a);
	lsadd_back(stack_a, (*stack_b));
	ft_printf("pb\n");
}
