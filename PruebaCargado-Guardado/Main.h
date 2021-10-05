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
	void ValidacionObjetos();
	void LlenarPilaObjetos();
	void llenarObjetos();
	void ValidacionCordenadas();
	void LLenarPilaCordenadas();
	void llenarCordenadas();

	


	~Cargado();

private:
	RenderWindow* pantalla;
	//RectangleShape rec[4];
	Event* evento;
	ifstream LecObjetos;
	ifstream LecCordenadas;
	string StrObjetos;
	string StrCordenadas;
	stack<char>FPila;
	stack<int>CPila;
	char CadenaObjeto;
	char CadenaCodenada;
	string Muro = "#";
	int i = 0;
	int Iteracion = 0;
	int Prueba;
};


