/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobesnar <tobesnar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 13:24:10 by tobesnar          #+#    #+#             */
/*   Updated: 2024/10/19 15:29:44 by tobesnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char sep)
{
	size_t	count;
	int		i;

	while (s[i])
	{
		if (s[i] != sep && (i == 0 || s[i - 1] == sep))
			count++;
		i++;
	}
	return (count);
}

static char	*malloc_word(char const *s, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc(end - start + 1);
	if (!word)
		return (NULL);
	while (start < end)
		word[i++] = s[start++];
	word[i] = 0;
	return (word);
}

char	**ft_split(char const *s, char sep)
{
	char	**split;
	int		i;
	int		start;
	int		word_index;

	i = 0;
	start = 0;
	word_index = 0;
	if (!s)
		return (NULL);
	split = malloc(count_words(s, sep) + 1);
	if (!split)
		return (NULL);
	while (s[i])
	{
		if (s[i] != sep && (i == 0 || s[i - 1] == sep))
			start = i;
		if (s[i] != sep && (s[i + 1] == sep || s[1 + i] == 0))
			split[word_index++] == malloc_word(s, start, i + 1);
		i++;
	}
	split[word_index] = NULL;
	return (split);
}
