#ifndef CHESSRULES_HPP
#define CHESSRULES_HPP
#include<string>
#include<vector>
#include<unordered_map>

class ChessRules
{
private:


public:
    ChessRules();
    bool in_check(bool is_black, std::unordered_map<int, std::vector<std::string>> board_state);
    bool check_mate(bool is_black, std::unordered_map<int, std::vector<std::string>> board_state);
    bool check_stalemate(bool is_black, std::unordered_map<int, std::vector<std::string>> board_state);
    bool piece_movement(std::string piece, int cur_coords, int dest_coords);
    bool check_en_passant(bool is_black, int cur_coords, int dest_coords);
    bool check_promotion(bool is_black, std::unordered_map<int, std::vector<std::string>> board_state);
    bool check_castling(bool is_black, std::string side, std::unordered_map<int, std::vector<std::string>> board_state);
    bool block_check(bool is_black, std::string side, std::unordered_map<int, std::vector<std::string>> board_state);
};

#endif //CHESS_RULES_HPP