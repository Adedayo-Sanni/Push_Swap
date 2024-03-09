/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asanni <asanni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 15:52:26 by asanni            #+#    #+#             */
/*   Updated: 2024/03/09 14:25:24 by asanni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack		*a;
	t_stack		*b;
	static int	i = 0;

	if (argc == 1 || (argc == 2 && argv[1][0] == '\0'))
		error_out();
	else if (argc > 1)
		digit_check(argv);
	make_stack(&a, argv);
	// if (!stack_sorted (a))
	// {	
	// }
	// free_stack(&a);
}
