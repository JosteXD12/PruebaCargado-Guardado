#include "Main.h"

Cargado::Cargado(int resolX, int ResolY, string titulo) {
	pantalla = new RenderWindow(VideoMode(resolX, ResolY), titulo);
	evento = new Event;
	Validacion();
	LlenarPila();
	llenar();
	Gameloop();
}

void Cargado::Gameloop() {
	while (pantalla->isOpen())
	{
		Dibujar();
		Eventos();
	}

}

void Cargado::Dibujar() {
	pantalla->draw(rec[0]);
	pantalla->draw(rec[1]);
	pantalla->display();
}
void Cargado::Eventos() {
	while (pantalla->pollEvent(*evento)) {
		switch (evento->type)
		{
		case Event::Closed:
			pantalla->close();
			exit(0);
			break;
		}
	}
}
void Cargado::Validacion() {
	Lec.open("Objetos.txt", ios::in);
	if (Lec.fail())
	{
		cout << "Fallo no se puedo abrir el archivo txt" << endl;
	}
	else
	{
		while (!Lec.eof())
		{

			getline(Lec, Str); //con esta funcion tomas la linea(limitada por \n)
			cout << Str;
		}
	}
	Lec.close();
}
void Cargado::LlenarPila() {
	for (i = 0; i < Str.length(); i++)
	{
		Cadena = Str[i];
		FPila.push(Cadena);
	}
}
void Cargado::llenar() {
	int Iteracion = 0;
	while (!FPila.empty())
	{
		if (FPila.top() == Muro) {
			i++;
			rec[Iteracion].setSize(Vector2f(64, 64));
			rec[Iteracion].setPosition(Vector2f(200*Iteracion, 200*Iteracion));
			Iteracion = Iteracion + 1;
		}
		if (Iteracion >= 5) {
			break;
		}
	}

}


