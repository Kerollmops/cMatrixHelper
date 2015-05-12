/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat4.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenault <crenault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/12 22:26:16 by crenault          #+#    #+#             */
/*   Updated: 2015/05/12 22:43:40 by crenault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAT4_H
# define MAT4_H

# include "../libft/includes/libft.h"
# include "../include/vec3.h"

/*
** mat4/simple.c
*/


/*
** mat4/models.c
*/
void				mat4_ident(float *out);
void				mat4_trans(float *out, float x, float y, float z);
void				mat4_scale(float *out, float x, float y, float z);
void				mat4_rotate(float *out, float ang, t_vec3 vec);

/*
** mat4/operators.c
*/
void				mat4_mult(float *out, float *m, float *n);

#endif
