#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <iostream>
#include <memory>

using std::cout; using std::cin;
using std::unique_ptr; using std::make_unique;
int main() 
{
	unique_ptr<TicTacToe> game;
	std::string first_player;
	char user_choice;


	do{

		auto game_type = 0;

		cout<<"Please enter either 3 or 4 to start: ";
		cin>>game_type;

	

		cout<<"Enter first player: ";
		cin>>first_player;

		game->start_game(first_player);

		int position;

		while(!game->game_over())
		{

			cout<<"Enter a position: ";
			cin>>position;
			game->mark_board(position);
			game->display_board();

			
			
		}
		
		cout<<"The winner is "<< game->get_winner() << "\n";
		
		cout<<"To play again, enter y or Y. To exit, enter n or N: ";
		cin>>user_choice; 


	}while(user_choice == 'y' || user_choice == 'Y');


	return 0;
}