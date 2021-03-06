/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfauvell <cfauvell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 18:55:58 by cfauvell          #+#    #+#             */
/*   Updated: 2018/11/15 13:28:50 by cfauvell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Checks for any printable character including space. */
int		ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
