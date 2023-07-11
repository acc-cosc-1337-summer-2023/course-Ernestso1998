//cpp
#include "tic_tac_toe.h"
#include "math.h"

using std::cout;

bool TicTacToe::game_over()
{
    if(check_column_win() == true)
    {
        set_winner();
        return true;
    }
    else if(check_row_win() == true)
    {
        set_winner();
        return true;
    }
    else if(check_diagonal_win() == true)
    {
        set_winner();
        return true;
    }    
    
    return check_board_full();
}

std::string TicTacToe::start_game(std::string first_player)
{
    player = first_player;
    
    clear_board();

    return player;
}

void TicTacToe::mark_board(int position)
{
    pegs[position-1] = player;
    set_next_player();
}

void TicTacToe::display_board() const
{
    for(long unsigned int i=0; i < pegs.size(); i+=std::sqrt(pegs.size()))
    {
        cout<<pegs[i]<<"|"<<pegs[i+1]<<"|"<<pegs[i+2];
        
        if(pegs.size() ==  16)
        {
            cout<<"|"<<pegs[i+3]<<"\n";
        }
    }
}

void TicTacToe::clear_board()
{
    for(auto& peg: pegs)
    {
        peg = " ";
    }
}

void TicTacToe::set_next_player()
{
    if(player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }

}

bool TicTacToe::check_board_full()
 {
    for(long unsigned int i=0; i < pegs.size(); i++)
    {
        if(pegs[i] == " ")
        {
            return false;
        }
        else
            winner = "C";
    }
    return true;
 }
 
bool TicTacToe::check_column_win()
{

    return false;
}

bool TicTacToe::check_row_win()
{ 
 

    return false;
}

bool TicTacToe::check_diagonal_win()
{

    return false;
}

void TicTacToe::set_winner()
{
    if(player == "X")
    {
        winner = "O";
    }
    else
        winner = "X ";
}



