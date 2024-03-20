/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 20:45:08 by asanni            #+#    #+#             */
/*   Updated: 2024/03/09 16:14:14 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	make_node(t_stack **stack, int nbr)
{
	t_stack	*new_node;
	t_stack	*last_node;

	if (stack == NULL)
		error_out();
	new_node = (malloc(sizeof(t_stack)));
	if (new_node == NULL)
		error_out();
	new_node->value = nbr;
	new_node->index = -1;
	new_node->next = NULL;
	if (*stack == NULL)
	{
		*stack = new_node;
		new_node->next = NULL;
		new_node->prev = NULL;
		return ;
	}
	last_node = find_top(stack);
	last_node->next = new_node;
	new_node->prev = last_node;
}

void	make_stack(t_stack **a, char **argv, int argc)
{
	long	value;
	int		i;

	digit_check(argv);
	i = 1;
	while (i < argc)
	{
		value = ft_atol(argv[i]);
		if (value < INT_MIN || value > INT_MAX
			|| duplicate_check(a, value) == 1)
			error_out();
		make_node (a, value);
		i++;
	}
}
