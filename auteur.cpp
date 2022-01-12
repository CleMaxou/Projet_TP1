#include"auteur.h"
#include"date.h"

Auteur::Auteur(std::string idn, std::string nom, std::string prenom, Date born) : _idn(idn), _nom(nom), _prenom(prenom), _born(born) {
	
}
Auteur::Auteur() {

}

std::string Auteur::getIdn() const {
    return _idn;
}
std::string Auteur::getNom() const {
    return _nom;
}
std::string Auteur::getPrenom() const {
    return _prenom;
}
Date Auteur::getBorn() const {
    return _born;
}

void display(Auteur& auteur) {
    std::cout << auteur.getIdn() << "/" << auteur.getNom() << "/" << auteur.getPrenom() << "/" << toString(auteur.getBorn()) << '\n';

}

std::ostream& operator<<(std::ostream& os, Auteur auteur) {
    os << " Le nom de l'auteur est : " << auteur.getNom() << ". Le pr�nom de l'auteur est : " << auteur.getPrenom() << " L'id de l'auteur : " << auteur.getIdn() << " La date de l'auteur " << toString(auteur.getBorn()) << " La date de publication : " <<  std::endl;
    return os;
}