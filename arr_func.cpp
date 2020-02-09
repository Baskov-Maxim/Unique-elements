#include <iostream>
#include "size_const.h"			// ЗФ с макс. зн. эл. массива

// Заполняем массив новыми рандомными числами
void set_arr(int* arr, const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 9 + 1;
	}
}

// Выводим заполненный массив
void print_arr(int* arr, const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << "\tarr[" << i << "] = " << arr[i] << std::endl;
	}
}

// Проверяем массив на одинаковые элементы
bool check_mass(int* arr, const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = i + 1; j < SIZE; j++)
		{
			if (arr[i] == arr[j]) // поиск одинаковых элементов
			{
				return true;
			}
		}
	}
	return false;
}

// Заполнение уникальными элементами
void unique_arr(int* arr, const int SIZE)
{
	bool isEqual;
	for (int i = 0; i < SIZE; )
	{
		isEqual = false;				// предполагается, что изначально не равны
		int newNum = rand() % 20 + 1;	// Генерация чисел от 0 до 20 новому числу

		for (int j = 0; j < i; j++)
		{
			if (newNum == arr[j])		// проверка на новое число
			{
				isEqual = true;			// числа равны
				break;
			}
		}

		if (!isEqual)					// Если новое число уникальное присваиваем его эл. массива

		{
			arr[i] = newNum;
			i++;
		}
	}
}

// Находим min и max значение в массиве
void max_min_arr(int* arr, const int SIZE)
{
	int maxArr = arr[0];
	int minArr = arr[0];

	for (int i = 0; i < SIZE; i++)
	{
		if (maxArr < arr[i])
		{
			maxArr = arr[i];
		}
		if (minArr > arr[i])
		{
			minArr = arr[i];
		}
	}

	std::cout << "\nМаксимальный элемент в массиве " << maxArr << std::endl;
	std::cout << "Минимальный  элемент в массиве " << minArr << std::endl;
}

// Старт основной программы
void start_arr()
{
	int arr[arrConst::SIZE_ARR];		// Рабочий массив 

	std::cout << "Изначальный массив:\n\n";
	set_arr(arr, arrConst::SIZE_ARR);	// Заполняем массив новыми рандомными числами
	print_arr(arr, arrConst::SIZE_ARR);	// Выводим заполненный массив


	std::cout << "\nПроверить массив на повторяющиеся элементы? y/n\n";
	char ch1;
	std::cin >> ch1;

	if (ch1 == 'y' || ch1 == 'Y')
	{
		if (check_mass(arr, arrConst::SIZE_ARR))		// Проверяем массив на одинаковые элементы
		{
			std::cout << "\nНайдены одинаковые элементы в массиве.\n";
			std::cout << "Создать массив с уникальными элементами? y/n\n";
			char ch2;
			std::cin >> ch2;

			if (ch2 == 'y' || ch2 == 'Y')
			{
				unique_arr(arr, arrConst::SIZE_ARR);	// Заполнение уникальными элементами
				std::cout << "\nСоздан новый-уникальный массив. Вывести? y/n\n";
				char ch3;
				std::cin >> ch3;

				if (ch3 == 'y' || ch3 == 'Y')
				{
					print_arr(arr, arrConst::SIZE_ARR);	// Выводим заполненный массив
				}
				
			}
		}
		else
		{
			std::cout << "\nМассив не содержит одинаковых элементов.\n";
		}
	}
	
	std::cout << "\nНайти максимальный и минимальный элементы массива? y/n\n";
	char ch4;
	std::cin >> ch4;

	if (ch4 == 'y' || ch4 == 'Y')
	{
		max_min_arr(arr, arrConst::SIZE_ARR);			// Находим min и max значение в массиве
	}
}
