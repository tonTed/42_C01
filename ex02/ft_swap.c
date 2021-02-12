/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 08:36:27 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/12 08:41:17 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

int main()
{
	int a;
	int b;
	
	a = 42;
	b = -42;

	printf("a = %d & b = %d\n", a, b);
	ft_swap(&a, &b);
	printf("a = %d & b = %d\n", a, b);

	return 0;
}
