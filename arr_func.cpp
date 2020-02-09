#include <iostream>
#include "size_const.h"			// �� � ����. ��. ��. �������

// ��������� ������ ������ ���������� �������
void set_arr(int* arr, const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 9 + 1;
	}
}

// ������� ����������� ������
void print_arr(int* arr, const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << "\tarr[" << i << "] = " << arr[i] << std::endl;
	}
}

// ��������� ������ �� ���������� ��������
bool check_mass(int* arr, const int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = i + 1; j < SIZE; j++)
		{
			if (arr[i] == arr[j]) // ����� ���������� ���������
			{
				return true;
			}
		}
	}
	return false;
}

// ���������� ����������� ����������
void unique_arr(int* arr, const int SIZE)
{
	bool isEqual;
	for (int i = 0; i < SIZE; )
	{
		isEqual = false;				// ��������������, ��� ���������� �� �����
		int newNum = rand() % 20 + 1;	// ��������� ����� �� 0 �� 20 ������ �����

		for (int j = 0; j < i; j++)
		{
			if (newNum == arr[j])		// �������� �� ����� �����
			{
				isEqual = true;			// ����� �����
				break;
			}
		}

		if (!isEqual)					// ���� ����� ����� ���������� ����������� ��� ��. �������

		{
			arr[i] = newNum;
			i++;
		}
	}
}

// ������� min � max �������� � �������
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

	std::cout << "\n������������ ������� � ������� " << maxArr << std::endl;
	std::cout << "�����������  ������� � ������� " << minArr << std::endl;
}

// ����� �������� ���������
void start_arr()
{
	int arr[arrConst::SIZE_ARR];		// ������� ������ 

	std::cout << "����������� ������:\n\n";
	set_arr(arr, arrConst::SIZE_ARR);	// ��������� ������ ������ ���������� �������
	print_arr(arr, arrConst::SIZE_ARR);	// ������� ����������� ������


	std::cout << "\n��������� ������ �� ������������� ��������? y/n\n";
	char ch1;
	std::cin >> ch1;

	if (ch1 == 'y' || ch1 == 'Y')
	{
		if (check_mass(arr, arrConst::SIZE_ARR))		// ��������� ������ �� ���������� ��������
		{
			std::cout << "\n������� ���������� �������� � �������.\n";
			std::cout << "������� ������ � ����������� ����������? y/n\n";
			char ch2;
			std::cin >> ch2;

			if (ch2 == 'y' || ch2 == 'Y')
			{
				unique_arr(arr, arrConst::SIZE_ARR);	// ���������� ����������� ����������
				std::cout << "\n������ �����-���������� ������. �������? y/n\n";
				char ch3;
				std::cin >> ch3;

				if (ch3 == 'y' || ch3 == 'Y')
				{
					print_arr(arr, arrConst::SIZE_ARR);	// ������� ����������� ������
				}
				
			}
		}
		else
		{
			std::cout << "\n������ �� �������� ���������� ���������.\n";
		}
	}
	
	std::cout << "\n����� ������������ � ����������� �������� �������? y/n\n";
	char ch4;
	std::cin >> ch4;

	if (ch4 == 'y' || ch4 == 'Y')
	{
		max_min_arr(arr, arrConst::SIZE_ARR);			// ������� min � max �������� � �������
	}
}