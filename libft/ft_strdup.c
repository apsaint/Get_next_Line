/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apsaint- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 12:15:19 by apsaint-          #+#    #+#             */
/*   Updated: 2018/11/13 17:20:05 by apsaint-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *cpy;

	if ((cpy = malloc(ft_strlen(s1) + 1)) == 0)
		return (NULL);
	return (ft_strcpy(cpy, s1));
}
