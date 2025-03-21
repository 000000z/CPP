#include "Animal.hpp"

int main()
{
	const Animal *i = new Cat();
	const Animal *j = new Dog();
	
	std::cout <<  "\nTableau d'objets Animal : \n" << std::endl;
	const Animal *Dog_Cat[6];
	for (int i = 0; i < 6; i++)
	{
		if (i % 2 == 0)
		{
			Dog_Cat[i] = new Cat();
			Dog_Cat[i]->makeSound();
		}
		else
		{
			Dog_Cat[i] = new Dog();
			Dog_Cat[i]->makeSound();
		}
	}
	
	std::cout <<  "\nDelete le tableau : \n" << std::endl;
	for (int i = 0; i < 6; i++)
		delete Dog_Cat[i];
	
	std::cout <<  "\nChecker la deep copy : \n" << std::endl;
	Dog chien;
	chien.setDogIdea("Je suis un chien.", 3);
	std::cout << chien.getDogIdea(3) << std::endl;
	Dog shee_un = chien;
	shee_un.setDogIdea("Je suis un shee_un !", 3);
	std::cout << shee_un.getDogIdea(3) << std::endl;
	std::cout << "shee_uns new idea : " << shee_un.getDogIdea(3) << std::endl;
	std::cout << "chien's idea : "<< chien.getDogIdea(3) << std::endl;

	std::cout << std::endl;
	
	delete j;
	delete i;

	return 0;

}

// int main()
// {
	// const Animal* meta = new Animal();
	// const Animal* j = new Cat();
	// const Animal* i = new Dog();
	// const WrongAnimal* wrong = new WrongAnimal();
	// const WrongAnimal* wcat = new WrongCat();

	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	
	// i->makeSound(); //will output the cat sound!
	// j->makeSound();
	// meta->makeSound();
	// wrong->makeSound();
	// wcat->makeSound();

	// delete i;
	// delete j;
	// delete meta;
	// delete wrong;
	// delete wcat;
	// return 0;
// }