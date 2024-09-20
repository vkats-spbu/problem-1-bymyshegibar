#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <string>

// Никогда так не пишите в заголовке - Вы не можете быть увененны, куда его потом подключите и к каким конфликтам это приведет
using namespace std;

//Ссылка позволит избежать копирования
void SayHello(const string &WordToSay);

#endif
