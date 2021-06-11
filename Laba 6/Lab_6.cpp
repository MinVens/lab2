/*
������ 7.
��������� �������� ���� S = 1/1! + 1/2! + ... + 1 / k!.
*/

#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

int without(double S, int k);
int recursive(double S, int k, double last_multiplier, double i_float);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	another_try:
	int k;
	double S, last_multiplier = 1, i_float = 1;
	cout << "������ ������� ��������� : ";
	cin >> k;
	k++;
	if (k <= 1)
	{
		cout << "������� ���������� ����� !" << endl;
		goto another_try;
	}
	cout << "\n������������ ������� : " << endl;
	without(S, k);
	cout << "\n���������� ������� : " << endl;
	recursive(S, k, last_multiplier, i_float);
	return 0;
}

int without(double S, int k)
{
	double last_multiplier = 1;
	for(int i = 1; i < k; i++)
	{
		double i_float = i;
		S = (S + (1/(last_multiplier*i_float)));
		cout << "��������� : " << S << "\n";
		last_multiplier = last_multiplier*i_float;
		cout << "�������� : �� " << i << "! - " << last_multiplier << "\n" << endl;
	}
	return 0;
}

int recursive(double S, int k, double last_multiplier, double i_float)
{
	if (i_float == k)
		return 0;
	S = (S + (1/(last_multiplier*i_float)));
	cout << "��������� : " << S << "\n";
	last_multiplier = last_multiplier*i_float;
	cout << "�������� : �� " << i_float << "! - " << last_multiplier << "\n" << endl;
	i_float++;
	recursive(S, k, last_multiplier, i_float);
}
