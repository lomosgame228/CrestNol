#include "algoritm.h"
#include <fstream>

void help()
{
  std::cout << "help";
}

int main(int number_argument, char *argument[])
{
  int col;
  int row;
  std::string crestik = "", nolik = "", ifwin = "",notcrestornol = "";
  if (argument[1] != 0 and filecheck(&crestik, &nolik, &ifwin,&notcrestornol) != "") {
    if (strcmp(argument[1], "--help") == 0 or strcmp(argument[1], "-help") == 0
        or strcmp(argument[1], "-h") == 0 or strcmp(argument[1], "--h") == 0) {
      help();
    } else if (strcmp(argument[1], "1") == 0) {
      std::cout << "choose board row: ";
      std::cin >> row;
      std::cout << "choose board col: ";
      std::cin >> col;
      if (row != col) {
        std::cout << "this mode so buggy... use the same digits.\n";
      }
      algoritm(1, crestik, row, col, crestik, nolik, ifwin);
    } else if (strcmp(argument[1], "2") == 0) {
      std::cout << "choose board row: ";
      std::cin >> row;
      std::cout << "choose board col: ";
      std::cin >> col;
      if (row != col) {
        std::cout << "this mode so buggy... use the same digits.\n";
      }
      algoritm(1, nolik, row, col, crestik, nolik, ifwin);
    }
  }
}
