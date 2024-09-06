/*****************************************************************//**
 * \file   Mission.h
 * \brief  D�claration de la classe Mission
 *
 * \author Yanis
 * \date    2024
 *********************************************************************/

#ifndef MISSION_H
#define MISSION_H
#include <iostream>
#include <string>

 /*! \class Mission
     * \brief Classe repr�sentant une mission avec 3 attributs priv�s
     *
     * Cette classe a une finalit� p�dagogique :
     * \li Rappel du C++
     * \li Commentaire avec Doxygen
     * \li Git, Github
     */
class Mission {

private:
    /**
     * Membre priv� nomMission : contient le nom de la mission
     */
    std::string nomMission;

    /**
     * Membre priv� dureeMission : contient la dur�e de la mission en mois
     */
    int dureeMission;

    /**
     * Membre priv� nbPersonne : contient le nombre de personnes impliqu�es dans la mission
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
