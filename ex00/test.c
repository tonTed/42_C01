/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonted <tonted@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 17:48:31 by tblanco           #+#    #+#             */
/*   Updated: 2021/02/11 18:05:54 by tonted           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_ft(int *nbr)
{
    printf("%d\n", *nbr);
    *nbr = 42;
    printf("%d\n", *nbr);

}

int main()
{
    int numb;
    int *ptr;

    ptr = &numb;
    numb = 12;
    ft_ft(ptr);
    printf("%d\n", numb);
}
