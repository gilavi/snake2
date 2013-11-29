#include<iostream>
#include "windows.h"
using namespace std;
char map[10][20] = {
	"###################",
	"#@                #",
	"#                 #",
	"#                 #",
	"#                 #",
	"#                 #",
	"#                 #",
	"#                 #",
	"###################",
};
int x = 1;
int y = 1;
bool game_running = true;

int main(){
	while (game_running == true){        /*iwxwba while  frchxilebic {*/
		system("cls");
		for (int display = 0; display < 10; display++){  //iwxeba fori {
			cout << map[display] << endl;
		}                       //damtavrda fori }
		system("pause>nul");    //ro ar icimcimos
		if (GetAsyncKeyState(VK_DOWN)){      //if DOWN dasawxisi
			int y2 = y + 1;
			if (map[y2][x] == ' '){              //ifi s=amowmebs masivshia tu ara @
				map[y][x] = ' ';         /*  spacesa da @ adgilta gacvla dabla*/
				y++;
				map[y][x] = '@';
			}                             //ifis dasasruli
		}                      //damtavrda if DOWN
		if (GetAsyncKeyState(VK_UP)){
			int y2 = y - 1;
			if (map[y2][x] == ' '){
				map[y][x] = ' ';
				y--;
				map[y][x] = '@';
			}                           //damtavrda while
		}
		if (GetAsyncKeyState(VK_RIGHT)){
			int x2 = x + 1;
			if (map[y][x2] == ' '){
				map[y][x] = ' ';
				x++;
				map[y][x] = '@';
			}

		}
		if (GetAsyncKeyState(VK_LEFT)){
			int x2 = x - 1;
			if (map[y][x2] == ' '){
				map[y][x] = ' ';
				x--;
				map[y][x] = '@';
			}
			
		}
	}
	return 0;
}
