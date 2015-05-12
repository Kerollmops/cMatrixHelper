/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenault <crenault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/12 14:34:27 by crenault          #+#    #+#             */
/*   Updated: 2015/05/13 00:24:36 by crenault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/vec3.h"

t_vec3				vec3_add(t_vec3 vec_a, t_vec3 vec_b)
{
	return (vec3(vec_a.x + vec_b.x, vec_a.y + vec_b.y, vec_a.z + vec_b.z));
}

t_vec3				vec3_sub(t_vec3 vec_a, t_vec3 vec_b)
{
	return (vec3(vec_a.x - vec_b.x, vec_a.y - vec_b.y, vec_a.z - vec_b.z));
}
