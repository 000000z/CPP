#include <string>
#include <iostream>
#include <cctype>
#include <cstdlib>
#include <iomanip>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "stringPTR = "<< stringPTR << std::endl;
    std::cout << "stringREF = "<< &stringREF << std::endl;
    std::cout << "stringPTR content = "<< *stringPTR << std::endl;
    std::cout << "stringREF content = "<< stringREF << std::endl;
}