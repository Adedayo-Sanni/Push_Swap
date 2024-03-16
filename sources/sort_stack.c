/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 23:47:06 by marvin            #+#    #+#             */
/*   Updated: 2024/03/11 23:47:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

//função sorting mãe
//vai chamar todas as outras de sorting

// void	start_sorting(t_stack **a, t_stack **b)
// {
// 	//chamar funcoes de sort
// }

void	set_index(t_stack **stack)
{
	t_stack	*node;
	t_stack	*next_node;

	node = *stack;
	while (node != NULL)
	{
		next_node = *stack;
		while (next_node != NULL)
		{
			if ((node->value) < (next_node->value))
			{
				node->index ++;
			}
			next_node = next_node->next;
		}
		node = node->next;
	}
}

int	index_binary(int index)
{
	int	binary_rep;

	binary_rep = 1;
	while (index > 1)
	{
		index = index / 2;
		binary_rep++;
	}
	return (binary_rep);
}

void	radix_sort(t_stack stack_a, t_stack stack_b, int stack_len)
{
	int	bit_shift;
	int	index_count;
	int	i;

	index_count = index_binary(stack_len - 1);
	bit_shift = 0;
	i = stack_len;
}
