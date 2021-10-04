#pragma once
#include "SFML/Graphics.hpp"
#include <fstream>
#include <stdlib.h>
#include "iostream"
#include <stack>

using namespace std;
using namespace sf;

class Cargado
{
public:
	Cargado(int resolX, int ResolY, string titulo);
	void Dibujar();
	void Gameloop();
	void Eventos();
	void Validacion();
	void LlenarPila();
	void llenar();

	


	~Cargado();

private:
	RenderWindow* pantalla;
	RectangleShape rec[5];
	Event* evento;
	ifstream Lec;
	string Str;
	stack<char>FPila;
	char Cadena;
	string Muro = "#";
	int i = 0;
	
};


