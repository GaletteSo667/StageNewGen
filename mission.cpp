/*****************************************************************//**
 * \file   Mission.cpp
 * \brief  Définition de la classe Mission
 *
 * \author Yanis
 * \version 0.1
 * \date    2024
 *
 * Programme Cpp permettant de créer des objets pour décrire des missions
 *********************************************************************/

#include "Mission.h"
#include <iostream>

using namespace std;

/**
 * \brief Constructeur par défaut
 * \li Nom = non définie
 * \li Durée = 0
 * \li Nombre de personnes = 0
 */
Mission::Mission() : nomMission("non définie"), dureeMission(0), nbPersonne(0) {}

/**
 * \brief Constructeur avec paramètres
 *
 * \param nom nom de la mission
 * \param duree durée de la mission en mois
 */
Mission::Mission(std::string nom, int duree) : nomMission(nom), dureeMission(duree), nbPersonne(0) {}

/**
 * \brief Destructeur
 *
 * Affiche un message lors de la destruction de l'objet Mission
 */
Mission::~Mission() {
    cout << "Destruction de la mission " << nomMission << endl;
}

/**
 * \brief Accesseur de l'attribut nomMission
 *
 * \return Nom de la mission
 */
std::string Mission::getNomMission() {
    return nomMission;
}

/**
 * \brief Accesseur de l'attribut dureeMission
 *
 * \return Durée de la mission
 */
int Mission::getDureeMission() {
    return dureeMission;
}

/**
 * \brief Accesseur de l'attribut nbPersonne
 *
 * \return Nombre de personnes impliquées dans la mission
 */
int Mission::getNbPersonne() {
    return nbPersonne;
}

/**
 * \brief Mutateur de l'attribut nomMission
 *
 * \param nouveauNom Nouveau nom de la mission
 */
void Mission::setNomMission(std::string nouveauNom) {
    nomMission = nouveauNom;
}

/**
 * \brief Mutateur de l'attribut dureeMission
 *
 * \param nouvelleDuree Nouvelle durée de la mission
 */
void Mission::setDureeMission(int nouvelleDuree) {
    dureeMission = nouvelleDuree;
}

/**
 * \brief Mutateur de l'attribut nbPersonne
 *
 * \param nombre Nombre de personnes impliquées dans la mission
 */
void Mission::setNbPersonne(int nombre) {
    nbPersonne = nombre;
}
