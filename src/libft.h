/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobesnar <tobesnar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:52:24 by tobesnar          #+#    #+#             */
/*   Updated: 2024/10/16 12:09:24 by tobesnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>

//LIBRAIRIE

int				ft_isprint(char c);
int				ft_isalpha(char c);
int				ft_isalnum(char c);
int				ft_isascii(char c);
int				ft_isdigit(char c);
int				ft_atoi(char *str);
void			bzero(void *s, size_t n);
void			*memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t len);
void			*ft_memset(void *s, int c, size_t len);
char			*ft_strchr(const char *s, int c);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
size_t			ft_strlcpy(char *dst, const char *src, size_t size);
int				ft_strlen(char *str);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strrchr(const char *s, int c);

//COMPLEMENT

#endif