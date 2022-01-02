#include <iostream>
using namespace std;

class TicTacToe {
	private:
		char board[3][3];
	public:
		// Constructor will initialize all board's elements to zero
		TicTacToe() {
			for(int i=0; i<3; i++)
				for(int j=0; j<3; j++)
					board[i][j] = 0;
		}

		void printBoard() {
			cout<<"    0\t   1\t  2"<<endl;
			cout<<"        |      |"<<endl;
			cout<<"0   "<<board[0][0]<<"   |  "<<board[0][1]<<"   |  "<<board[0][2]<<endl;
			cout<<"   _____|______|______"<<endl;
			cout<<"        |      |"<<endl;
			cout<<"1   "<<board[1][0]<<"   |  "<<board[1][1]<<"   |  "<<board[1][2]<<endl;
			cout<<"   _____|______|______"<<endl;
			cout<<"        |      |"<<endl;
			cout<<"2   "<<board[2][0]<<"   |  "<<board[2][1]<<"   |  "<<board[2][2]<<endl;
			cout<<"        |      |"<<endl;
		}

		// This function will handle both player's move
		bool makeMove(char player, int x_axis, int y_axis) {
			bool move = false;
			if(validMove(x_axis, y_axis)) {
				if(player == 'X') {
					board[x_axis][y_axis] = player;
					printBoard();
					if(gameStatus()) {
						cout<<"\nCONGRATULATIONS!\nPlayer X Wins!"<<endl;
						return move;
					} else {
						move = true;
						return move;
					}
				} else if(player == 'O') {
					board[x_axis][y_axis] = player;
					printBoard();
					if(gameStatus()) {
						cout<<"\nCONGRATULATIONS!\nPlayer O Wins!"<<endl;
						return move;
					} else {
						move = true;
						return move;
					}
				}
			} else {
				return move;
			}
		}

		// This function will tell us about move validation by determining box status (occupied or not)
		bool validMove(int x_axis, int y_axis) {
			if(board[x_axis][y_axis] == 0) {
				return true;
			} else if(board[x_axis][y_axis] != 0) {
				// Game Draw Logic
				int occupied_count = 0;
				for(int i=0; i<3; i++)
					for(int j=0; j<3; j++)
						if(board[i][j] != 0)
							occupied_count++;
				if(occupied_count == 9) {
					cout<<"Game Draw!"<<endl;
					exit(1);
				} else {
					cout<<"Already Occupied... Please Choose Another Location"<<endl;
				}
				return false;
			}
		}

		// This function will match 3 boxes according to different conditional rendering and determine the winning status of a player
		bool gameStatus() {
			bool win_status = false;
			for(int i=0; i<3; i++) {
				if(board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != 0 || board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != 0) {
					win_status = true;
				}
			}
			if(board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != 0 || board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != 0) {
				win_status = true;
			} else if(board[0][0] == board[1][1] == board[2][2] == 'O' || board[0][2] == board[1][1] == board[2][0] == 'O') {
				win_status = true;
			}
			return win_status;
		}
};

int main() {
	TicTacToe gameObj;
	gameObj.printBoard();

	char player = 'X';
	int x_coordinate, y_coordinate;
	x_coordinate = y_coordinate = 0;

	while(!gameObj.gameStatus()) {
		cout<<endl<<"Player "<<player<<" - Enter Your Move:  ";
		cin>>x_coordinate;
		cin>>y_coordinate;
		cout<<endl;

		if(gameObj.makeMove(player, x_coordinate, y_coordinate)) {
			if(player == 'X') {
				player = 'O';
			} else if(player == 'O') {
				player = 'X';
			}
		}
	}
	return 0;
}
