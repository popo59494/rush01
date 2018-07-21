/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apogorze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 12:53:23 by apogorze          #+#    #+#             */
/*   Updated: 2018/07/18 18:13:08 by apogorze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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

char	**ft_split_whitespaces(char *str)
{
	int i;
	int j;
	int k;
	char **argv;

	i = 0;
	j = 0;
	k = 0;
	argv = (char**)malloc(sizeof(char*) * (countwords(str)));
	while (str[i] != 0)
	{
		if (str[i] == ' ' || str[i] == '\t' || str [i] == '\n')
			i++;
		while (str[i] > 32)
		{
			j++;
			i++;
		}
		(*argv)[k] = (char)malloc(sizeof(char) * (j + 1));
		while (i-j <= i)
		{
			*argv[k] = str[i-j];
			j--;
		}
		k++;
	}
	if (str[i] == 0)
		argv[k+1] = 0;
	return (argv);
}

int		main(void)
{
	char *str;
	char **argv;
	int i;

	i = 1;
	str = (char*)malloc(sizeof(char) * 60);
	str = "nciefh cijebfhi efwij bhew ewiufh  ewf h";
	argv = ft_split_whitespaces(str);
	while (i < 8)
	{
		printf("%s", argv[i]);
		i++;
	}
	return(0);
}
