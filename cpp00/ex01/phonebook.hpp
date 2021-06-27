#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip> 
using namespace std;

class Contacts
{
    public:
        void init(void);
        void get_all_info(void);
        string get_first_name(void);
        string get_last_name(void);
        string get_nickname(void);
        string get_phone_number(void);
        string get_darkest_secret(void);

    private:
        string first_name;
        string last_name;
        string nickname;
        string phone_number;
        string darkest_secret;

        void set_first_name(void);
        void set_last_name(void);
        void set_nickname(void);
        void set_phone_number(void);
        void set_darkest_secret(void);
};

int main(void);

#endif