//h
#include<iostream>
#include<memory>
#include<string>
#include<vector>
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

class TicTacToe
{
public:
    TicTacToe(int size) : pegs(size*size, " "){};
    bool game_over();
    std::string start_game(std::string first_player);
    void mark_board(int position);
    std::string get_player() const {return player;}
    void display_board() const;
    std::string get_winner() {return winner;}
protected:
    std::vector<std::string> pegs;
    virtual bool check_column_win();
    virtual bool check_row_win();
    virtual bool check_diagonal_win();
private:
    std::vector<std::unique_ptr<TicTacToe>> game;
    std::string player;
    void clear_board();
    bool check_board_full();
    void set_next_player();
    void set_winner();
    std::string winner;
};
#endif