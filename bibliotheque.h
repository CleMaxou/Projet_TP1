#ifndef BIBLIOTHEQUE_H
#define BIBLIOTHEQUE_H

#include <vector>
#include <string>
#include "Livre.h"
#include "Lecteur.h"
#include "Emprunt.h"

class Bibliotheque {
public:
	Bibliotheque();
	void ajouterLivre(Livre& livre);
	void ajouterUnLecteur(Lecteur& lecteur);
	void ajouterEmprunt(Emprunt& emprunt);
	void afficherListeLivre();
	void afficherListeLecteur();
	void afficherListeEmprunt();
	void emprunt(Livre& livre, Lecteur& lecteur, Date date);
	void rendre(Livre& livre, Lecteur& lecteur, int numEmprunt);
	void chercherLivresAuteur(Auteur& auteur);
	void calculLivreemprunter();
	friend std::ostream& operator<<(std::ostream& os, const Bibliotheque& liste);
private:
	std::vector<Livre> _listeLivres;
	std::vector<Lecteur> _listeLecteurs;
	std::vector<Emprunt> _listeEmprunts;

};

#endif // BIBLIOTHEQUE_H