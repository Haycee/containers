/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirardi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 02:24:50 by agirardi          #+#    #+#             */
/*   Updated: 2023/01/07 22:34:12 by agirardi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "pair.hpp"

namespace ft {
  template <class Key, class T>
  struct node {
      node(std::pair<Key, T>& data);

      std::pair<Key, T> data;
      node* left;
      node* right;
      // int height 
  };

  template <class Key, class T>
  node<Key, T>::node(std::pair<Key, T>& data)
  : data(data), left(nullptr), right(nullptr){
    return;
  }
}