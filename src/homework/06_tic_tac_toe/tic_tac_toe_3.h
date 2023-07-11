//h
#include<iostream>
#include<memory>
#include<string>
#include<vector>
#include "tic_tac_toe.h"
#ifndef TIC_TAC_TOE_3_H
#define TIC_TAC_TOE_3_H

class TicTacToe3 : TicTacToe
{
public:
    TicTacToe3(): TicTacToe(3){};
private:
    bool check_column_win() override;
    bool check_row_win() override;
    bool check_diagonal_win() override;
};
#endif