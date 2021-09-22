#include <iostream>
using namespace std;
char genChar() {
	bool isNotNum= rand()%5;
	char result;
	if (!isNotNum) result = rand() % 9 + 48;
	else
	result = rand() % 25 + 65;
	return result;
}
string genPart() {
	string result;
	char massive[6];
	for (int i = 0; i < 5; i++)
	{
	massive[i] = genChar();
	}
	massive[5] = NULL;
	result = massive;
	return result;
}
void genKey() {
	for (int i = 0; i < 5; i++)
	{
	cout << genPart() ;
	if (i<4)
	{
	cout << '-';
	}
	}
cout << endl;
}

void generatorKeys(char massChar[]) {
	string n;
	for (int j = 0; j < 1000; j++)
	{
		for (int i = 0; i < 29; i++)
		{
			massChar[i] = char(rand() % 25 + 65);
			massChar[5] = '-';
			massChar[11] = '-';
			massChar[17] = '-';
			massChar[23] = '-';
			cout << massChar[i];
		}
		cout << endl;
	}
}
int main()
{
	for (int i = 0; i < 1000; i++)
	{
		genKey();
	}
}
