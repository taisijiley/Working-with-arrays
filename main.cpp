#include <iostream>
#include <ctime> // ������ ���������� ��������� ������������ ��������� ����� 

using namespace std;

/* ��������� ��������� ������������ ��������� ����� � ��� ���������, ������� �� ����������� */

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL)); // �� ����� ������, ������� ������� �� ����������

	int const SIZE = 10; // ���� ����� ��� �������
	int arr[SIZE]; // ����� �������� � ������

	bool alreadyHere; // ���������� ���������� � �������, ������� ����� ��������� ���������� �����

	for (int i = 0; i < SIZE;) 
	{
		alreadyHere = false; // ���������� ���������� = ����
		int newRandomValue = rand() % 20; // �������� newrandomvalue ��������� ����� �� 0 �� 20

		for (int j = 0; j < i; j ++) // � ������ ����� ����� �������� ����� �������
		{
			if (arr[j] == newRandomValue) // ���� ���� ���������� �����
			{
				alreadyHere = true; // �� �� ��� ������������ 
				break; // � ����� ������� � ��������� ����� 
			}
		}

		if (!alreadyHere) // � ���� �� ����� 
		{
			arr[i] = newRandomValue; // �� ��� ������ �������� ���������� ����� 
			i++; // � ���� ����� ����������� ���� �� �������� �����
		}
	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl; // ����� �������
	}
}