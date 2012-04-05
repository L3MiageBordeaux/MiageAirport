#ifndef _CARGO_HPP_
#define _CARGO_HPP_

#include <string>
#include <iostream>
#include <vector>

#include "Aircraft.hpp"

class Cargo : public Aircraft {

protected:
  vector<Flight> flight_list;
  vector<AirCrew> crew_list;
  int num_immat;
  int wheight;
  int volume;
  string name;
  string brand;
  string company;

public:
  Cargo(int _num_immat, int _wheight, int _volume, string _name, string _brand, string _company);
  ~Cargo(){cout << "Craaaaaaaaaaaaasssssshhhh!!!" << endl;};
  void display();

};

#endif
