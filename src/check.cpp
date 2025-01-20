#include "algoritm.h"
#include <algorithm>

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

  // check diagonal (working progress...)
  // this | for 0 0
  int counter = 0;
  for (int i = 0; i < object.row; i++) {
    for (int j = i; j < i + 1; j++) {
      if (object.board[i][j] == "x") {
        counter++;
      }
    }
  }
  if (counter == object.row) {
    for (int i = 0; i < object.row; i++) {
      for (int j = i; j < i + 1; j++) {
        object.board[i][j] = "G";
      }
    }
    std::cout << "crest win\n";
    return true;
  } else {
    counter = 0;
  }

  for (int i = 0; i < object.row; i++) {
    for (int j = i; j < i + 1; j++) {
      if (object.board[i][j] == "o") {
        counter++;
      }
    }
  }
  if (counter == object.row) {
    for (int i = 0; i < object.row; i++) {
      for (int j = i; j < i + 1; j++) {
        object.board[i][j] = "G";
      }
    }
    std::cout << "nol win\n";
    return true;
  } else {
    counter = 0;
  }
  // this for 0 2
  counter = 0;
  for (int i = 0; i < object.row; i++) {
    for (int j = object.row - (i + 1); j < object.row - i; j++) {
      if (object.board[i][j] == "x") {
        counter++;
        std::cout << "counter : " << counter;
      }
    }
  }

  if (counter == object.row) {
    for (int i = 0; i < object.row; i++) {
      for (int j = object.row - (i + 1); j < object.row - i; j++) {
        object.board[i][j] = "G";
        std::cout << "g suc";
      }
    }
    std::cout << "crest win\n";
    return true;

  } else {
    counter = 0;
  }

  counter = 0;
  for (int i = 0; i < object.row; i++) {
    for (int j = object.row - (i + 1); j < object.row - i; j++) {
      if (object.board[i][j] == "o") {
        counter++;
      }
    }
  }

  if (counter == object.row) {
    for (int i = 0; i < object.row; i++) {
      for (int j = object.row - (i + 1); j < object.row - i; j++) {
        object.board[i][j] = "G";
      }
    }
    std::cout << "nol win\n";
    return true;

  } else {
    counter = 0;
  }

  return 0;
}
