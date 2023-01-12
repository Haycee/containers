/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_integral.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirardi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 01:03:10 by agirardi          #+#    #+#             */
/*   Updated: 2023/01/08 06:20:06 by agirardi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

namespace ft {
	template <typename T>
	struct is_integral {
			static const bool value = false;
	};

	template <>
	struct is_integral<char> {
			static const bool value = true;
	};

	template <>
	struct is_integral<signed char> {
			static const bool value = true;
	};

	template <>
	struct is_integral<unsigned char> {
			static const bool value = true;
	};

	template <>
	struct is_integral<bool> {
			static const bool value = true;
	};

	template <>
	struct is_integral<short> {
			static const bool value = true;
	};

	template <>
	struct is_integral<unsigned short> {
			static const bool value = true;
	};

	template <>
	struct is_integral<long> {
			static const bool value = true;
	};

	template <>
	struct is_integral<unsigned long> {
			static const bool value = true;
	};

	template <>
	struct is_integral<long long> {
			static const bool value = true;
	};

	template <>
	struct is_integral<unsigned long long> {
			static const bool value = true;
	};

	template <>
	struct is_integral<int> {
			static const bool value = true;
	};

	template <>
	struct is_integral<unsigned int> {
			static const bool value = true;
	};
}