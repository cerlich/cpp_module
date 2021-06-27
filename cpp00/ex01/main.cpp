#include "phonebook.hpp"

void get_list_contacts(Contacts contacts[8], int num)
{
    int tmp = 0;
    std::string index;
    std::cout << std::right
        << "|" << std::setw (10) << "index" << "|"
        << std::setw (10) << "first name" << "|"
        << std::setw (10) << "last name" << "|"
        << std::setw (10) << "nickname" << "|" << std::endl;
    while (tmp < num)
    {
        std::cout << std::right
            << "|" << std::setw (10) << tmp + 1 << "|"
            << std::setw (10) << contacts[tmp].get_first_name() << "|"
            << std::setw (10) << contacts[tmp].get_last_name() << "|"
            << std::setw (10) << contacts[tmp].get_nickname() << "|" << std::endl;
        tmp++;
    }
    std::cout << "Enter index of contact you need" << std::endl;
    while (1)
    {
        tmp = 0;
        std::cin >> index;
        try
        {
            tmp = stoi(index);
        }
        catch(const std::invalid_argument& e)
        {
            std::cerr << "Invalid index. Try again" << '\n';
        }
        if (tmp < 1 || tmp > num)
            std::cout << "Invalid index. Try again" << std::endl; 
        else
            break;
    }
    contacts[tmp - 1].get_all_info();
}

int main(void)
{
    int num_contact = 0;
    Contacts contacts[8];
    std::string command;
    while (1)
    {
        std::cout << "Enter the command\n";
        std::cin >> command;
        if (command == "EXIT")
            exit (0);
        else if (command == "ADD")
        {
            if (num_contact > 7)
                std::cout << "No more space in phonebook\n";
            else
            {
                contacts[num_contact].init();
                num_contact++;
            }
        }
        else if (command == "SEARCH")
        {
            if (num_contact == 0)
                std::cout << "Phonebook is empty" << std::endl;
            else
                get_list_contacts(contacts, num_contact);
        }
        else
           std::cout << "Invalid command, try again\n";
    }
    return (0);
}