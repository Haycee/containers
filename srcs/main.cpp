/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agirardi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 05:08:35 by agirardi          #+#    #+#             */
/*   Updated: 2023/01/11 14:23:45 by agirardi         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

#include <map>

int main(void) {

  ft::AVLTree<int, std::string> tree;

  // Insert some key-value pairs
  tree.insert(1, "world");
  tree.insert(2, "this");
  tree.insert(3, "hello");
  tree.insert(4, "is");
  tree.insert(5, "an");
  tree.insert(6, "avl");
  tree.insert(7, "tree");

  // Print the tree in-order
  for (ft::AVLTree<int, std::string>::iterator it = tree.begin(); it != tree.end(); ++it) {
    std::cout << it->data.first << ": " << it->data.second << std::endl;
  }

  std::cout << std::endl << std::endl;

  // Find the value for a given key
  std::string value = tree.find(3);
  std::cout << "Value for key 3: " << value << std::endl;

  // Remove a key-value pair
  tree.remove(4);

  std::cout << std::endl << std::endl;

    // Print the tree in-order again
  for (ft::AVLTree<int, std::string>::iterator it = tree.begin(); it != tree.end(); ++it) {
    std::cout << it->data.first << ": " << it->data.second << std::endl;
  }

  return 0;
}
