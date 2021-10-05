#include "Main.h"

Cargado::Cargado(int resolX, int ResolY, string titulo) {
	pantalla = new RenderWindow(VideoMode(resolX, ResolY), titulo);
	evento = new Event;
	ValidacionCordenadas();
	//LLenarPilaCordenadas();
	llenarCordenadas();
	//ValidacionObjetos();
	//LlenarPilaObjetos();
	//llenarObjetos();
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
	/*pantalla->draw(rec[0]);
	pantalla->draw(rec[1]);
	pantalla->draw(rec[2]);
	pantalla->draw(rec[3]);*/
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
//void Cargado::ValidacionObjetos() {
//	LecObjetos.open("Objetos.txt", ios::in);
//	if (LecObjetos.fail())
//	{
//		cout << "Fallo no se puedo abrir el archivo txt" << endl;
//	}
//	else
//	{
//		while (!LecObjetos.eof())
//		{
//
//			getline(LecObjetos, StrObjetos); //con esta funcion tomas la linea(limitada por \n)
//			cout << StrObjetos;
//		}
//	}
//	LecObjetos.close();
//}
void Cargado::ValidacionCordenadas() {
	LecCordenadas.open("Cordenadas.txt", ios::in);
	if (LecCordenadas.fail())
	{
		cout << "Fallo no se puedo abrir el archivo txt" << endl;
	}
	else
	{
		while (!LecCordenadas.eof())
		{
			LecCordenadas >> StrCordenadas;
			Prueba = stoi(StrCordenadas);
			CPila.push(Prueba);
			//cout << StrCordenadas << endl;
		}

	}
	LecCordenadas.close();
}
//void Cargado::LlenarPilaObjetos() {
//	for (i = 0; i < StrObjetos.length(); i++)
//	{
//		CadenaObjeto = StrObjetos[i];
//		FPila.push(CadenaObjeto);
//	}
//}


//void Cargado::LLenarPilaCordenadas() {
//	for (i = 0; i < StrCordenadas.length(); i++)
//	{
//		CadenaCodenada = StrCordenadas[i];
//		CPila.push(CadenaCodenada);
//	}
//}
//void Cargado::llenarObjetos() {
//	while (!FPila.empty())
//	{
//		//cout << FPila.top() << endl;
//		//cout << "";
//		//FPila.pop();
//		if (FPila.top() == Muro) {
//			i++;
//			rec[Iteracion].setSize(Vector2f(64, 64));
//			rec[Iteracion].setPosition(Vector2f(64 * Iteracion, 50 * Iteracion));
//			FPila.pop();
//
//			Iteracion = Iteracion + 1;
//		}
//		if (Iteracion >= 4) {
//			break;
//		}
//	}
//}
void Cargado::llenarCordenadas() {
	while (!CPila.empty())
	{
		cout << CPila.top() << endl;
		cout << "";
		CPila.pop();

	}


}



