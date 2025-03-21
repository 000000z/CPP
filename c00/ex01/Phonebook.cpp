#include "Phonebook.hpp"

int is_alpha(std::string str)
{
    int i = 0;
    while(str[i])
    {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            i++;
        else
            return(1);
    }
    return(0);
}

int is_number(std::string str)
{
    int i = 0;
    while(str[i])
    {
        if(str[i] >= '0' && str[i] <= '9')
            i++;
        else
            return(1);
    }
    return(0);
}

bool getValidInput(std::string &input, const std::string &prompt, const std::string &errorMsg, bool checkNumeric = false)
{
    while (true)
    {
        std::cout << prompt << std::endl;
        std::getline(std::cin, input);
        if (std::cin.eof())
            return false;
        if (input == "EXIT")
            return false;
        if(input.empty())
            std::cout << "Empty answers are not allowed" << std::endl;
        else if (checkNumeric)
        {
            if (is_number(input) != 1) 
                return true;
            std::cout << "Please write a valid number" << std::endl;
        }
        else if (is_alpha(input) != 1) 
                return true;
        else
            std::cout << errorMsg << std::endl;
    }
}

int add_function(PhoneBook &phonebook)
{
    Contact newContact;
    std::string input;
    if (!getValidInput(input, "What is your First name?", 
                       "Please choose a real name"))
        return 1;
    newContact.setFirstName(input);
    if (!getValidInput(input, "What is your Last name?", 
                      "Please choose a real last name"))
        return 1;
    newContact.setLastName(input);
    
    if (!getValidInput(input, "What is your Nickname?", 
                      "Please choose a valid nickname"))
        return 1;
    newContact.setNickName(input);
    if (!getValidInput(input, "What is your Number?", 
                      "Please enter a valid phone number", true))
        return 1;
    newContact.setPhone(input);    
    if (!getValidInput(input, "What is your Darkest Secret?", 
                      "Please enter a valid secret"))
        return 1;
    newContact.setDarkest(input);

    phonebook.addContact(newContact);

    return 0;
}

void layout(const PhoneBook &phonebook)
{

    std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
    std::cout << "----------+----------+----------+----------" << std::endl;
    
    for (int i = 0; i < phonebook.getContactCount(); i++)
    {
        std::cout << std::setw(10) << i << "|";
        
        if (phonebook.getContact(i).getFirstName().length() > 10)
        {
            std::cout << phonebook.getContact(i).getFirstName().substr(0, 9) << ".|";
        }
        else
        {
            std::cout << std::setw(10) << phonebook.getContact(i).getFirstName() << "|";
        }
        if (phonebook.getContact(i).getLastName().length() > 10)
        {
            std::cout << phonebook.getContact(i).getLastName().substr(0, 9) << ".|";
        }
        else
        {
            std::cout << std::setw(10) << phonebook.getContact(i).getLastName() << "|";
        }
        if (phonebook.getContact(i).getNickname().length() > 10)
        {
            std::cout << phonebook.getContact(i).getNickname().substr(0, 9) << "." << std::endl;
        }
        else
        {
            std::cout << std::setw(10) << phonebook.getContact(i).getNickname() << std::endl;
        }
    }
}

int search_function(PhoneBook &phonebook)
{
    int i = 0;

    if(phonebook.getContactCount() == 0)
    {
        std::cout << "No contact. please add a contact" << std::endl;
        return(0);
    }

    layout(phonebook);
    while(1)
    {
        std::string answer;
        std::cout << "Please choose the index that you want to know more about" << std::endl;
        std::getline(std::cin, answer);
        if (std::cin.eof())
            return(0);
        if(answer == "EXIT")
            return(1);
        if(!(answer >= "0" && answer <= "8"))
            std::cout << "Wrong index please choose something else" << std::endl;
        else
        {
            i = std::atoi(answer.c_str());

            if (i >= phonebook.getContactCount())
            {
                std::cout << "No contact at this index." << std::endl;
                continue;
            }

            std::cout << "Your First name is " << phonebook.getContact(i).getFirstName() << std::endl;
            std::cout << "Your Last name is " << phonebook.getContact(i).getLastName() << std::endl;
            std::cout << "Your Phone number is " << phonebook.getContact(i).getPhone() << std::endl;
            std::cout << "Your Nickname is " <<phonebook.getContact(i).getNickname() << std::endl;
            std::cout << "Your Darkest secret is " <<phonebook.getContact(i).getDarkest() << std::endl;
            return(0);
        }
    }
}

std::string rename(std::string answer)
{
    unsigned long i = 0;

    while (i < answer.length())
    {
        answer[i] = toupper(answer[i]);
        i++;
    }

    return(answer);
}

int main()
{
    PhoneBook myPhonebook;
    std::string answer;

    while (1)
    {
        std::cout << "Please choose a command(ADD, SEARCH, EXIT)" << std::endl;
        std::getline(std::cin, answer);
        if (std::cin.eof())
            return(0);
        if(answer == "EXIT")
            return(0);
        answer = rename(answer);
        if(answer == "ADD")
        {
            if(add_function(myPhonebook))
                return(0);
        }
        else if(answer == "SEARCH")
        {
            if(search_function(myPhonebook))
                return(0);
        }
        
    }
    return(0);
}
