/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihajouji <ihajouji@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:02:56 by ihajouji          #+#    #+#             */
/*   Updated: 2023/09/03 19:26:51 by ihajouji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_ABS_H

# define FT_ABS_H

# define ABS(Value) \
	({\
	 	int abs_Value = (Value);\
	if (abs_Value < 0) {\
	   	abs_Value *= -1;}\
		abs_Value;})
#endif
