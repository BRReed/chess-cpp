#include "ChessRules.hpp"



ChessRules::ChessRules()
{

}

bool ChessRules::block_check(bool is_black, std::string side, std::unordered_map<int, 
                             std::vector<std::string>> board_state)
{
    return false;
}


bool ChessRules::check_castling(bool is_black, std::string side, std::unordered_map<int, 
                                std::vector<std::string>> board_state)
{
    return false;
}

bool ChessRules::check_en_passant(bool is_black, int cur_coords, int dest_coords)
{
    return false;
}

bool ChessRules::check_mate(bool is_black, std::unordered_map<int, std::vector<std::string>> board_state)
{
    return false;
}

bool ChessRules::check_promotion(bool is_black, std::unordered_map<int, std::vector<std::string>> board_state)
{
    return false;
}

bool ChessRules::check_stalemate(bool is_black, std::unordered_map<int, std::vector<std::string>> board_state)
{
    return false;
}

bool ChessRules::in_check(bool is_black, std::unordered_map<int, std::vector<std::string>> board_state)
{
    return false;
}

bool ChessRules::piece_movement(std::string piece, int cur_coords, int dest_coords)
{
    return false;
}