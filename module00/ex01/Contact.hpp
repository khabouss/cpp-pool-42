/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkhabous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 22:09:54 by tkhabous          #+#    #+#             */
/*   Updated: 2022/02/25 22:09:55 by tkhabous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT
#define CONTACT

#include <iostream>
#include <iomanip>

class Contact
{
private:
    std::string _first_name;
    std::string _last_name;
    std::string _nickname;
    std::string _phone_number;
    std::string _darkest_secret;

public:
    Contact();
    ~Contact();

    std::string get_first_name() const;
    std::string get_last_name() const;
    std::string get_nickname() const;
    std::string get_phone_number() const;
    std::string get_darkest_secret() const;

    void set_first_name(std::string _first_name);
    void set_last_name(std::string _last_name);
    void set_nickname(std::string _nickname);
    void set_phone_number(std::string _phone_number);
    void set_darkest_secret(std::string _darkest_secret);
};

#endif