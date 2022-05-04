// Ephrem CLEMENT

#include "parc.hpp"

void initParc(Parc &p, int n){
    std::cout << "saisissez le nombre de voiture a creer : ";
    std::cin >> n;
    for (int i = 0; i < n; i++)
        p.parc.push_back(saisirUneVoiture());
}

int rechercheVoiture(Parc p, int matricule){
    int tailleParc = p.parc.size();
    for(int i = 0; i < tailleParc; i++){
        if(p.parc[i].numMat == matricule){
            return i;
        }
    }
    return -1;
}

void louerUneVoiture(Parc &p, int matricule){
    std::cout << "Entrer le numero d'immatriculation : " << std::endl;
    std::cin >> matricule;
    int indiceVoiture = rechercheVoiture(p, matricule);
    if(indiceVoiture == 0){
        std::cout << "Voiture inconnue." << std::endl;
    }
    else{
        p.parc[indiceVoiture].etat = true;
        std::cout << "Vous louez la voiture." << std::endl;
    }
}

void retourVoiture(Parc &p, int matricule){
    int indiceVoiture = rechercheVoiture(p, matricule);
    if(indiceVoiture == 0){
        std::cout << "Voiture inconnue." << std::endl;
    }
    else{
        p.parc[indiceVoiture].etat = false;
        std::cout << "Vous avez rendu la voiture." << std::endl;
    }
}

void etatVoiture(Parc &p, int matricule){
    saisirImmatriculation();
    int indiceVoiture = rechercheVoiture(p, matricule);
    if(indiceVoiture == 0){
        std::cout << "Voiture inconnue." << std::endl;
    }
    else{
        afficherUneVoiture(p.parc[indiceVoiture]);
    }
}

void etatParc(Parc p){
    int tailleParc = p.parc.size();
    std::cout << "Nombre total de voitures : " << tailleParc << std::endl;
    for (int i = 0; i < tailleParc; i++) {
        afficherUneVoiture(p.parc[i]);
    }
}

void ajouterUneVoiture(Parc &p){
    for (int i = 0; i < 1; i++)
        p.parc.push_back(saisirUneVoiture());
    std::cout << "Voiture Ajoutée" << std::endl;
}

void supprimerVoiture(Parc &p, Voiture v){
    
    v.numMat = saisirImmatriculation();
    std::vector<Voiture>::const_iterator indiceVoiture = p.parc.begin() + rechercheVoiture(p, v.numMat);
    p.parc.erase(indiceVoiture);
}

// Ephrem CLEMENT