/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:32:20 by asanni            #+#    #+#             */
/*   Updated: 2024/03/18 15:32:20 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/*
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
 		ft_printf("%d ", node->value);
 		ft_printf("%d\n", node->index);
 	}
 }
*/

void set_index(t_stack **stack) 
{
    t_stack *node;
    t_stack *current;
    int count;

    node = *stack;
    while (node != NULL) 
	{
        count = 0;
        current = *stack;
        while (current != NULL) 
		{
            if (current->value > node->value) 
                count++;
            current = current->next;
        }
        node->index = count;
        node = node->next;
    }
    node = *stack;
    while (node != NULL) 
	{
       ft_printf("%d ", node->value);
       ft_printf("%d\n", node->index);
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

void	radix_sort(t_stack **stack_a, t_stack **stack_b, int stack_len)
{
	int	bit_shift;
	int	index_count;
	int	i;

	index_count = index_binary(stack_len - 1);
	bit_shift = 0;
	while (bit_shift < index_count)
	{
		i = stack_len;
		while (i > 0)
		{
			if (!(((*stack_a)->index >> bit_shift) & 1 ))
				push_b(stack_a, stack_b);
			else
				rotate_a(stack_a);
			i--;
		}
		while (*stack_b)
			push_a(stack_a, stack_b);
		bit_shift++;
	}
}
