/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonted <tonted@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 19:58:52 by tonted            #+#    #+#             */
/*   Updated: 2021/02/12 20:15:58 by tonted           ###   ########.fr       */
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

void    ft_rev_int_tab(int *tab, int size)
{
    int i;

    i = 0;
    while (i < size)
    {
        ft_swap(&tab[i], &tab[size - 1]);
        i++;
        size--;
    }

}

int main()
{
    int tab[9];
    int i;

    i = 0;
    while(i < sizeof(tab)/4)
    {
        tab[i] = i * 5;
        printf("%d\n", tab[i]);
        i++;
    }
    printf("++++++++++++++++++\n");
    ft_rev_int_tab(tab, sizeof(tab)/4);
    
    i = 0;
    while(i < sizeof(tab)/4)
    {
        printf("%d\n", tab[i]);
        i++;
    }
    return 0;
}
