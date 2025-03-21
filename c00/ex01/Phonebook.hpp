#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <cctype>
#include <cstdlib>
#include <iomanip>

class   Contact
{
private:
    std::string FIRST_NAME;
    std::string LAST_NAME;
    std::string NICKNAME;
    std::string PHONE;
    std::string DARKEST_SECRET;
public:
    void setFirstName(const std::string& name)
    {
        FIRST_NAME = name; 
    }
    std::string getFirstName() const {
        return FIRST_NAME;
    }
    void setLastName(const std::string& lastname)
    {
        LAST_NAME = lastname; 
    }
    std::string getLastName() const {
        return LAST_NAME;
    }
    void setNickName(const std::string& nickname)
    {
        NICKNAME = nickname; 
    }
    std::string getNickname() const {
        return NICKNAME;
    }
    void setPhone(const std::string& phone)
    {
        PHONE = phone; 
    }
    std::string getPhone() const {
        return PHONE;
    }
    void setDarkest(const std::string& darkest)
    {
        DARKEST_SECRET = darkest; 
    }
    std::string getDarkest() const {
        return DARKEST_SECRET;
    }
};

class PhoneBook 
{
private:
    Contact contact[8];
    int count;
public:
    PhoneBook() : count(0) {}

    void addContact(const Contact& newContact)
    {
        static int position_to_replace = 0;
        
        if (count < 8)
        {
            contact[count] = newContact;
            count++;
        }
        else
        {
            std::cout << "PhoneBook is full! The oldest contact will be replaced." << std::endl;
            contact[position_to_replace] = newContact;
            position_to_replace = (position_to_replace + 1) % 8;
        }
    }

    Contact getContact(int index) const {
        if (index >= 0 && index < count) 
        {
            return contact[index];
        }
        return Contact();
    }
    
    int getContactCount() const {
        return count;
    }
};

#endif