#include "ChessRules.hpp"



bool ChessRules::block_check(
    bool is_black,
    std::string side,
    std::unordered_map<int, std::vector<std::string>> board_state) {

  return false;
}


bool ChessRules::check_castling(
    bool is_black,
    std::string side,
    std::unordered_map<int, std::vector<std::string>> board_state) {

  return false;
}

bool ChessRules::check_en_passant(bool is_black, int cur_coords,
                                  int dest_coords) {

  return false;
}

bool ChessRules::check_mate(
    bool is_black,
    std::unordered_map<int, std::vector<std::string>> board_state) {

  return false;
}

bool ChessRules::check_promotion(
    bool is_black,
    std::unordered_map<int, std::vector<std::string>> board_state) {

  return false;
}

bool ChessRules::check_stalemate(
    bool is_black,
    std::unordered_map<int, std::vector<std::string>> board_state) {

  return false;
}

bool ChessRules::in_check(
    bool is_black,
    std::unordered_map<int, std::vector<std::string>> board_state) {

  return false;
}

bool ChessRules::piece_movement(std::string piece, int cur_coords,
                                int dest_coords) {

  int x1 = cur_coords / 10 % 10;
  int y1 = cur_coords % 10;

  int x2 = dest_coords / 10 % 10;
  int y2 = dest_coords % 10;

  int x_mov;
  int y_mov;
  // king movement definitions
  if (piece == "k") {
    if (std::abs(x1 - x2) <= 1 && std::abs(y1 - y2) <= 1) {
      return true;
    }
  // queen movement definitions
  } else if (piece == "q") {
    if (x1 == x2 || y1 == y2) {
      return true;
    } else if (std::abs(x1 - x2) == std::abs(y1 - y2)) {
      return true;
    }
  // bishop movement definitions
  } else if (piece == "b") {
    if (std::abs(x1 - x2) == std::abs(y1 - y2)) {
      return true;
    }
  // knight movement definitions
  }  else if (piece == "n") {
    if ((std::abs(x1 - x2) == 1 && std::abs(y1 - y2) == 2) ||
        (std::abs(x1 - x2) == 2 && std::abs(y1 - y2) == 1)) {
      return true;
        }
  // rook movement definitions
  } else if (piece == "r") {
    if (x1 == x2 || y1 == y2) {
      return true;
    }
  }

  return false;
}
