#pragma once
#include <iostream>
#include <string.h>
#include <string>
class Board;
int algoritm(int why_player, std::string player, int boardrow, int boardcol);
bool check(Board &object);
class Board
{
  std::string **board;
  int col;
  int row;

  friend bool check(Board &object);

  public:
  Board(int row, int col);
  bool checkarr(int row, int col)
  {
    if (board[row][col] == "x" or board[row][col] == "o") {
      return false;
    } else {
      return true;
    }
  }
  ~Board()
  {
    for (int i = 0; i < col; i++) {
      delete[] board[i];
    }
    delete[] board;
  }
  void printarray()
  {
    for (int i = 0; i < row; i++) {
      for (int j = 0; j < col; j++) {
        std::cout << board[i][j] << " ";
      }
      std::cout << std::endl;
    }
  }
  void fillarr(int index, int index1, std::string charorstring)
  {
    this->board[index][index1] = charorstring;
  }
};
