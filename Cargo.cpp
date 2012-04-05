#include "Cargo.hpp"

using namespace std;

Cargo::Cargo(int _num_immat, int _wheight, int _volume, string _name, string _brand, string _company):Aircraft(_num_immat, _name, _brand, _company)
	     {
	       wheight = _wheight;
	       volume = _volume;
	     }

void Cargo::display()
{
  Aircraft::display();
  cout << "Poids Max " << wheight << endl;
  cout << "Volume Max " << volume << endl;
}
