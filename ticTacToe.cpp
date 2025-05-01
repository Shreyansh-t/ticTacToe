#include <iostream>
using namespace std;

void drawBoard(){
	cout << " " << "|" << " " << "|" << " " << endl;
	cout << "-" << "-" << "-" << "-" << "-" << endl; 	
	cout << " " << "|" << " " << "|" << " " << endl;
	cout << "-" << "-" << "-" << "-" << "-" << endl; 	
	cout << " " << "|" << " " << "|" << " " << endl;

}

class Game{
	
	public:
	vector<vector<string>> board;

	Game(vector<vector<string>> board){
		this->board = board;
	}

	bool check(){
		for(int i = 0; i < 3; i++){
			if(board[i][0] == board[i][1] && board[i][1] == board[i][2]){
				return true;
			}
		}

		for(int j = 0; j < 3; j++){
			if(board[0][j] == board[1][j] && board[1][j] == board[2][j]){
				return true;
			}
		}
		
		return false;
	}

	void takeInput(int x, int y, string z){
		if(board[x][y] == " "){
			board[x][y] = z;
		}
		else{
			cout << "Spot Taken" << endl;
		}
	}

};

class Player{

	public:
		string name;
};

int main(){
	drawBoard();
	vector<vector<string>> b(3, vector<string>(3, " "));
	Game obj(b);
	bool isGame = false;

	while(isGame == false){
		int a, c;
		string s;
		cout << "Enter Co-ordinates" << endl;
		cin >> a >> c >> s;

		obj.takeInput(a, c, s);
		cout << "Entered Values" << endl;
		isGame = obj.check();
	}
}
