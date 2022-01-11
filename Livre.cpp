#include "Livre.h"
#include "Lecteur.h"
#include "Emprunt.h"
#include "Auteur.h"

#include <iostream>



// constructeur par paramètres
Livre::Livre(std::string titre, std::string langue, std::string genre, std::string isbn, Auteur auteurDuLivre, Date dateparution) : _titre(titre), _langue(langue), _genre(genre), _isbn(isbn),  _auteurDuLivre(auteurDuLivre), _date(dateparution)
{
    _emprunte = false;
}

// =================================== Getters ======================================
std::string Livre::getIsbn()
{
    return _isbn;
}

// ================================= Setters ========================================
void Livre::setEtat(bool etat)
{
    _emprunte = etat;
}


// ================================ Méthodes ==============================
void Livre::afficheLivre()
{
    std::cout << "A propos du livre" << std::endl;
    std::cout << "Titre : " << _titre << std::endl;
    std::cout << "Langue : " << _langue << std::endl;
    std::cout << "Genre : " << _genre << std::endl;
    std::cout << "ISBN : " <<_isbn << std::endl;

    if(_emprunte == true)
    {
        std::cout << "Le livre est emprunte" << std::endl;
    }
    else
    {
        std::cout << "Le livre est libre" << std::endl;
    }
    std::cout << "A propos de l'auteur : " << std:: endl;
    std::cout << "Nom : " << _auteurDuLivre.getNomAuteur() << std::endl;
    std::cout << "Prenom : " << _auteurDuLivre.getPrenomAuteur() << std::endl;
    //std::cout << "Date de naissance : " << _auteurDuLivre.afficherAuteur() << std::endl;
    std::cout << "ID : " << _auteurDuLivre.getIdAuteur() << std::endl;
    std::cout << "Date de publication : " << std:: endl;
    std::cout << _date.getDay() << "/" << _date.getMonth() << "/" << _date.getYear() << std::endl;
}


// afficher la liste des id des gens ayant empruntés des livres
void Livre::afficherEmprunt()
{
    int n = _listeEmprunt.size();
    //std::cout << &_listeEmprunt << std::endl;

    std::cout << "liste d'emprunts :" << std::endl;
    for(int i = 0; i < n; i++)
    {
        std::cout << _listeEmprunt[i] << std::endl;
    }

}

// méthode pour emprunter un livre
void Livre::emprunter(Lecteur lecteur)
{
    if(_emprunte == true)
    {
        std::cout << "Le livre est deja emprunte" << std::endl;
    }
    else
    {
        _emprunte = true;
        _listeEmprunt.push_back(lecteur.getIdLecteur());

        //std::cout << "isbn qui va etre enregistre : " << _isbn << std::endl;

        Lecteur *pointLecteur = &lecteur;


        pointLecteur->ajouterIsbn(_isbn);
    }
}

// méthode pour rendre un livre
void Livre::rendre(Lecteur lecteur)
{
    if(_emprunte == true)
    {
        _emprunte = false;
    }
    else
    {
        std::cout << "Le livre est déjà libre" << std::endl;
    }
}
