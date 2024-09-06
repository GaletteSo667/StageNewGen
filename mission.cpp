/*****************************************************************//**
 * \file   Mission.cpp
 * \brief  D�finition de la classe Mission
 *
 * \author Yanis
 * \version 0.1
 * \date    2024
 *
 * Programme Cpp permettant de cr�er des objets pour d�crire des missions
 *********************************************************************/

#include "Mission.h"
#include <iostream>

using namespace std;

/**
 * \brief Constructeur par d�faut
 * \li Nom = non d�finie
 * \li Dur�e = 0
 * \li Nombre de personnes = 0
 */
Mission::Mission() : nomMission("non d�finie"), dureeMission(0), nbPersonne(0) {}

/**
 * \brief Constructeur avec param�tres
 *
 * \param nom nom de la mission
 * \param duree dur�e de la mission en mois
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
 * \return Dur�e de la mission
 */
int Mission::getDureeMission() {
    return dureeMission;
}

/**
 * \brief Accesseur de l'attribut nbPersonne
 *
 * \return Nombre de personnes impliqu�es dans la mission
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
 * \param nouvelleDuree Nouvelle dur�e de la mission
 */
void Mission::setDureeMission(int nouvelleDuree) {
    dureeMission = nouvelleDuree;
}

/**
 * \brief Mutateur de l'attribut nbPersonne
 *
 * \param nombre Nombre de personnes impliqu�es dans la mission
 */
void Mission::setNbPersonne(int nombre) {
    nbPersonne = nombre;
}
