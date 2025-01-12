/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hverdugo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 17:59:46 by hverdugo          #+#    #+#             */
/*   Updated: 2024/08/02 13:36:34 by hverdugo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_free(char **str, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		free(str[j]);
		j++;
	}
	free(str);
	return (NULL);
}

static int	ft_words(char *s, char c)
{
	int	posicion;
	int	palabras;

	posicion = 0;
	palabras = 0;
	while (s[posicion] != 0)
	{
		while (s[posicion] == c && s[posicion] != '\0')
			posicion++;
		if (s[posicion] != '\0')
			palabras++;
		while (s[posicion] != c && s[posicion] != '\0')
			posicion++;
	}
	return (palabras);
}

static void	ft_separador(char **str, char *s, char c, int words)
{
	int	i;
	int	j;
	int	wc;

	wc = 0;
	i = 0;
	j = 0;
	while (wc < words)
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			j++;
		}
		str[wc] = ft_substr(s, i - j, j);
		if (str[wc] == NULL)
			ft_free(str, words);
		wc++;
		j = 0;
	}
}

char	**ft_split(const char *s, char c)
{
	char	**str;
	int		words;

	words = ft_words((char *)s, c);
	str = ft_calloc((words + 1), sizeof(char *));
	if (str == NULL)
		return (NULL);
	ft_separador(str, (char *)s, c, words);
	return (str);
}
