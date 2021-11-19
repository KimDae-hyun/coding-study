/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daekim <daekim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 09:51:03 by daekim            #+#    #+#             */
/*   Updated: 2021/11/19 17:20:34 by daekim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Phonebook
{
    private:
    std::string contact[5];

    public:
    Phonebook();
    void add();
    void output_phonebook();
    void output_contact();
    static void show_contacts(Phonebook *phonebook[8], int cnt, int flag);
    static void destruct(Phonebook *phonebook[8], int cnt, int flag);
};

#endif
