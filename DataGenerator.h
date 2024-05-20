
#ifndef DATA_GENERATOR_H
#define DATA_GENERATOR_H

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;
const int MALE_FIRST_NAMES_LENGTH = 26;
const int SURNAMES_LENGTH = 10;

class DataGenerator {

  public:
    DataGenerator();

    string name();
    string surname();
    int year();
    string letter();
    string sentence(int words, int minWordLength, int maxWordLength);
    int number(int min, int max);
    string word(int length);

  private:
    const string LETTERS = "abcdefghijklmnopqrstuvwxyz";
    const string DIGITS = "0123456789";
    const string MALE_FIRST_NAMES[MALE_FIRST_NAMES_LENGTH] = {
      "Adam",
      "Bob",
      "Cyril",
      "David",
      "Emil",
      "Frantisek",
      "George",
      "Hynek",
      "Ian",
      "Jacob",
      "Karel",
      "Lukas",
      "Marek",
      "Nathan",
      "Ondrej",
      "Pavel",
      "Quido",
      "Radek",
      "Stepan",
      "Tomas",
      "Uwe",
      "Viktor",
      "William",
      "Xavier",
      "Yusuf",
      "Zachary"
    };
    const string SURNAMES[SURNAMES_LENGTH] = {
      "Smith",
      "Johnson",
      "Williams",
      "Brown",
      "Jones",
      "Miller",
      "Davis",
      "Garcia",
      "Rodriguez",
      "Wilson"
    };
};

#endif 

