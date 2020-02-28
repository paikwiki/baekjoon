/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a5622.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaek <cbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 22:51:25 by cbaek             #+#    #+#             */
/*   Updated: 2020/02/28 23:14:22 by cbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* https://www.acmicpc.net/problem/5622 */

#include <stdio.h>

int main(void)
{
    int     i;
    int     nb;
    int     result;
    char    str[16];

    for (i = 0; i < 16; i++)
        str[i] = 0;
    scanf("%s", str);
    i = 0;
    result = 0;
    while (str[i])
    {
        nb = str[i] - 'A';
        if (nb >= 0 && nb < 15)
            nb = (nb / 3) + 3;
        else if (nb < 19)
            nb = 8;
        else if (nb < 22)
            nb = 9;
        else if (nb < 26)
            nb = 10;
        result += nb;
        i++;
    }
    printf("%d\n", result);
    return (0);
}