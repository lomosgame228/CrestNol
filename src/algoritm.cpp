#include "algoritm.h"
#include <cstdlib>

Board::Board(int row, int col)
{
  this->col = col;
  this->row = row;
  board = new std::string *[row];
  for (int i = 0; i < col; i++) {
    board[i] = new std::string[col];
  }
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      board[i][j] = "-";
    }
  }
}

int algoritm(int why_player, std::string player, int boardrow, int boardcol)
{
  int counter = 0;
  Board b(boardrow, boardcol);
  while (check(b) == false and counter != boardcol * boardrow) {
    std::cout << std::endl;
    b.printarray();
    std::cout << "player " << why_player << " number: ";
    int row = 1, col = 1;
    std::cout << "choose your numbers: ";
    std::cin >> row >> col;

    if ((row > 0 and row <= boardrow) and (col > 0 and col <= boardcol)
        and b.checkarr(row - 1, col - 1) == true) {
      system("clear");
      b.fillarr(row - 1, col - 1, player);
      if (player == "x") {
        player = "o";
        counter++;
        why_player = 2;
      } else if (player == "o") {
        player = "x";
        counter++;
        why_player = 1;
      }
    } else {
      system("clear");
      std::cout << "invalid row or col\n";
    }
  }
  b.printarray(); // end of game
  return 0;
}
