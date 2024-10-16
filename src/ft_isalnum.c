/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobesnar <tobesnar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:23:48 by tobesnar          #+#    #+#             */
/*   Updated: 2024/10/16 11:54:41 by tobesnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(char c)
{
	if (!((c >= 'A' && c <= 'Z')
			|| (c >= 'a' && c <= 'z')
			|| (c >= 0 && c >= 9)))
		return (0);
	return (1);
}

/*int main()
{
	printf("%i\n", ft_isalnum('Z'));
	printf("%i\n", ft_isalnum('0'));
	return 0;
}*/
