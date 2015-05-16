/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenault <crenault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/12 12:29:58 by crenault          #+#    #+#             */
/*   Updated: 2015/05/16 18:40:25 by crenault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "../../include/vec3.h"

t_vec3				vec3(float x, float y, float z)
{
	t_vec3			ret;

	ret.x = x;
	ret.y = y;
	ret.z = z;
	return (ret);
}

t_vec3				vec3_normal(t_vec3 vec)
{
	unsigned int	len;

	len = vec3_len(vec);
	return (vec3(vec.x / len, vec.y / len, vec.z / len));
}

unsigned int		vec3_len(t_vec3 vec)
{
	return (sqrt((vec.x * vec.x) + (vec.y * vec.y) + (vec.z * vec.z)));
}
