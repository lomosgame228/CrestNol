#include "algoritm.h"
#include <algorithm>

bool check(Board &object,std::string &crest, std::string &nolik,std::string &ifwin)
{

  // check horizontal
  for (int i = 0; i < object.row; i++) {
    int counter = 0;
    for (int j = 0; j < object.col; j++) {
      if (object.board[i][j] == crest) {
        counter++;
      }
      if (counter == object.row) {
        std::cout << "crest win\n";
        for (int k = 0; k < object.col; k++) {
          object.board[i][k] = ifwin;
        }
        return true;
      }
    }
    counter = 0; // for new counter
    for (int u = 0; u < object.col; u++) {
      if (object.board[i][u] == nolik) {
        counter++;
      }
      if (counter == object.row) {
        std::cout << "nol win\n";
        for (int k = 0; k < object.col; k++) {
          object.board[i][k] = ifwin;
        }
        return true;
      }
    }
  }
  // check vertical
  for (int j = 0; j < object.col; j++) {
    int counter = 0;
    for (int i = 0; i < object.row; i++) {
      if (object.board[i][j] == crest) {
        counter++;
      }
      if (counter == object.col) {
        std::cout << "crest win\n";
        for (int k = 0; k < object.row; k++) {
          object.board[k][j] = ifwin;
        }
        return true;
      }
    }
    counter = 0;
    for (int u = 0; u < object.row; u++) {
      if (object.board[u][j] == nolik) {
        counter++;
      }
      if (counter == object.col) {
        std::cout << "nol win\n";
        for (int k = 0; k < object.row; k++) {
          object.board[k][j] = ifwin;
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
      if (object.board[i][j] == crest) {
        counter++;
      }
    }
  }
  if (counter == object.row) {
    for (int i = 0; i < object.row; i++) {
      for (int j = i; j < i + 1; j++) {
        object.board[i][j] = ifwin;
      }
    }
    std::cout << "crest win\n";
    return true;
  } else {
    counter = 0;
  }

  for (int i = 0; i < object.row; i++) {
    for (int j = i; j < i + 1; j++) {
      if (object.board[i][j] == nolik) {
        counter++;
      }
    }
  }
  if (counter == object.row) {
    for (int i = 0; i < object.row; i++) {
      for (int j = i; j < i + 1; j++) {
        object.board[i][j] = ifwin;
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
      if (object.board[i][j] == crest) {
        counter++;
      }
    }
  }

  if (counter == object.row) {
    for (int i = 0; i < object.row; i++) {
      for (int j = object.row - (i + 1); j < object.row - i; j++) {
        object.board[i][j] = ifwin;
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
      if (object.board[i][j] == nolik) {
        counter++;
      }
    }
  }

  if (counter == object.row) {
    for (int i = 0; i < object.row; i++) {
      for (int j = object.row - (i + 1); j < object.row - i; j++) {
        object.board[i][j] = ifwin;
      }
    }
    std::cout << "nol win\n";
    return true;

  } else {
    counter = 0;
  }

  return 0;
}
