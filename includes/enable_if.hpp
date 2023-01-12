/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enable_if.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirardi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 00:55:47 by agirardi          #+#    #+#             */
/*   Updated: 2023/01/08 06:19:32 by agirardi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

namespace ft {
	template <bool B, class T = void>
	struct enable_if {};

	template <class T>
	struct enable_if<true, T> {
			typedef T type;
	};
}