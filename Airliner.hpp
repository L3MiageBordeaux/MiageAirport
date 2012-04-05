#ifndef _AIRLINER_HPP_
#define _AIRLINER_HPP_

#include <string>
#include <iostream>
#include <vector>

#include "Aircraft.hpp"

using namespace std;

class Airliner : public Aircraft {

protected:
  vector<Flight> flight_list;
  vector<AirCrew> crew_list;
  int num_immat;
  int nb_pass;
  string name;
  string brand;
  string company;

public:
  Airliner(int _num_immat, int _nb_pass, string _name, string _brand, string _company);
  ~Airliner(){cout << "Kamiiiikaaazzzzz!!!" << endl;}
  void display();

};

#endif
