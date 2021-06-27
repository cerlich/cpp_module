#include "phonebook.hpp"

void get_list_contacts(Contacts contacts[8], int num)
{
    int tmp = 0;
    string index;
    cout << right
        << "|" << setw (10) << "index" << "|"
        << setw (10) << "first name" << "|"
        << setw (10) << "last name" << "|"
        << setw (10) << "nickname" << "|" << endl;
    while (tmp < num)
    {
        cout << right
            << "|" << setw (10) << tmp + 1 << "|"
            << setw (10) << contacts[tmp].get_first_name() << "|"
            << setw (10) << contacts[tmp].get_last_name() << "|"
            << setw (10) << contacts[tmp].get_nickname() << "|" << endl;
        tmp++;
    }
    cout << "Enter index of contact you need" << endl;
    while (1)
    {
        tmp = 0;
        cin >> index;
        try
        {
            tmp = stoi(index);
        }
        catch(const std::invalid_argument& e)
        {
            std::cerr << "Invalid index. Try again" << '\n';
        }
        if (tmp < 1 || tmp > num)
            cout << "Invalid index. Try again" << endl; 
        else
            break;
    }
    contacts[tmp - 1].get_all_info();
}

int main(void)
{
    int num_contact = 0;
    Contacts contacts[8];
    string command;
    while (1)
    {
        cout << "Enter the command\n";
        cin >> command;
        if (command == "EXIT")
            exit (0);
        else if (command == "ADD")
        {
            if (num_contact > 7)
                cout << "No more space in phonebook\n";
            else
            {
                contacts[num_contact].init();
                num_contact++;
            }
        }
        else if (command == "SEARCH")
        {
            if (num_contact == 0)
                cout << "Phonebook is empty" << endl;
            else
                get_list_contacts(contacts, num_contact);
        }
        else
           cout << "Invalid command, try again\n";
    }
    return (0);
}