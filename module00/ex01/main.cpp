/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhabous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 22:15:17 by tkhabous          #+#    #+#             */
/*   Updated: 2022/02/25 22:15:19 by tkhabous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main(void)
{
    Phonebook phonebook;
    std::string cmd;

    std::cout << " ----> MY PHONEBOOK <---- " << std::endl;
	std::cout << " - Enter a command (ADD, SEARCH or EXIT):" << std::endl;

    bool run = true;

    while (run)
    {
        std::cout << ">";
        std::getline(std::cin, cmd);
		if (cmd == "ADD")
			phonebook.add_contact();
		else if (cmd == "SEARCH")
			phonebook.search_contact();
		else if (cmd == "EXIT")
		{
			std::cout << "See ya!" << std::endl;
			run = false;
		}
    }
    return (0);
}