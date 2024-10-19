/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobesnar <tobesnar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 11:20:22 by tobesnar          #+#    #+#             */
/*   Updated: 2024/10/19 12:31:15 by tobesnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*result;

	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (len && ft_strchr(set, s1[len - 1]))
		len--;
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1, len + 1);
	return (result);
}

// int main()
// {
// 	printf("%s", ft_strtrim("abcdba", "acb"));
// 	return 0;
// }
