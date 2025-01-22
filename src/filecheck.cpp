#include "algoritm.h"
#include <fstream>

std::string filecheck(std::string *c, std::string *n, std::string *ifwin,std::string *notcrestornol )
{
  std::ifstream config_file("config.txt", std::ios::in);
  if (!config_file.is_open()) {
    std::cout << "config file is not open\ntouch 'config.txt' to continue or im create file(file "
                 "already created)\n";
    std::ofstream conf("config.txt", std::ios::out);
    conf << "crest: x\nnolik: o\nifwin: G\nnotcrestandnol: -";
    return "";
  }
  std::string ch;
  int i = 0;
  while (!config_file.eof()) {
    config_file >> ch;
    if (i == 1) {
      *c = ch;
    }
    if (i == 3) {
      *n = ch;
    }
    if (i == 5) {
      *ifwin = ch;
    }
    if (i == 7){
      *notcrestornol = ch;
    }
    i++;
  }
  return "success";
}
