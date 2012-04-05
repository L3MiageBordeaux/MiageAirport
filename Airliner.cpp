#include "Airliner.hpp"

using namespace std;

Airliner::Airliner(int _num_immat, int _nb_pass, string _name, string _brand, string _company):Aircraft(_num_immat, _name, _brand, _company)
{
  nb_pass = _nb_pass;
}

void Airliner::display()
{
  Aircraft::display();
  cout << "Nombre de passagers " << nb_pass << endl;
}









