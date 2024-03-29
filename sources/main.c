/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 15:52:26 by asanni            #+#    #+#             */
/*   Updated: 2024/03/09 16:11:34 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	print(t_stack **topo)
{
	t_stack	*atual;

	if (*topo == NULL)
	{
		ft_printf("NON Ecxiste!!!\n");
		error_out();
	}
	atual = (*topo);
	while (atual != NULL)
	{
		ft_printf("node: %d ", atual->value);
		ft_printf("index: %d\n", atual->index);
		atual = atual->next;
	}
}

int	main(int argc, char **argv)
{
	t_stack		*a;
	t_stack		*b;

	a = NULL;
	b = NULL;
	if (argc == 1)
		return (1);
	else
	{
		make_stack(&a, argv, argc);
		if (is_sorted (a) == 0)
		{	
			if (argc <= 4)
				sort_3(&a);
			else if (argc <= 6)
				sort_5(&a, &b);
			else
			{
				set_index(&a);
				radix_sort(&a, &b, (argc - 1));
			}
		}
	}
	free_all(&a);
	return (0);
}
