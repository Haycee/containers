/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_iterator.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirardi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 03:44:58 by agirardi          #+#    #+#             */
/*   Updated: 2023/01/09 23:40:44 by agirardi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <iterator>

#include "iterator_traits.hpp"

namespace ft {
	template <class Iterator>
	class reverse_iterator {
		public:
			typedef Iterator iterator_type;
			typedef typename ft::iterator_traits<Iterator>::iterator_category iterator_category;
			typedef typename ft::iterator_traits<Iterator>::value_type value_type;
			typedef typename ft::iterator_traits<Iterator>::difference_type difference_type;
			typedef typename ft::iterator_traits<Iterator>::pointer pointer;
			typedef typename ft::iterator_traits<Iterator>::reference reference;

		public:
			reverse_iterator();
			explicit reverse_iterator(iterator_type it);
			explicit reverse_iterator(const reverse_iterator& src);
			~reverse_iterator();

			iterator_type base() const;

			reverse_iterator& operator=(const reverse_iterator& src);
			reference operator[](int index);
			reference operator*() const;
			pointer operator->() const;
			reverse_iterator& operator++();
			reverse_iterator& operator++(int);
			reverse_iterator& operator+=(difference_type n);
			reverse_iterator operator+(difference_type n) const;
			reverse_iterator& operator--();
			reverse_iterator& operator--(int);
			reverse_iterator& operator-=(difference_type n);
			reverse_iterator operator-(difference_type n) const;

      protected:
			  Iterator _base;
	};

	template <class Iterator>
	reverse_iterator<Iterator>::reverse_iterator() : _base() {
    return;
	}

	template <class Iterator>
	reverse_iterator<Iterator>::reverse_iterator(iterator_type it) : _base(it) {
    return;
	}

	template <class Iterator>
	reverse_iterator<Iterator>::reverse_iterator(const reverse_iterator& src) : _base(src.base()) {
    return;
	}

	template <class Iterator>
	reverse_iterator<Iterator>& reverse_iterator<Iterator>::operator=(const reverse_iterator& src) {
		_base = src.base();
		return (*this);
	}

	template <class Iterator>
	reverse_iterator<Iterator>::~reverse_iterator() {
	}

	template <class Iterator>
	typename reverse_iterator<Iterator>::iterator_type reverse_iterator<Iterator>::base() const {
		return _base;
	}

	template <class Iterator>
	typename reverse_iterator<Iterator>::reference reverse_iterator<Iterator>::operator[](
		int index) {
		return *(_base + index);
	}

	template <class Iterator>
	typename reverse_iterator<Iterator>::reference reverse_iterator<Iterator>::operator*() const {
		Iterator tmp = _base;
		return (*--tmp);
	}

	template <class Iterator>
	typename reverse_iterator<Iterator>::pointer reverse_iterator<Iterator>::operator->() const {
		return (--base().operator->());
	}

	template <class Iterator>
	reverse_iterator<Iterator>& reverse_iterator<Iterator>::operator++() {
		--_base;
		return (*this);
	}

	template <class Iterator>
	reverse_iterator<Iterator>& reverse_iterator<Iterator>::operator++(int) {
		reverse_iterator tmp = *this;
		--_base;
		return tmp;
	}

	template <class Iterator>
	reverse_iterator<Iterator>& reverse_iterator<Iterator>::operator+=(
		typename reverse_iterator<Iterator>::difference_type n) {
		return reverse_iterator(_base - n);
	}

	template <class Iterator>
	reverse_iterator<Iterator> reverse_iterator<Iterator>::operator+(
		typename reverse_iterator<Iterator>::difference_type n) const {
		return reverse_iterator(_base - n);
	}

	template <class Iterator>
	reverse_iterator<Iterator>& reverse_iterator<Iterator>::operator--() {
		_base++;
		return *this;
	}

	template <class Iterator>
	reverse_iterator<Iterator>& reverse_iterator<Iterator>::operator--(int) {
		reverse_iterator tmp = *this;
		++(*this);
		return tmp;
	}

	template <class Iterator>
	reverse_iterator<Iterator>& reverse_iterator<Iterator>::operator-=(
		typename reverse_iterator<Iterator>::difference_type n) {
		return reverse_iterator(_base + n);
	}

	template <class Iterator>
	reverse_iterator<Iterator> reverse_iterator<Iterator>::operator-(
		typename reverse_iterator<Iterator>::difference_type n) const {
		return reverse_iterator(_base + n);
	}

  // non-member overloads

  template <class Iterator1, class Iterator2>
	bool operator==(const reverse_iterator<Iterator1>& lhs, const reverse_iterator<Iterator2>& rhs) {
		return (lhs.base() == rhs.base());
	}
	template <class Iterator1, class Iterator2>
	bool operator!=(const reverse_iterator<Iterator1>& lhs, const reverse_iterator<Iterator2>& rhs) {
		return (lhs.base() != rhs.base());
	}
	template <class Iterator1, class Iterator2>
	bool operator< (const reverse_iterator<Iterator1>& lhs, const reverse_iterator<Iterator2>& rhs) {
		return (lhs.base() > rhs.base());
	}
	template <class Iterator1, class Iterator2>
	bool operator> (const reverse_iterator<Iterator1>& lhs, const reverse_iterator<Iterator2>& rhs) {
		return (lhs.base() < rhs.base());
	}
	template <class Iterator1, class Iterator2>
	bool operator<=(const reverse_iterator<Iterator1>& lhs, const reverse_iterator<Iterator2>& rhs) {
		return (lhs.base() >= rhs.base());
	}
	template <class Iterator1, class Iterator2>
	bool operator>=(const reverse_iterator<Iterator1>& lhs, const reverse_iterator<Iterator2>& rhs) {
		return (lhs.base() <= rhs.base());
	}

	template <class Iterator>
	reverse_iterator<Iterator> operator+(typename reverse_iterator<Iterator>::difference_type n, const reverse_iterator<Iterator>& rev_it) {
		return (rev_it + n);
	}

	template <class Iterator1, class Iterator2>
	typename reverse_iterator<Iterator1>::difference_type operator-(const reverse_iterator<Iterator1>& lhs, const reverse_iterator<Iterator2>& rhs) {
		return (rhs.base() - lhs.base());
	}
}