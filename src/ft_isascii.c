/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobesnar <tobesnar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:23:48 by tobesnar          #+#    #+#             */
/*   Updated: 2024/10/17 11:46:32 by tobesnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(char c)
{
	return (c >= 0 && c < 127);
}

/*int main()
{
	printf("%i\n", ft_isascii('Z'));
	printf("%i\n", ft_isascii('0'));
	return 0;
}*/
