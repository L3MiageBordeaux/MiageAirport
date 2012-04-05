#ifndef _AIRCRAFT_HPP_
#define _AIRCRAFT_HPP_

#include <string>
#include <iostream>
#include <vector>

#include "Flight.hpp"
#include "AirCrew.hpp"

using namespace std;

class Aircraft{

protected:
  vector<Flight> flight_list;
  vector<AirCrew> crew_list;
  int num_immat;
  string name;
  string brand;
  string company;

  // *** Prevoir revisions de l'avion ***

public:
  Aircraft(int _num_immat, string _name, string _brand, string _company);
  ~Aircraft(){cout << "Fire on the reactors" << endl;}
  void display();
  
  // *** setters flight_list & crew_list ***

};

#endif
