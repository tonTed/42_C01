/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tblanco <tblanco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 10:55:46 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/12 11:01:57 by tblanco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int mod;

	mod = *a % *b;
	*a = *a / *b;
	*b = mod;
}

int main()
{
	int a;
	int b;

	a = 42;
	b = 10;
	printf("a = %d && b = %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("a = %d && b = %d\n", a, b);
}
