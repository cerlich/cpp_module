#include "phonebook.hpp"

string Contacts::get_first_name()
{
    return (first_name);
}

string Contacts::get_last_name()
{
    return (last_name);
}

string Contacts::get_nickname()
{
    return (nickname);
}

string Contacts::get_phone_number()
{
    return (phone_number);
}

string Contacts::get_darkest_secret()
{
    return (darkest_secret);
}

void Contacts::init(void)
{
    set_first_name();
    set_last_name();
    set_nickname();
    set_phone_number();
    set_darkest_secret();
}

void Contacts::set_first_name(void)
{
    while(1)
    {
        cout << "Enter first name:";
        cin >> first_name;
        if (!first_name.empty())
            break;
        else
            cout << "Field can't be empty. Try again" << endl;
    }
}

void Contacts::set_last_name(void)
{
    while(1)
    {
        cout << "Enter last name:";
        cin >> last_name;
        if (!last_name.empty())
            break;
        else
            cout << "Field can't be empty. Try again" << endl;
    }
}

void Contacts::set_nickname(void)
{
    while(1)
    {
        cout << "Enter nickname:";
        cin >> nickname;
        if (!nickname.empty())
            break;
        else
            cout << "Field can't be empty. Try again" << endl;
    }
}

void Contacts::set_phone_number(void)
{
    while(1)
    {
        cout << "Enter phone number:";
        cin >> phone_number;
        if (!phone_number.empty())
            break;
        else
            cout << "Field can't be empty. Try again" << endl;
    }
}

void Contacts::set_darkest_secret(void)
{
    while(1)
    {
        cout << "Enter darkest secret:";
        cin >> darkest_secret;
        if (!darkest_secret.empty())
            break;
        else
            cout << "Field can't be empty. Try again" << endl;
    }
}

void Contacts::get_all_info(void)
{
    cout << "ALL INFORMATION ABOUT CONTACT" << endl;
    cout << "First name: " << first_name << endl;
    cout << "Last name: " << last_name << endl;
    cout << "Nickname: " << nickname << endl;
    cout << "Phone number: " << phone_number << endl;
    cout << "Darkest secret: " << darkest_secret << endl;
}