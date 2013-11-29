#include<iostream>
#include "windows.h"
using namespace std;
char map[10][20] = {
	"###################",
	"#                 #",
	"#                 #",
	"#                 #",
	"#                 #",
	"#                 #",
	"#                 #",
	"#@                #",
	"###################",
};
bool game_running = true;

int main(){
	while (game_running == true){        /*iwxwba while  frchxilebic {*/
		system("cls");
		for (int display = 0; display < 10; display++){  //iwxeba fori {
			cout << map[display] << endl;
		}                       //damtavrda fori }
		system("pause>nul");    //ro ar icimcimos
		if ()

	}                           //damtavrda while }
	
	return 0;
}
