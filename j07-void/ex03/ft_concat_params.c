/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apogorze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 19:10:05 by apogorze          #+#    #+#             */
/*   Updated: 2018/07/18 13:16:13 by apogorze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

char	*ft_concat_params(int argc, char **argv)
{
	int i;
	char *str;

	i = 1;
	while (i <= argc)
	{
		str = (char)malloc(sizeof(char) * (ft_strlen(argv[i])) + *str);
		str = argv[i]; 
	}
	return (str);
}
