#include <iostream>
#include "Livre.h"
#include "Auteur.h"

int main()
{
	//std::cout << "salut les amis" << std::endl;
	
	Livre test("le titre", "francais", "histoire", "023154", false);
	std::cout << test.getTitle() << std::endl;
	std::cout << test.getLanguage() << std::endl;
	std::cout << test.getStyle() << std::endl;
	std::cout << test.getIsbn() << std::endl;
	std::cout << test.getIsBorrowed() << std::endl;
	return 0;
}
