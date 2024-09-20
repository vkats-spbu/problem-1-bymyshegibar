/* Gleb Shikunov st128274@student.spbu.ru
   problem №1
*/

#include "functions.h"
#include <iostream>
#include <string>

//Лучше воздержаться от использования using namespace - так Вы гарантируете, чтообращаетесь к нужной сущности
using namespace std;

int main(int arg, char *argv[])
{
	cout << "Чтобы закончить выполнение программы, введите 'q' / 'quit' / 'stop' + Enter" << endl;
	string WordToSay = "world";
	while ((WordToSay != "q") && (WordToSay != "quit") && (WordToSay != "stop"))
	{
		SayHello(WordToSay);
		cin >> WordToSay;
	}
}
