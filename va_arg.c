/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   va_arg.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atedesch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 18:37:58 by atedesch          #+#    #+#             */
/*   Updated: 2024/02/26 19:09:36 by atedesch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>

int	ft_max(int num_args, ...)
{
	va_list	args;
	int		x;
	int		i;

	i = 0;
	va_start(args, num_args);
	while (i < num_args)
	{
		x = va_arg(args, int);
		printf("x: %i\n", x);
		i++;
	}
	va_end(args);
	return (0);
}

int	main(void)
{
	ft_max(1, 10, 12, 14, 16);
	return (0);
}
