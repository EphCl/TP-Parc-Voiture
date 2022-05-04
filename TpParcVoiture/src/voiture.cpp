// Ephrem CLEMENT

#include <fstream>
#include "voiture.hpp"

Voiture saisirUneVoiture(){
    std::cout << "Entrez le modele : ";
    std::string modele;
    std::cin >> modele;

    std::cout << "Entrez le kilometrage : ";
    int kilometrage;
    std::cin >> kilometrage;

    Voiture v{cptNumMat++, modele, kilometrage, false};

    return v;
}

std::string formatAffVoiture(Voiture v)
{

    std::string valRetour = std::to_string(v.numMat);
    std::string etat = "En location";

    if (!v.etat)
        etat = "disponible";
    else
        etat = "En location";

    valRetour.append(" ").append(v.modele).append(" ").append(std::to_string(v.kilometrage)).append(" ").append(etat);
    return valRetour;
}

void afficherUneVoiture(const Voiture &v)
{
    std::cout << formatAffVoiture(v) << std::endl;
}

int saisirImmatriculation(){
    int numMat;
    std::cout << "Veuillez entrer le numero d'immatriculation : ";
    std::cin >> numMat;
    std::cout << std::endl;

    return numMat;
}

// Ephrem CLEMENT