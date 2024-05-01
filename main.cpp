#include <iostream>
#include <ctime> // данная библиотека позволяет генерировать рандомные числа 

using namespace std;

/* Программа позволяет генерировать рандомные числа в опр диапозоне, которые не повторяются */

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL)); // та самая строка, которая зависит от библиотеки

	int const SIZE = 10; // наша длина для массива
	int arr[SIZE]; // длину засунули в массив

	bool alreadyHere; // логическая переменная с помощью, которой будем проверять повторение чисел

	for (int i = 0; i < SIZE;) 
	{
		alreadyHere = false; // логическая переменная = фалс
		int newRandomValue = rand() % 20; // присвоим newrandomvalue рандомные числа от 0 до 20

		for (int j = 0; j < i; j ++) // в данном цикле будет работать таким образом
		{
			if (arr[j] == newRandomValue) // если идет повторение чисел
			{
				alreadyHere = true; // то мы это подтверждаем 
				break; // и затем выходим и запускаем вновь 
			}
		}

		if (!alreadyHere) // а если не равно 
		{
			arr[i] = newRandomValue; // то наш массив получает уникальное число 
			i++; // и цикл вновь повторяется пока не заполнит длину
		}
	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl; // вывод массива
	}
}