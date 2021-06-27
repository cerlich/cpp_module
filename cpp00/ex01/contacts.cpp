#include "Contacts.hpp"

std::string Contacts::get_first_name()
{
    return (first_name);
}

std::string Contacts::get_last_name()
{
    return (last_name);
}

std::string Contacts::get_nickname()
{
    return (nickname);
}

std::string Contacts::get_phone_number()
{
    return (phone_number);
}

std::string Contacts::get_darkest_secret()
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
        std::cout << "Enter first name:";
        std::cin >> first_name;
        if (!first_name.empty())
            break;
        else
            std::cout << "Field can't be empty. Try again" << std::endl;
    }
}

void Contacts::set_last_name(void)
{
    while(1)
    {
        std::cout << "Enter last name:";
        std::cin >> last_name;
        if (!last_name.empty())
            break;
        else
            std::cout << "Field can't be empty. Try again" << std::endl;
    }
}

void Contacts::set_nickname(void)
{
    while(1)
    {
        std::cout << "Enter nickname:";
        std::cin >> nickname;
        if (!nickname.empty())
            break;
        else
            std::cout << "Field can't be empty. Try again" << std::endl;
    }
}

void Contacts::set_phone_number(void)
{
    while(1)
    {
        std::cout << "Enter phone number:";
        std::cin >> phone_number;
        if (!phone_number.empty())
            break;
        else
            std::cout << "Field can't be empty. Try again" << std::endl;
    }
}

void Contacts::set_darkest_secret(void)
{
    while(1)
    {
        std::cout << "Enter darkest secret:";
        std::cin >> darkest_secret;
        if (!darkest_secret.empty())
            break;
        else
            std::cout << "Field can't be empty. Try again" << std::endl;
    }
}

void Contacts::get_all_info(void)
{
    std::cout << "ALL INFORMATION ABOUT CONTACT" << std::endl;
    std::cout << "First name: " << first_name << std::endl;
    std::cout << "Last name: " << last_name << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Phone number: " << phone_number << std::endl;
    std::cout << "Darkest secret: " << darkest_secret << std::endl;
}