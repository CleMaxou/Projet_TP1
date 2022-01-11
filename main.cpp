#include<iostream>
#include"date.h"
#include"livre.h"
#include"lecteur.h"
#include"auteur.h"
#include"emprunt.h"
#include"bibliotheque.h"


using namespace std;
int main() {
	Date date1(5, 13, 2020);
	Date date2(2, 25, 1995);
	Date date3(8, 31, 1959);
	Date date4(11, 25, 2022);

	Auteur auteur1("7854","Colbell", "Jonhatan", date3);
	Auteur auteur2("8541","Blora", "Natasha", date2);
	Auteur auteur3("bebe", "werber", "bernard", date1);
	Auteur auteur4("bebe", "werber", "bernard", date4);

	Livre livre1("The Hitchhiker's Guide to the Galaxy", auteur1, "Anglais", "Science Fiction", date1, "0593359445");
	Livre livre2("L'armee des fourmis mangeusent domme ", auteur1, "Fran�ais", "Documentaire", date2, "6666666");
	Livre livre3("domme ", auteur2, "Fran�ais", "Documentaire", date2, "6666666");
	Livre livre4("L'armee ", auteur2, "Fran�ais", "Documentaire", date2, "6666666");
	Livre livre5("Hello Kitty", auteur4, "Fran�ais", "Documentaire", date3, "6666666");
	Lecteur ginhac("dginhac", "Ginhac", "Dominique");
	Lecteur max("dmax", "Devaucoux", "Max");
	Lecteur mathis("dmathis", "Demonceaux", "Mathis");
	std::cout << mathis;
	Bibliotheque biblio;
	
	
	return 0;
}