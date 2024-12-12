/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlemerci <mlemerci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 04:48:06 by mlemerci          #+#    #+#             */
/*   Updated: 2024/12/12 09:39:51 by mlemerci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_putadress(void *ptr);
int	ft_putchar(int c);
int	ft_puthexalow(unsigned int n);
int	ft_puthexaup(unsigned int n);
int	ft_putnbr(int n);
int	ft_putstr(const char *s);
int	ft_putunsignnbr(unsigned int n);

#endif
