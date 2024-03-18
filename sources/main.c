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
		ft_printf("node: %d\n", atual->value);
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
		ft_printf("./push_swap\n");
	if (argc == 2)
		error_out();
	else if (argc > 2)
	{
		make_stack(&a, argv, argc);
		set_index(&a);
		if (is_sorted (&a) == 0)
		{	
			if (argc == 3)
				swap_a(&a);
			radix_sort(&a, &b, (argc -1));
		}
	}
	free_all(&a);
}
