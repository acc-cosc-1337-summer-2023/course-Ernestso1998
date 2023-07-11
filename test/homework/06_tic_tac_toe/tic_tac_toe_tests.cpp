#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"


using std::unique_ptr; using std::make_unique;


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test game over if 9 slots are selected.")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	while(!game->game_over())
	{
		game->start_game("X");
		REQUIRE(game->get_player() == "X");
		game->mark_board(1);
		REQUIRE(game->game_over() == false);
		game->mark_board(2);
		REQUIRE(game->game_over() == false);
		game->mark_board(3);
		REQUIRE(game->game_over() == false);
		game->mark_board(4);
		REQUIRE(game->game_over() == false);
		game->mark_board(5);
		REQUIRE(game->game_over() == false);
		game->mark_board(7);
		REQUIRE(game->game_over() == false);
		game->mark_board(6);
		REQUIRE(game->game_over() == false);
		game->mark_board(9);
		REQUIRE(game->game_over() == false);
		game->mark_board(8);
	}

	REQUIRE(game->get_winner() == "C");
}

TEST_CASE("Test win by first column")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

	
	while(!game->game_over()){
		game->start_game("X");
		REQUIRE(game->get_player() == "X");
		game->mark_board(1);
		REQUIRE(game->game_over() == false);
		game->mark_board(5);
		REQUIRE(game->game_over() == false);		
		game->mark_board(4);
		REQUIRE(game->game_over() == false);
		game->mark_board(6);
		REQUIRE(game->game_over() == false);
		game->mark_board(7);
			
	}
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by second column")

{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();


		while(!game->game_over()){
		game->start_game("X");
		REQUIRE(game->get_player() == "X");
		game->mark_board(2);
		REQUIRE(game->game_over() == false);
		game->mark_board(4);
		REQUIRE(game->game_over() == false);
		game->mark_board(5);
		REQUIRE(game->game_over() == false);
		game->mark_board(6);
		REQUIRE(game->game_over() == false);
		game->mark_board(8);
			
	}
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by third column ")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();


		while(!game->game_over()){
		game->start_game("X");
		REQUIRE(game->get_player() == "X");
		game->mark_board(3);
		REQUIRE(game->game_over() == false);
		game->mark_board(5);
		REQUIRE(game->game_over() == false);
		game->mark_board(6);
		REQUIRE(game->game_over() == false);
		game->mark_board(8);
		REQUIRE(game->game_over() == false);
		game->mark_board(9);
			
	}
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by first row ")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	

	while(!game->game_over()){
		game->start_game("X");
		REQUIRE(game->get_player() == "X");
		game->mark_board(1);
		REQUIRE(game->game_over() == false);
		game->mark_board(5);
		REQUIRE(game->game_over() == false);
		game->mark_board(2);
		REQUIRE(game->game_over() == false);
		game->mark_board(6);
		REQUIRE(game->game_over() == false);
		game->mark_board(3);
			
	}
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by second row ")

{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	
		while(!game->game_over()){
		game->start_game("X");
		REQUIRE(game->get_player() == "X");
		game->mark_board(4);
		REQUIRE(game->game_over() == false);
		game->mark_board(8);
		REQUIRE(game->game_over() == false);
		game->mark_board(5);
		REQUIRE(game->game_over() == false);
		game->mark_board(7);
		REQUIRE(game->game_over() == false);
		game->mark_board(6);
			
	}
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by third row ")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	

		while(!game->game_over()){
		game->start_game("X");
		REQUIRE(game->get_player() == "X");
		game->mark_board(7);
		REQUIRE(game->game_over() == false);
		game->mark_board(5);
		REQUIRE(game->game_over() == false);
		game->mark_board(8);
		REQUIRE(game->game_over() == false);
		game->mark_board(6);
		REQUIRE(game->game_over() == false);
		game->mark_board(9);
			
	}
	REQUIRE(game->game_over() == true);

}

TEST_CASE("Test win diagonally from top left ")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	
		while(!game->game_over()){
		game->start_game("X");
		REQUIRE(game->get_player() == "X");
		game->mark_board(1);
		REQUIRE(game->game_over() == false);
		game->mark_board(4);
		REQUIRE(game->game_over() == false);
		game->mark_board(5);
		REQUIRE(game->game_over() == false);
		game->mark_board(6);
		REQUIRE(game->game_over() == false);
		game->mark_board(9);
			
	}
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win diagonally from bottom left ")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();
	

		while(!game->game_over()){
		game->start_game("X");
		REQUIRE(game->get_player() == "X");
		game->mark_board(7);
		REQUIRE(game->game_over() == false);
		game->mark_board(4);
		REQUIRE(game->game_over() == false);
		game->mark_board(5);
		REQUIRE(game->game_over() == false);
		game->mark_board(6);
		REQUIRE(game->game_over() == false);
		game->mark_board(3);
			
	}
	REQUIRE(game->game_over() == true);

}

TEST_CASE("Test first player set to X" )
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

	game->start_game("X");
	REQUIRE( game->get_player() == "X");
	
	

}

TEST_CASE("Test first player set to O" )
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe3>();

	game->start_game("O");
	REQUIRE( game->get_player() == "O");
	
	

}




TEST_CASE("Test game over if 16 slots are selected. TicTacToe4")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();
	while(!game->game_over())
	{
		game->start_game("X");
		REQUIRE(game->get_player() == "X");		
		game->mark_board(1);
		REQUIRE(game->game_over() == false);
		game->mark_board(2);
		REQUIRE(game->game_over() == false);
		game->mark_board(3);
		REQUIRE(game->game_over() == false);
		game->mark_board(4);
		REQUIRE(game->game_over() == false);
		game->mark_board(5);
		REQUIRE(game->game_over() == false);
		game->mark_board(7);
		REQUIRE(game->game_over() == false);
		game->mark_board(6);
		REQUIRE(game->game_over() == false);
		game->mark_board(9);
		REQUIRE(game->game_over() == false);
		game->mark_board(10);
		REQUIRE(game->game_over() == false);
		game->mark_board(11);
		REQUIRE(game->game_over() == false);
		game->mark_board(12);
		REQUIRE(game->game_over() == false);
		game->mark_board(15);
		REQUIRE(game->game_over() == false);
		game->mark_board(16);
		REQUIRE(game->game_over() == false);
		game->mark_board(13);
		REQUIRE(game->game_over() == false);
		game->mark_board(14);	
		REQUIRE(game->game_over() == false);
		game->mark_board(8);		
	
	}

	REQUIRE(game->get_winner() == "C");
}

TEST_CASE("Test win TicTacToe4")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();


		while(!game->game_over()){
		game->start_game("X");
		REQUIRE(game->get_player() == "X");
		game->mark_board(0);
		REQUIRE(game->game_over() == false);
		game->mark_board(3);
		REQUIRE(game->game_over() == false);
		game->mark_board(4);
		REQUIRE(game->game_over() == false);
		game->mark_board(6);
		REQUIRE(game->game_over() == false);
		game->mark_board(8);
		REQUIRE(game->game_over() == false);
		game->mark_board(13);
		REQUIRE(game->game_over() == false);
		game->mark_board(12);
			
	}
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by second column TicTacToe4")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();


		while(!game->game_over()){
		game->start_game("X");
		REQUIRE(game->get_player() == "X");				
		game->mark_board(1);
		REQUIRE(game->game_over() == false);
		game->mark_board(4);
		REQUIRE(game->game_over() == false);
		game->mark_board(5);
		REQUIRE(game->game_over() == false);
		game->mark_board(6);
		REQUIRE(game->game_over() == false);
		game->mark_board(9);
		REQUIRE(game->game_over() == false);
		game->mark_board(8);
		REQUIRE(game->game_over() == false);
		game->mark_board(13);
			
	}
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by third column TicTacToe4 ")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();


		while(!game->game_over()){
		game->start_game("X");
		REQUIRE(game->get_player() == "X");
		game->mark_board(2);
		REQUIRE(game->game_over() == false);
		game->mark_board(5);
		REQUIRE(game->game_over() == false);
		game->mark_board(6);
		REQUIRE(game->game_over() == false);
		game->mark_board(4);
		REQUIRE(game->game_over() == false);
		game->mark_board(10);
		REQUIRE(game->game_over() == false);
		game->mark_board(8);
		REQUIRE(game->game_over() == false);
		game->mark_board(14);
	}
	REQUIRE(game->game_over() == true);
}

TEST_CASE("Test win by fourth column TicTacToe4 ")
{
	unique_ptr<TicTacToe> game = make_unique<TicTacToe4>();


		while(!game->game_over()){
		game->start_game("X");
		REQUIRE(game->get_player() == "X");
		game->mark_board(3);
		REQUIRE(game->game_over() == false);
		game->mark_board(5);
		REQUIRE(game->game_over() == false);
		game->mark_board(7);
		REQUIRE(game->game_over() == false);
		game->mark_board(4);
		REQUIRE(game->game_over() == false);
		game->mark_board(11);
		REQUIRE(game->game_over() == false);
		game->mark_board(8);
		REQUIRE(game->game_over() == false);
		game->mark_board(15);
	}
	REQUIRE(game->game_over() == true);
}


