#ifndef CONTACTS_HPP
#define CONTACTS_HPP

#include <iostream>
#include <string>
#include <iomanip> 

class Contacts
{
    public:
        void init(void);
        void get_all_info(void);
        std::string get_first_name(void);
        std::string get_last_name(void);
        std::string get_nickname(void);
        std::string get_phone_number(void);
        std::string get_darkest_secret(void);

    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;

        void set_first_name(void);
        void set_last_name(void);
        void set_nickname(void);
        void set_phone_number(void);
        void set_darkest_secret(void);
};

int main(void);

#endif