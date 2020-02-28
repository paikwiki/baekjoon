/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a2941.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbaek <cbaek@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 23:22:48 by cbaek             #+#    #+#             */
/*   Updated: 2020/02/29 00:01:59 by cbaek            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* https://www.acmicpc.net/problem/2941 */

#include <stdio.h>

int isconvatable(char c)
{
    if (c == '=' || c == '-' || c == 'j')
        return (1);
    return (0);
}

void getcount(char *str, int *cnt)
{
    int     i;

    i = 0;
    if ((str[i] == '-' && (str[i - 1] == 'c' || str[i - 1] == 'd')))
        *cnt -= 1;
    else if (str[i] == 'j' && (str[i - 1] == 'l' || str[i - 1] == 'n'))
        *cnt -= 1;
    else if (str[i] == '=' && (str[i - 1] == 'c' || str[i - 1] == 's'))
        *cnt -= 1;
    else if (str[i] == '=' && str[i - 1] == 'z')
    {
        if (*cnt > 1 && str[i - 2] == 'd')
            *cnt -= 2;
        else
            *cnt -= 1;
    }
}

int main(void)
{
    int     i;
    int     cnt;
    char    str[101];

    for (i = 0; i < 101; i++)
        str[i] = 0;
    scanf("%s", str);

    i = 0;
    cnt = 0;
    while (str[i] != 0)
    {
        if (isconvatable(str[i]) && i > 0)
        {
            getcount(&str[i], &cnt);
        }
        i++;
        cnt++;
    }
    printf("%d\n", cnt);
    return (0);
}