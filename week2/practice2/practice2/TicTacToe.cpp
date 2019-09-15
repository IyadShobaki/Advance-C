//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//
//class TicTacToe {
//public:
//	void playGame();
//private:
//	int board[3][3];
//	char testBoard[3][3] = { {'1','2','3'},{'4','5','6'},{'7','8','9'} };
//	void clearBoard();
//	void displayBoard();
//	void displayTestBoard();
//	int getChoice();
//	bool placeMarker(int choice, int currentPlayer);
//	bool winGame(int currentPlayer);
//
//};
//int main() {
//	char ans;
//	TicTacToe game;
//	
//	do {
//		game.playGame();
//		cout << "would you like to play again? Y/N : ";
//		cin >> ans;
//		ans = toupper(ans);
//	} while (ans == 'Y');
//	
//
//	system("pause");
//	return 0;
//}
//void TicTacToe::playGame() {
//	int player1 = 1;
//	int player2 = 2;
//
//	int currentPlayer = player1;
//
//	int choice;
//	bool isDone = false;
//	displayTestBoard();
//	clearBoard();
//	int turn = 0;
//	while (isDone == false) {
//		
//		displayBoard();
//		cout << "Player " << currentPlayer << " turn:\n";
//		choice = getChoice();
//		if (placeMarker(choice, currentPlayer) == false) {
//			cout << "That spot is occupied!\n";
//			continue;
//		}
//		else {
//			system("cls");
//			turn++;
//			if (winGame(currentPlayer) == true) {
//				cout << "Game is over! Player " << currentPlayer << " has won!\n";
//				displayBoard();
//				isDone = true;
//			}
//			else if (turn == 9) {
//				cout << "Its a tie game!\n";
//				displayBoard();
//				isDone = true;
//			}
//			if (currentPlayer == player1) {
//				currentPlayer = player2;
//				
//			}
//			else {
//				currentPlayer = player1;
//				
//			}
//		}
//		
//
//	}
//	
//}
//void TicTacToe::clearBoard() {
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			board[i][j] = 0;
//		}
//	}
//}
//void TicTacToe::displayBoard() {
//	for (int i = 0; i < 3; i++) {
//		cout << "--------------\n";
//		cout << left << setw(2) << "";
//		cout << board[i][0] << " | " << board[i][1] << " | " << board[i][2] << " | " <<  endl;
//		
//	}
//	cout << "--------------\n";
//	cout << endl;
//}
//void TicTacToe::displayTestBoard()
//{
//	
//	cout << "Tic Tac Toe Game" << endl;
//	cout << endl;
//	
//	for (int i = 0; i < 3; i++) {
//		
//		cout << "--------------\n";
//		for (int j = 0; j < 3; j++)
//		{
//			cout << left << setw(1) << "";
//			cout << testBoard[i][j] << " | ";
//
//
//		}
//		cout << endl;
//
//	}
//	cout << "--------------\n";
//	cout << endl;
//}
//
//int TicTacToe::getChoice() {
//	bool isNotAvailable = true;
//	int x;
//	while (isNotAvailable == true) {
//		cout << "Enter your cell choice between (1-9): ";
//		cin >> x;
//		if (x < 1 || x > 9) {
//			cout << "Invalid input!\n";
//		}
//		else {
//			isNotAvailable = false;
//		}
//	}
//	return x;
//}
//bool TicTacToe::placeMarker(int choice, int currentPlayer) {
//	switch (choice) {
//	case 1:
//		if (board[0][0] != 0) {
//			return false;
//		}
//		else {
//			board[0][0] = currentPlayer;
//			return true;
//		}
//		
//		break;
//	case 2:
//		if (board[0][1] != 0) {
//			return false;
//		}
//		else {
//			board[0][1] = currentPlayer;
//			return true;
//		}
//		
//		break;
//	case 3:
//		if (board[0][2] != 0) {
//			return false;
//		}
//		else {
//			board[0][2] = currentPlayer;
//			return true;
//		}
//		
//		break;
//	case 4:
//		if (board[1][0] != 0) {
//			return false;
//		}
//		else {
//			board[1][0] = currentPlayer;
//			return true;
//		}
//		
//		break;
//	case 5:
//		if (board[1][1] != 0) {
//			return false;
//		}
//		else {
//			board[1][1] = currentPlayer;
//			return true;
//		}
//	
//		break;
//	case 6:
//		if (board[1][2] != 0) {
//			return false;
//		}
//		else {
//			board[1][2] = currentPlayer;
//			return true;
//		}
//		
//		break;
//	case 7:
//		if (board[2][0] != 0) {
//			return false;
//		}
//		else {
//			board[2][0] = currentPlayer;
//			return true;
//		}
//	
//		break;
//	case 8:
//		if (board[2][1] != 0) {
//			return false;
//		}
//		else {
//			board[2][1] = currentPlayer;
//			return true;
//		}
//		
//		break;
//	case 9:
//		if (board[2][2] != 0) {
//			return false;
//		}
//		else {
//			board[2][2] = currentPlayer;
//			return true;
//		}
//		break;
//	
//	}
//}
//bool TicTacToe::winGame(int currentPlayer) {
//	//Check the rows
//	for (int i = 0; i < 3; i++) {
//		if ((board[i][0] == currentPlayer) && (board[i][0] == board[i][1]) && (board[i][1] == board[i][2])) {
//			return true;
//		}
//	}
//	for (int i = 0; i < 3; i++) {
//		if ((board[0][i] == currentPlayer) && (board[0][i] == board[1][i]) && (board[1][i] == board[2][i])) {
//			return true;
//		}
//	}
//	//Check top left diagnol
//	if ((board[0][0] == currentPlayer) && (board[0][0] == board[1][1]) && (board[1][1] == board[2][2])) {
//		return true;
//	}
//	//Check top right diagnol
//	if ((board[2][0] == currentPlayer) && (board[2][0] == board[1][1]) && (board[1][1] == board[0][2])) {
//		return true;
//	}
//
//	return false;
//}
