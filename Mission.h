/*****************************************************************//**
 * \file   Mission.h
 * \brief  Declaration de la classe Mission
 * 
 * \author Yanis
 * \date   2024
 *********************************************************************/

#ifndef MISSION_H
#define MISSION_H
#include <iostream>
#include <string>


 /*! \class MISSION
    * \brief classe representant une mission. 2 attributs prives
    * 
    * Cette classe a une finalite pedagogique : 
    * \li : Rappel du C++
    * \li : commentaire avec Doxygen
    * \li : git, github
    */
class Mission
{

    private:
        /**
         * Membre prive nomEntreprise : contient le nombre de personne
         */
        std::string nbPersonne; 
        /**
         * Membre prive descriptifMission : contient le descriptif de la mission
         */
        std::string descriptifMission; 
        /**
         * Membre prive nbPersonne : contient le nombre de personnes
         */

        std::string nbPersonne;
        


    protected : 



    public:
        /*Classe sous forme canonique*/
        Entreprise();   
        ~Entreprise();  
        Entreprise(const Entreprise& entre); 
        Entreprise &operator = (const Entreprise& entre); 

        Entreprise(std::string nom, std::string ville); 
        std::string getNomEntreprise();
        void setEntreprise(std::string nouveauNom);
        std::string getVilleEntreprise();
        void setVilleEntreprise(std::string nouvelleVille);
       
};

#endif