/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobesnar <tobesnar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:23:48 by tobesnar          #+#    #+#             */
/*   Updated: 2024/10/16 11:55:12 by tobesnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(char c)
{
	if (!(c >= 0 && c <= 9))
		return (0);
	return (1);
}

/* int	main()
{
	printf("%i\n", ft_isdigit(1));
	printf("%i\n", ft_isdigit('e'));
	return 0;
}*/
