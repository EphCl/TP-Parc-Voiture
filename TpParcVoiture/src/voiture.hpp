// Ephrem CLEMENT

#include <string>
#include <iostream>

int static cptNumMat = 0;
// 1) On va incrémenter ce chiffre à chaque nouvelle voiture créée

struct Voiture
{
    int numMat;
    std::string modele;
    int kilometrage;
    bool etat;
};

Voiture saisirUneVoiture();
std::string formatAffVoiture(Voiture v);
void afficherUneVoiture(const Voiture &v);
int saisirImmatriculation();

// Ephrem CLEMENT()