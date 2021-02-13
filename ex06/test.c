/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonted <tonted@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 19:52:52 by tonted            #+#    #+#             */
/*   Updated: 2021/02/12 19:56:15 by tonted           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    
    while(str[i] != '\0')
        i++;
    return i;
}

int main(int argc, char const *argv[])
{
    printf("%d\n", ft_strlen(""));
    return 0;
}
