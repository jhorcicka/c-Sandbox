
#include "DataGenerator.h"

using namespace std;

DataGenerator::DataGenerator() {
  srand(static_cast<unsigned int>(time(nullptr)));
}

int DataGenerator::number(int min, int max) {
  if (min < 0) {
    min = 0;
  }

  if (max < min) {
    max = min;
  }

  if (max == 0) {
    max = 1;
  }

  return (rand() + min + 1) % max + 1;
}

string DataGenerator::word(int length) {
  string text = "";

  for (int i = 0; i < length; i++) {
    int index = this->number(0, this->LETTERS.length());
    char letter = this->LETTERS[index];
    text = text + letter;
  }

  return text;
}

string DataGenerator::name() {
    int index = this->number(0, MALE_FIRST_NAMES_LENGTH - 1);
    return this->MALE_FIRST_NAMES[index];
}

string DataGenerator::surname() {
    int index = this->number(0, SURNAMES_LENGTH - 1);
    return this->SURNAMES[index];
}

int DataGenerator::year() {
    return this->number(0, 2024);
}

string DataGenerator::letter() {
    return this->word(1);
}

string DataGenerator::sentence(int words, int minWordLength, int maxWordLength) {
  string text = "";

  for (int i = 0; i < words; i++) {
    int length = this->number(minWordLength, maxWordLength);
    string word = this->word(length);
    text = text + " " + word;
  }

  text[1] = toupper(text[1]);
  return text.substr(1) + ". ";
}
