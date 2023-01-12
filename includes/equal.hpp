/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   equal.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirardi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 01:32:16 by agirardi          #+#    #+#             */
/*   Updated: 2023/01/08 06:19:44 by agirardi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

namespace ft {
	template <class Input_It1, class Input_It2>
	bool equal(Input_It1 first1, Input_It1 last1, Input_It2 first2) {
		for (; first1 != last1; ++first1, ++first2) {
			if (!(*first1 == *first2))
				return false;
		}
		return true;
	}

	template <class Input_It1, class Input_It2, class Binary_Predicate>
	bool equal(Input_It1 first1, Input_It1 last1, Input_It2 first2, Binary_Predicate pred) {
		for (; first1 != last1; ++first1, ++first2) {
			if (!pred(*first1, *first2))
				return false;
		}
		return true;
	}
}