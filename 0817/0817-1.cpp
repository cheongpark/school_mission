#include <iostream>
#include <string.h>
#include <windows.h>

#define length 36

using namespace std;

void line();
void gotoxy(int x, int y);

int main()
{
	string school[5] = { "학교 : ","학년 : ","반 : ","번호 : ","이름 : " }, sin[5] = {};
	system("title 학반번");
	for (int i = 0; i < 5; i++)
	{
		cout << school[i];
		cin >> sin[i];
	}
	system("cls");
	line();
	
	for (int i = 0; i < 5; i++)
	{
		gotoxy(3, i + 2);
		cout << school[i] << sin[i] << endl;
	}
	gotoxy(0, 10);
}

void line()
{
	cout << "┌";
	for (int i = 0; i < length; i++)
		cout << "─";
	cout << "┐";
	for (int i = 0; i < 7; i++)
	{
		cout << endl << "│";
		for (int i = 0; i < length; i++)
			cout << " ";
		cout << "│";
	}
	cout << endl << "└";
	for (int i = 0; i < length; i++)
		cout << "─";
	cout << "┘";
}

void gotoxy(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}