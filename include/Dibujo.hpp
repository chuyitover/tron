#include <ftxui/dom/elements.hpp>
#include <fstream>
#include <string>

using namespace std;
using namespace ftxui;

class Dibujo
{
private:
    fstream archivo, archivo1;
    Element contenido;
public:
    Dibujo(string path)
    {

        archivo.open(path);
        archivo1.open(path);
        Elements elementos, elementos1;
        string linea, linea1;
        while (getline(archivo, linea))
        {
            elementos.emplace_back(text(linea));
        }
        Element moto = vbox(elementos);
        archivo.close();
    }

    Element GetElement(){
     return this->contenido;
    }
    ~Dibujo() {}
};