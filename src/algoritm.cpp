#include "algoritm.h"
#include <cstdlib>

Board::Board(int row, int col)
{
  std::string notcrestornol;
  std::string a,b,c,d;
  filecheck(&a,&b,&c,&notcrestornol);
  this->col = col;
  this->row = row;
  board = new std::string *[row];
  for (int i = 0; i < col; i++) {
    board[i] = new std::string[col];
  }
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      board[i][j] = notcrestornol  ;
    }
  }
}

int algoritm(int why_player, std::string player, int boardrow, int boardcol, std::string &crest, std::string &nolik,std::string &ifwin)
{
  int counter = 0;
  Board b(boardrow, boardcol);
  while (check(b,crest,nolik,ifwin) == false and counter != boardcol * boardrow) {
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
      if (player == crest) {
        player = nolik;
        counter++;
        why_player = 2;
      } else if (player == nolik) {
        player = crest;
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
