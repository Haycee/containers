/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pair.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirardi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 05:08:48 by agirardi          #+#    #+#             */
/*   Updated: 2023/01/07 04:24:24 by agirardi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

namespace ft {
	template <typename T, typename U>
	class pair {
		public:
			T first;
			U second;

			pair();
			pair(const T& first, const U& second);
			pair(const pair& src);
			~pair();

			void swap(pair& src);

			pair& operator=(const pair& rhs);
	};

	template <typename T, typename U>
	pair<T, U>::pair() : first(), second() {
		return;
	}

	template <typename T, typename U>
	pair<T, U>::pair(const T& first, const U& second) : first(first), second(second) {
		return;
	}

	template <typename T, typename U>
	pair<T, U>::pair(const pair& src) {
		*this = src;
		return;
	}

	template <typename T, typename U>
	pair<T, U>::~pair() {
		return;
	}

	template <typename T, typename U>
	void pair<T, U>::swap(pair<T, U>& src) {
		std::swap(first, src.first);
		std::swap(second, src.second);
	}

	template <typename T, typename U>
	pair<T, U>& pair<T, U>::operator=(const pair<T, U>& rhs) {
		first = rhs.first;
		second = rhs.second;
		return *this;
	}
}