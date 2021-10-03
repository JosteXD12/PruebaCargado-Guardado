#include "Main.h"

Cargado::Cargado(int resolX, int ResolY, string titulo) {
	pantalla = new RenderWindow(VideoMode(resolX, ResolY), titulo);
	rec[0].setSize(Vector2f(64, 64));
	rec[0].setPosition(Vector2f(200, 200));
	evento = new Event;
	Gameloop();

}

void Cargado::Gameloop() {
	Validacion();
	while (pantalla->isOpen())
	{
		Dibujar();
		Eventos();
	}
	
}

void Cargado::Dibujar() {
	pantalla->draw(rec[0]);
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


