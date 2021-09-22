// generatorKeys.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

char genChar() {
	
	bool isNotNum= rand()%5;
	char result;

	if (!isNotNum)
	{
		result = rand() % 9 + 48;



	}
	else
	{
		result = rand() % 25 + 65;
	}
	
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
			/*int a= char(rand() % 25 + 65);
			int b = char(rand() % 25 + 6);*/
			massChar[i] = char(rand() % 25 + 65);
			massChar[5] = '-';
			massChar[11] = '-';
			massChar[17] = '-';
			massChar[23] = '-';
			cout << massChar[i];
		}
		cout << endl;
	}

		
		/*cout << '-' ;
		for (int i = 0; i < 5; i++)
		{

			massChar[i] = char(rand() % 25 + 65);
			cout << massChar[i];



		}


		cout << '-';
		for (int i = 0; i < 5; i++)
		{

			massChar[i] = char(rand() % 25 + 65);
			cout << massChar[i];



		}


		cout << '-';
		for (int i = 0; i < 5; i++)
		{

			massChar[i] = char(rand() % 25 + 65);
			cout << massChar[i];



		}


		cout << '-';
		for (int i = 0; i < 5; i++)
		{

			massChar[i] = char(rand() % 25 + 65);
			cout << massChar[i];



		}
		cout << endl;*/


		
	
		
		
	
	
	
	
	
	



}
int main()
{
	//char  massiveChar[29];
	for (int i = 0; i < 1000; i++)
	{
		genKey();

	}
	//massiveChar[28] = NULL;
	//cout << massiveChar[28];
	//cout << endl;

	//char massChar[29];
	//generatorKeys(massChar);
	
	//cout << "massChar =";
	

	/*massChar[3] = char(rand() % 9 + 48);
	cout << massChar[3];
	massChar[4] = NULL;*/






	

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
