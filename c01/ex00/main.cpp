#include "zombie.hpp"

int main()
{
    std::cout << "zombie created on the stack" << std::endl;
    randomChump("foo");
    std::cout << "zombie created on the heap" << std::endl;
    Zombie* heapzombie = newZombie("fart");
    // heapzombie->announce();
    delete heapzombie;
    std::cout << "heapzombie has been deleted" << std::endl;
}