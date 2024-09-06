/*****************************************************************//**
 * \file   tmpStageDescription
 * \brief  Main
 *
 * \author Yanis
 * \date   2024
 *********************************************************************/

#include <iostream>
#include "Entreprise.h"
#include "Mission.h"

using namespace std;

int main() {
    Entreprise e1;
    Entreprise e2("Entreprise", "ville");

    cout << e1.getNomEntreprise() << ", " << e1.getVilleEntreprise() << endl;
    cout << e2.getNomEntreprise() << ", " << e2.getVilleEntreprise() << endl;

    e1.setEntreprise("Entreprise .");
    e1.setVilleEntreprise("Ville");
    cout << e1.getNomEntreprise() << ", " << e1.getVilleEntreprise() << endl;

    Mission m1;
    Mission m2("Mission", 6);

    cout << m1.getNomMission() << ", " << m1.getDureeMission() << " mois" << endl;
    cout << m2.getNomMission() << ", " << m2.getDureeMission() << " mois" << endl;

    m1.setNomMission("Mission");
    m1.setDureeMission(3);
    cout << m1.getNomMission() << ", " << m1.getDureeMission() << " mois" << endl;

    return 0;
}
