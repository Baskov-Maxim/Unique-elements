#ifndef ARR_FUNC_H		// Header Guards
#define ARR_FUNC_H		// ARR_FUNC_H

void set_arr(int* arr, const int SIZE);		// ��������� ������ ����������
void print_arr(int* arr, const int SIZE);	// ����� ������� ����������
void start_arr();							// ������� �����-���������
bool check_mass(int* arr, const int SIZE);	// �������� �� ������������
void unique_arr(int* arr, const int SIZE);	// ���������� ����������� ����������
void max_min_arr(int* arr, const int SIZE);	// ����� min � max ��������

#endif