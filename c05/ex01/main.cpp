#include "bureaucrat.hpp"
#include "Form.hpp"

int main (void)
{
    try
    {        
        Bureaucrat Worker ("Worker", 140);
        Bureaucrat Boss ("Adnan", 10);
        std::cout << std::endl;
        
        //un bureaucrat a partir du grade 139 peux signer le contrat du worker, pas en dessous
	    Form Worker_contract ("Worker's Contract", 140, 140);
        Form Boss_contract ("Boss's Contract", 1, 1);
        
        std::cout << std::endl << Worker_contract << std::endl;
        try
        {
            Boss.signForm(Worker_contract);
        }
        catch(const std::exception& e)
        {
            std::cout << e.what();
        }
        std::cout << std::endl << Worker_contract << std::endl << std::endl;
    
        try
        {
            Worker.signForm(Boss_contract);
            std::cout << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
	return (0);
}
