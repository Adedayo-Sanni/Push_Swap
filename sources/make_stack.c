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
// Function that takes as an argument the stack A formatted as a list
// of integers. The first argument should be at the top of the stack
// verif: aqui vai check double e check bool

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
	new_node->next = NULL;
	if (*stack == NULL)
	{
		*stack = new_node;
		new_node->prev = NULL;
		return ;
	}
	last_node = find_last(stack);
	last_node->next = new_node;
	new_node->prev = last_node;
}

void	make_stack(t_stack **a, char **argv)
{
	int	i;
	int	value;

	i = 1;
	while (argv[i])
	{
		value = ft_atoi(argv[i]);
		if (value < INT_MIN || value > INT_MAX
			|| duplicate_check(a, value) == 1)
			error_out();
		make_node (a, value);
		i++;
	}
}

t_stack	*find_last(t_stack **stack)
{
	t_stack	*temp;

	temp = (*stack);
	if (temp == NULL)
		return (NULL);
	while (temp->next != NULL)
		temp = temp->next;
	return (temp);
}

t_stack	*find_top(t_stack **stack)
{
	if(*stack == NULL)
	{
		return (NULL);
	}
	return (*stack);
}

int	arg_to_int(char **argv)
{
	int	value;
	int	i;

	i = 0;
	while (argv[i])
	{
		value = ft_atoi(argv[i]);
		i++;
	}
	return (value);
}
