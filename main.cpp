#include <string>
#include <iostream>
#include "DataGenerator.h"

using namespace std;

int main(void) {
  DataGenerator* data = new DataGenerator();

  cout << "Random number (1-100): " << data->number(0, 100) << endl;
  cout << "Random word (5): " << data->word(5) << endl;
  cout << "Random male first name: " << data->name() << endl;
  cout << "Random surname: " << data->surname() << endl;
  cout << "Random year: " << data->year() << endl;
  cout << "Random letter: " << data->letter() << endl;
  cout << "Random sentence: " << data->sentence(10, 4, 8) << endl;

  return 0;
}
