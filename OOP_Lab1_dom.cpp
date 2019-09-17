/* Камень брошен верх с известной скоростью. Рассчитать модуль силы тяжести,
действующий на камень в момент броска, сложить два объекта.*/

#include "pch.h"
#include <iostream>
#include <locale.h>
#include <conio.h>
#include <windows.h>
#include <string>

using namespace std;

class rock {
private:
	int mas;
	int speed;
public:
	
	void init() {
		cout << "Введенные данные" << endl;
		mas = 5;
		speed = 7;
	}

	/* Чтение с клавиатуры */
	void read() {
		cout << "Введите массу камня" << endl;
		cin >> mas;
		cout << "Введите его скорость" << endl;
		cin >> speed;
	}

	/* Суммирование чисел */
	rock operator + (rock &b)
	{
		rock c;
		c.mas = b.mas + mas;
		c.speed = b.speed + speed;
		return c;
	}

	/* Вычисление модуля силы  тяжести */
	int modul() {
		int m;
		m = mas * 10;
		return m;
	}

	/* Вывод на экран */
	void display() {
		cout << "Масса: " << mas << endl;
		cout << "Скорость: " << speed << endl;
	}


};



int main()
{
	setlocale(LC_ALL, "rus");
	rock one, two;

	one.init();
	one.display();
	two.read();
	two.display();
	rock three = one + two;
	cout << "Сумма: " << endl;
	three.display();
	int modul;
	modul = one.modul();
	cout << "Модуль силы первого камня " << modul << endl;

	return 0;
}

