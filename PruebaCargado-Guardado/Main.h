#pragma once
#include "SFML/Graphics.hpp"
#include <fstream>
#include <stdlib.h>
#include "iostream"

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

	


	~Cargado();

private:
	RenderWindow* pantalla;
	RectangleShape rec[5];
	Event* evento;
	ifstream Lec;
	string Str;
};


