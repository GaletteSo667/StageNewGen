/*****************************************************************//**
 * \file   Mission.h
 * \brief  Déclaration de la classe Mission
 *
 * \author Yanis
 * \date    2024
 *********************************************************************/

#ifndef MISSION_H
#define MISSION_H
#include <iostream>
#include <string>

 /*! \class Mission
     * \brief Classe représentant une mission avec 3 attributs privés
     *
     * Cette classe a une finalité pédagogique :
     * \li Rappel du C++
     * \li Commentaire avec Doxygen
     * \li Git, Github
     */
class Mission {

private:
    /**
     * Membre privé nomMission : contient le nom de la mission
     */
    std::string nomMission;

    /**
     * Membre privé dureeMission : contient la durée de la mission en mois
     */
    int dureeMission;

    /**
     * Membre privé nbPersonne : contient le nombre de personnes impliquées dans la mission
     */
    int nbPersonne;

public:
    /* Classe sous forme canonique */
    Mission();
    ~Mission();
    Mission(const Mission& other);
    Mission& operator = (const Mission& other);

    Mission(std::string nom, int duree);

    std::string getNomMission();
    void setNomMission(std::string nouveauNom);

    int getDureeMission();
    void setDureeMission(int nouvelleDuree);

    int getNbPersonne();
    void setNbPersonne(int nombre);
};

#endif
