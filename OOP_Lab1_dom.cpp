/* Камень брошен верх с известной скоростью. Рассчитать модуль силы тяжести,
действующий на камень в момент броска, сложить два объекта.*/

#include "pch.h"
#include <iostream>
#include <locale.h>
#include <conio.h>
#include <windows.h>
#include <string>

using namespace std;

struct rock {
	int mas;
	int speed;
};

void init(rock &a) {
	cout << "Введенные данные" << endl;
	a.mas = 5;
	a.speed = 7;
}

/* Чтение с клавиатуры */
void read(rock &a) {
	cout << "Введите массу камня" << endl;
	cin >> a.mas;
	cout << "Введите его скорость" << endl;
	cin >> a.speed;
}

/* Суммирование чисел */
rock operator + (rock &b, rock &a)
{
	rock c;
	c.mas = b.mas + a.mas;
	c.speed = b.speed + a.speed;
	return c;
}


/* Вычисление модуля силы  тяжести */
int modul(rock a) {
	int m;
	m = a.mas * 10;
	return m;
}

/* Вывод на экран */
void display(rock a) {
	cout << "Масса: " << a.mas << endl;
	cout << "Скорость: " << a.speed << endl;
}

int main()
{
	setlocale(LC_ALL, "rus");
	rock one, two;

	init(one);
	display(one);
	read(two);
	display(two);
	rock three = one + two;
	cout << "Сумма: " << endl;
	display(three);

	return 0;
}

