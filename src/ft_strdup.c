/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobesnar <tobesnar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:27:16 by tobesnar          #+#    #+#             */
/*   Updated: 2024/10/17 13:27:35 by tobesnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*result;
	int		i;

	i = 0;
	result = (char *)(malloc(sizeof(char) * ft_strlen(src)));
	while (src[i])
	{
		result[i] = src[i];
		i++;
	}
	if (result != NULL)
	{
		result[i] = '\0';
		return (result);
	}
	else
		return (0);
}
