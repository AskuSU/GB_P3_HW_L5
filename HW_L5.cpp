#include <windows.h>

#include "MyLib.h"



void Task1()
{
	std::cout << "Работа с Функцией insert_sorted:" << std::endl << std::endl;
	
	

	std::cout << std::endl;
}

void Task2()
{
	std::cout << "Расчет ошибки преобразования сигнала Аналогово в Цифровой:" << std::endl << std::endl;
	
	
}


int main()
{
	setlocale(LC_ALL, "RU");

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	unsigned short taskNumber = 0;
	while (true)
	{
		taskNumber = myLib::getUserSelectedTask(2);
		switch (taskNumber)
		{
		case 1: Task1();
			break;
		case 2: Task2();
			break;
		}
		std::cout << std::endl;
	}

    return 0;
}