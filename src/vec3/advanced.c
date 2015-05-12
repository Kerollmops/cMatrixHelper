/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   advanced.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenault <crenault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/12 14:31:20 by crenault          #+#    #+#             */
/*   Updated: 2015/05/12 23:19:35 by crenault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/vec3.h"

t_vec3				vec3_cross(t_vec3 vec_a, t_vec3 vec_b)
{
	return (vec3(vec_a.y * vec_b.z - vec_a.z * vec_b.y,
					vec_a.z * vec_b.x - vec_a.x * vec_b.z,
					vec_a.x * vec_b.y - vec_a.y * vec_b.x));
}

float				vec3_dot(t_vec3 vec_a, t_vec3 vec_b)
{
	return (vec_a.x * vec_b.x + vec_a.y * vec_b.y + vec_a.z * vec_b.z);
}
