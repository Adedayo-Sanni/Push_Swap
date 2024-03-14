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
		error_out();
	atual = (*topo);
	while (atual != NULL)
	{
		ft_printf("%d\n", atual->value);
		atual = atual->prev;
	}
}

int	main(int argc, char **argv)
{
	t_stack		*a;
	t_stack		*b;

	a = NULL;
	b = NULL;
	if (argc == 1 || (argc == 2 && argv[1][0] == '\0'))
		//error_out();
		ft_printf("./push_swap\n");
	else if (argc > 1)
		digit_check(argv);
	make_stack(&a, argv, argc);
	ft_printf("next: %d\n", a->next);
	ft_printf("value: %d\n", a->value);
	ft_printf("prev: %d\n", a->prev);
	print(&a);
	push_b(&a, &b);
	//print(&b);
	// print(&a);
	// print(&b);
	// if (is_sorted (&a) == 0)
	// {	
	// 	if (argc == 3)
	// 	swap_a(&a);
	// //	start_sorting(&a, &b);
	// }
	// //ft_printf("nova\n");
	free_all(&a);
}
