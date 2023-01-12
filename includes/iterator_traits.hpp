/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator_traits.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirardi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 00:13:05 by agirardi          #+#    #+#             */
/*   Updated: 2023/01/08 22:45:09 by agirardi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <iterator>

namespace ft {
	template <class Iterator>
	struct iterator_traits {
			typedef typename Iterator::value_type value_type;
			typedef typename Iterator::difference_type difference_type;
			typedef typename Iterator::iterator_category iterator_category;
			typedef typename Iterator::pointer pointer;
			typedef typename Iterator::reference reference;
	};

	template <class T>
	struct iterator_traits<T*> {
			typedef T value_type;
			typedef std::ptrdiff_t difference_type;
			typedef std::random_access_iterator_tag iterator_category;
			typedef T* pointer;
			typedef T& reference;
	};

	template <class T>
	struct iterator_traits<const T*> {
			typedef const T value_type;
			typedef std::ptrdiff_t difference_type;
			typedef std::random_access_iterator_tag iterator_category;
			typedef const T* pointer;
			typedef const T& reference;
	};
}