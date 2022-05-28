//Everybody's first time, a virgin no more
#include <string>
#include <stdio.h>
#include <iostream>
#define h_world "Hello World!"
using namespace std;


constexpr auto world = "Hello World!";

class World
{
public:
	void func_world(){ printf("Hello World!\n");}
};

class Other_World
{
	friend class World;
	void func_world() {this -> World.func_world(); }

};

int main()
{

string hello = "Hello World!";
string game;

cout << "Hello World!" << "\n";
printf("Hello World!\n");
cout << hello << "\n";

Other_World world;
world.func_world();


printf("%s\n", h_world);

printf("%s\n", world);

cout << "Do you want to play a game with me?" << "\n";
cout << "Yes or No" << "\n";
cin >> game;

if (game == "Yes") { world.func_world(); }
else { printf("Sad Emoji Face"); }




return 0;
}
