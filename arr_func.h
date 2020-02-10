#ifndef ARR_FUNC_H		// Header Guards
#define ARR_FUNC_H		// ARR_FUNC_H

void set_arr(int* arr, const int SIZE);	     // Заполняем массив элементами
void print_arr(int* arr, const int SIZE);	 // Вывод массива элементами
void start_arr();                            // Функция старт-программы
bool check_mass(int* arr, const int SIZE);	// Проверка на уникальность
void unique_arr(int* arr, const int SIZE);	// Заполнение уникальными элементами
void max_min_arr(int* arr, const int SIZE);	// Поиск min и max значений

#endif
