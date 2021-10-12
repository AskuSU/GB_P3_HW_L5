﻿#include <windows.h>

#include "MyLib.h"
#include "ContainerExt.h"


void Task1()
{
	std::cout << "Работа с Функцией printUniqueElements:" << std::endl << std::endl;

	std::vector<std::string> strings{ "one", "three", "two", "four", "six", "five", "seven", "one", "three", "six" };
	std::cout << "Исходный контейнер Vector:" << std::endl;
	myLib::printContainer(strings);

	std::cout << std::endl << "Результат:" << std::endl;
	printUniqueElements<std::string>(strings.begin(), strings.end());
	std::cout << std::endl;

	std::list<std::string> stringsL{ "one", "three", "two", "four", "six", "five", "seven", "eleven", "three", "ten" };
	std::cout << "Исходный контейнер List:" << std::endl;
	myLib::printContainer(stringsL);

	std::cout << std::endl << "Результат:" << std::endl;
	printUniqueElements<std::string>(stringsL.begin(), stringsL.end());
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