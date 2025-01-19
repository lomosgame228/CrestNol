#include "algoritm.h"

bool check(Board &object)
{
  // check horizontal
  for (int i = 0; i < object.row; i++) {
    int counter = 0;
    for (int j = 0; j < object.col; j++) {
      if (object.board[i][j] == "x") {
        counter++;
      }
      if (counter == object.row) {
        std::cout << "crest win\n";
        for (int k = 0; k < object.col; k++) {
          object.board[i][k] = "G";
        }
        return true;
      }
    }
    counter = 0; // for new counter
    for (int u = 0; u < object.col; u++) {
      if (object.board[i][u] == "o") {
        counter++;
      }
      if (counter == object.row) {
        std::cout << "nol win\n";
        for (int k = 0; k < object.col; k++) {
          object.board[i][k] = "G";
        }
        return true;
      }
    }
  }
  // check vertical
  for (int j = 0; j < object.col; j++) {
    int counter = 0;
    for (int i = 0; i < object.row; i++) {
      if (object.board[i][j] == "x") {
        counter++;
      }
      if (counter == object.col) {
        std::cout << "crest win\n";
        for (int k = 0; k < object.row; k++) {
          object.board[k][j] = "G";
        }
        return true;
      }
    }
    counter = 0;
    for (int u = 0; u < object.row; u++) {
      if (object.board[u][j] == "o") {
        counter++;
      }
      if (counter == object.col) {
        std::cout << "nol win\n";
        for (int k = 0; k < object.row; k++) {
          object.board[k][j] = "G";
        }
        return true;
      }
    }
  }
  return 0;
}
