/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apogorze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 16:39:20 by apogorze          #+#    #+#             */
/*   Updated: 2018/07/18 18:07:16 by apogorze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		countwords(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' &&  str[i] != '\t' && str[i] != '\n')
			j++;
		
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
			i++;
		while ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i] != '\0')
		{
			i++;
		}
	}
	return(j);
}

int 	countletters(char *str)
{
	int i;

	i = 0;
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		i++;

int		main(void)
{
	char str[] = " jabc jde je ud fgh";
	int i;

	i = 0;
	i = countwords(str);
	printf("%d", i);
	return (0);
}
