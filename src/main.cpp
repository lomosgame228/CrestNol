#include "algoritm.h"

void help()
{
  std::cout << "help";
}

int main(int number_argument, char *argument[])
{
  int col;
  int row;
  if (argument[1] != 0) {
    if (strcmp(argument[1], "--help") == 0 or strcmp(argument[1], "-help") == 0
        or strcmp(argument[1], "-h") == 0 or strcmp(argument[1], "--h") == 0) {
      help();
    } else if (strcmp(argument[1], "1") == 0) {
      std::cout << "choose board row: ";
      std::cin >> row;
      std::cout << "choose board col: ";
      std::cin >> col;
      algoritm(1, "x",row,col);
    } else if (strcmp(argument[1], "2") == 0) {
      std::cout << "choose board row: ";
      std::cin >> row;
      std::cout << "choose board col: ";
      std::cin >> col;
      algoritm(1, "o",row,col);
    }
  }
}
