// Ephrem CLEMENT

#include <vector>
#include "voiture.hpp"

//Structure du parc de voitures
struct Parc{
    std::vector<Voiture> parc;
};

void initParc(Parc &p, int n);
int rechercheVoiture(Parc p, int matricule);
void louerUneVoiture(Parc &p, int matricule);
void retourVoiture(Parc &p, int matricule);
void etatVoiture(Parc &p, int matricule);
void etatParc(Parc p);
void ajouterUneVoiture(Parc &p);
void supprimerVoiture(Parc &p, Voiture v);

// Ephrem CLEMENT