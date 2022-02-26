/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhabous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 21:52:44 by tkhabous          #+#    #+#             */
/*   Updated: 2022/02/26 02:04:14 by tkhabous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook() { this->number_of_contacts = 0; }

Phonebook::~Phonebook() {}

void Phonebook::add_contact()
{
    std::string first_name, last_name, nickname, phone_number, darkest_secret;

    std::cout << "First Name: ";
    std::getline(std::cin, first_name);

    std::cout << "Last Name: ";
    std::getline(std::cin, last_name);

    std::cout << "Nickname: ";
    std::getline(std::cin, nickname);

    std::cout << "Phone Number: ";
    std::getline(std::cin, phone_number);

    std::cout << "Darkest Secret: ";
    std::getline(std::cin, darkest_secret);

    if (first_name.empty() && last_name.empty() && nickname.empty() && phone_number.empty() && darkest_secret.empty())
    {
        std::cout << "The contact fields are empty :)" << std::endl;
        return;
    }

    if (this->number_of_contacts < 7)
    {
        this->contact[this->number_of_contacts].set_first_name(first_name);
        this->contact[this->number_of_contacts].set_last_name(last_name);
        this->contact[this->number_of_contacts].set_nickname(nickname);
        this->contact[this->number_of_contacts].set_phone_number(phone_number);
        this->contact[this->number_of_contacts].set_darkest_secret(darkest_secret);
    }
    else
    {
        this->number_of_contacts = 0;
        this->contact[0].set_first_name(first_name);
        this->contact[0].set_last_name(last_name);
        this->contact[0].set_nickname(nickname);
        this->contact[0].set_phone_number(phone_number);
        this->contact[0].set_darkest_secret(darkest_secret);
    }
    this->number_of_contacts++;
    std::cout << "The contact has been added successfuly :D" << std::endl;
}

void Phonebook::search_contact(void)
{
    int index;

    if (this->number_of_contacts == 0)
		std::cout << "The list of contacts is empty! add contacts first" << std::endl;
    else
    {
        this->print_contacts();
        std::cout << " - Search by Index: " << std::endl;
        while (!(std::cin >> index) || index <= 0 || index > this->number_of_contacts)
        {
 			std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << " !! Invalid Index !!" << std::endl;
        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << " * First Name: " << this->contact[index - 1].get_first_name() << std::endl;
        std::cout << " * Last Name: " << this->contact[index - 1].get_last_name() << std::endl;
        std::cout << " * Nickname: " << this->contact[index - 1].get_nickname() << std::endl;
        std::cout << " * Phone Number: " << this->contact[index - 1].get_phone_number() << std::endl; 
        std::cout << " * Darkest Secret: " << this->contact[index - 1].get_darkest_secret() << std::endl << std::endl;
    }
}

void Phonebook::print_contacts()
{
    std::cout << "|-------------------------------------------|" << std::endl;
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    std::cout << "|-------------------------------------------|" << std::endl;
    for (int i = 0; i < this->number_of_contacts; i++)
    {
        std::cout << "|" << std::setw(10) << i + 1 << "|";
        std::string firstName = this->contact[i].get_first_name();
        if (firstName.length() > 10)
            std::cout << firstName.substr(0, 9) << ".";
        else
            std::cout << std::setw(10) << firstName << "|";
        
        std::string lastName = this->contact[i].get_last_name();
        if (lastName.length() > 10)
            std::cout << lastName.substr(0, 9) << ".";
        else
            std::cout << std::setw(10) << lastName << "|";

        std::string nickName = this->contact[i].get_nickname();
        if (nickName.length() > 10)
            std::cout << nickName.substr(0, 9) << ".";
        else
            std::cout << std::setw(10) << nickName << "|" << std::endl;
    }
    std::cout << "|___________________________________________|\n" << std::endl;
}
