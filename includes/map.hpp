/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirardi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 06:15:44 by agirardi          #+#    #+#             */
/*   Updated: 2023/01/07 22:34:25 by agirardi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "node.hpp"
#include "pair.hpp"
#include "reverse_iterator.hpp"

template <class Key, class T, class Compare = std::less<Key>, class Allocator = std::allocator<std::pair<const Key, T>>>
class map {
	public:
		typedef Key                                   key_type;
		typedef T                                     mapped_type;
		typedef ft::pair<const Key, T>                value_type;
		typedef Compare                               key_compare;
		typedef Allocator                             allocator_type;
		typedef value_type&                           reference;
		typedef const value_type&                     const_reference;
		typedef value_type*                           pointer;
		typedef const value_type*                     const_pointer;
		typedef typename // iterators                 iterator;
		typedef typename // const iterators           const_iterator;
		typedef ft::reverse_iterator<iterator>        reverse_iterator;
		typedef ft::reverse_iterator<const_iterator>  const_reverse_iterator;
		typedef ptrdiff_t                             difference_type;
		typedef std::size_t                           size_type;

    class value_compare {
    public:
        value_compare(Compare comp) : comp_(comp) {}

        bool operator()(const value_type& x, const value_type& y) const {
            return comp_(x.first, y.first);
        }

    private:
        Compare comp_;
    };

    // Implementer les iterators
    // Creer class Tree
      // Creer class Node
};







