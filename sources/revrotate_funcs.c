/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revrotate_funcs.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:32:03 by asanni            #+#    #+#             */
/*   Updated: 2024/03/18 15:32:03 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rev_a(t_stack **stack_a)
{
	t_stack	*last_node;

	if (*stack_a == NULL)
		error_out();
	//pegando ultimo no da lista 
	last_node = find_base(stack_a);
	//atribuindo como next o primeiro no da stack_a
	last_node->next = *stack_a;
	//o previous do ultimo no ainda aponta para o last node, entao temos que fazer ele apontar para nulo
	last_node->prev->next = NULL;
	// remove o previous do last node fazendo ele ficar null
	last_node->prev = NULL;
	//o antigo primeiro noh da stack ainda apontar para nulo, aqui estamos fazendo ele apontar para o novo topo (last node)
	(*stack_a)->prev = last_node;
	//tornando o last node o primeiro da lista
	*stack_a = last_node;
	ft_printf("rra\n");
}

void	rev_b(t_stack **stack_b)
{
	t_stack	*last_node;

	if (*stack_b == NULL)
		error_out();
	last_node = find_base(stack_b);
	last_node->prev->next = NULL;
	last_node->next = *stack_b;
	last_node->prev = NULL;
	*stack_b = last_node;
	last_node->next->prev = last_node;
	ft_printf("rra\n");
}

void	rev_rr(t_stack **stack_a, t_stack **stack_b)
{
	rev_a(stack_a);
	rev_b(stack_b);
	ft_printf("rrr\n");
}
