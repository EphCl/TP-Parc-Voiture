// Ephrem CLEMENT

#include <fstream>
#include "parc.hpp"

void save(Parc p, std::string nomFic)
{
    std::cout << "Saisir nom fichier : " << std::endl;
    std::cin >> nomFic;
    std::ofstream ofs;
    ofs.open(nomFic + ".txt", std::ofstream::out | std::ofstream::ate);
    ofs << "Etat du parc : " << std::endl;

    for (std::vector<Voiture>::const_iterator it = p.parc.begin(); it != p.parc.end(); it++)
    {

        ofs << formatAffVoiture(*it) << std::endl;
    }
    ofs.close();
}

void afficherMenu()
{
    std::cout << "-------MENU-------" << std::endl;
    std::cout << "1 : Louer une voiture" << std::endl;
    std::cout << "2 : Retourner une voiture" << std::endl;
    std::cout << "3 : Etat d'une voiture" << std::endl;
    std::cout << "4 : Etat du parc de voitures" << std::endl;
    std::cout << "5 : Ajouter une voiture" << std::endl;
    std::cout << "6 : Supprimer une voiture" << std::endl;
    std::cout << "7 : Sauvegarder l'etat du parc" << std::endl;
    std::cout << "8 : Quitter" << std::endl;
}

void choixMenu(Parc p, Voiture v)
{
    initParc(p, 0);
    afficherMenu();
    std::string nomFic;
    int prmChoix;
    int numMat = 0;
    std::cin >> prmChoix;
    while (prmChoix != 8)
    {
        switch (prmChoix)
        {
        case 1 :
            std::cout << "choix 1" << std::endl;
            louerUneVoiture(p, numMat);
            afficherMenu();
            std::cin >> prmChoix;
        break;

        case 2 :
            std::cout << "choix 2" << std::endl;
            numMat = saisirImmatriculation();
            retourVoiture(p, numMat);
            afficherMenu();
            std::cin >> prmChoix;
        break;

        case 3 :
            std::cout << "choix 3" << std::endl;
            etatVoiture(p, numMat);
            afficherMenu();
            std::cin >> prmChoix;
        break;

        case 4 :
            std::cout << "choix 4" << std::endl;
            etatParc(p);
            afficherMenu();
            std::cin >> prmChoix;
        break;

        case 5 :
            std::cout << "choix 5" << std::endl;
            ajouterUneVoiture(p);
            afficherMenu();
            std::cin >> prmChoix;
        break;
        
        case 6 :
            std::cout << "choix 6" << std::endl;
            supprimerVoiture(p, v);
            afficherMenu();
            std::cin >> prmChoix;
        break;
        
        case 7 :
            std::cout << "choix 7" << std::endl;
            save(p, nomFic);
            afficherMenu();
            std::cin >> prmChoix;
        break;
        default:
            std::cout << prmChoix << " : Non reconnu" << std::endl;
            afficherMenu();
            std::cin >> prmChoix;
        break;
        }
    }

    std::cout << "Fin du programme" << std::endl;
}

int main(){

    Parc p;
    Voiture v;

    choixMenu(p, v);

}

// Ephrem CLEMENT