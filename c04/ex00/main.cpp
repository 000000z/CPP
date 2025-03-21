#include "Animal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Cat();
	const Animal* i = new Dog();
	const WrongAnimal* wrong = new WrongAnimal();
	const WrongAnimal* wcat = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	wrong->makeSound();
	wcat->makeSound();

	delete i;
	delete j;
	delete meta;
	delete wrong;
	delete wcat;
	return 0;
}