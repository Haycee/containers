/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_pair.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirardi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 06:11:58 by agirardi          #+#    #+#             */
/*   Updated: 2023/01/06 06:12:31 by agirardi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "pair.hpp"

namespace ft {
	template <typename T, typename U>
	pair<T, U> make_pair(const T& t, const U& u) {
		return pair<T, U>(t, u);
	}
}