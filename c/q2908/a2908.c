/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a2908.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaek <cbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 19:45:50 by cbaek             #+#    #+#             */
/*   Updated: 2020/02/28 20:03:15 by cbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* https://www.acmicpc.net/problem/2908 */

#include <stdio.h>

void swap(char *c1, char *c2)
{
    char    temp;
    temp = *c1;
    *c1 = *c2;
    *c2 = temp;
}

int atoi(char *str)
{
    int     i;
    int     nbr;

    i =0;
    nbr = 0;
    while(str[i] != 0)
        nbr = (nbr * 10) + (str[i++] - '0');
    return nbr;
}

int main(void)
{
    int     i;
    char    str[8];

    for (i = 0; i < 8; i++)
        str[i] = 0;
    scanf("%[^\n]", str);
    swap(&str[0], &str[2]);
    swap(&str[4], &str[6]);
    str[3] = 0;
    if (atoi(&str[0]) > atoi(&str[4]))
        i = atoi(&str[0]);
    else
        i = atoi(&str[4]);
    printf("%d\n", i);    
    return (0);
}