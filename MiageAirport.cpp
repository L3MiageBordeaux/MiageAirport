#include <iostream>
#include <stdlib.h>
#include <vector>

#include "Airport.hpp"
#include "AirCrew.hpp"

#include "menu.hpp"


using namespace std;

vector<Airport> Airport::airport_list;

int load(){

  
  //--- Chargement des aircrew
  AirCrew aircrew1("John","Boulet",5);
  AirCrew aircrew2("Ducon","Ok",4);

  // --- Creation et chargement de plusieurs aéroports ---
  Airport a1("MiageAirport","001","France","Bordeaux","4 rue de l'aeroport",33000);
  Airport a2("Roissy","002","France","Paris","1 rue de Roissy",75000);
  Airport a3("TwinTower","003","United States","Manhatan","BenLaden Street",12345);
  a1.add_aircrew(aircrew1);
  a1.add_aircrew(aircrew2);
  vector<Airport>::iterator iterateur;
  Airport::airport_list.push_back(a1);
  Airport::airport_list.push_back(a2);
  Airport::airport_list.push_back(a3);
  iterateur = Airport::airport_list.begin();
  // ---------------------------------------

  // ---- Affichage des aéroports ---
  while( iterateur != Airport::airport_list.end() ) {
    iterateur->display();
    ++iterateur ;
  }
  // --------------------------------  
    
  return EXIT_SUCCESS;
}



int main(int argc, char **argv)
{
  load();


  //main_menu();

  return EXIT_SUCCESS;
}
