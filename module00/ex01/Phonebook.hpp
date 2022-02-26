/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhabous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 22:09:17 by tkhabous          #+#    #+#             */
/*   Updated: 2022/02/25 22:09:19 by tkhabous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONE_BOOK
# define PHONE_BOOK

#include "Contact.hpp"

class Phonebook
{
private:
    Contact contact[8];
    int     number_of_contacts;
public:
    Phonebook();
    ~Phonebook();

	void	add_contact(void);
	void	search_contact(void);
    void    print_contacts(void);
};

# endif