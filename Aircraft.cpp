#include "Aircraft.hpp"

using namespace std;

Aircraft::Aircraft(int _num_immat, string _name, string _brand, string _company)
{
  num_immat = _num_immat;
  name = _name;
  brand = _brand;
  company = _company;
}

void Aircraft::display()
{
  cout << "Immatriculation " << num_immat << endl;
  cout << "Nom " << name << endl;
  cout << "Marque " << brand << endl;
  cout << "Compagnie " << company << endl;

  // *** Ajouter liste des vols et du personnel ***

}
