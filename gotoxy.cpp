#include <iostream>
#include <locale.h>
#include <windows.h>
#include <string>
#include <conio.h>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

void gotoxy(int x, int y)
{
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main(int argc, char** argv)
{
	string msg ="";
	int c = 40;
	int linha  = 5;
    int enter;

    cout<<"Digite uma mensagem aqui: "<<endl;
    cin>>(msg);
	gotoxy(c, linha);	
	cout << msg<<endl;
	for (int i=0; i<msg.size(); i++)
	{	
		for (int x=5; x<=20; x++)
		{
		gotoxy(40, 5);	
	    cout << msg;
	    Sleep(00010);
	    gotoxy(c,x);
		cout << msg.at(i);
		system("cls");
		gotoxy(40,20);
		cout <<msg;
		if(x>=20)
        c+=1;
    
		}
	}
	cin>>enter;	
	return 0;
}
