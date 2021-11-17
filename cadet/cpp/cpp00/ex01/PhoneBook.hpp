#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <sstream>

class Phonebook
{
    private:
    std::string contact[5];

    public:
    Phonebook();
    void add();
    void    output_phonebook();
    void    output_contact();
    static void show_contacts(Phonebook *phonebook[8], int cnt, int flag);
    static void destruct(Phonebook *phonebook[8], int cnt, int flag);
};

#endif