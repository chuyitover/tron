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
            while (getline(archivo1, linea1))
            {
                elementos1.emplace_back(text(linea1));
            }
            Element moto = vbox(elementos);
            Element bloque = vbox(elementos1);
            archivo.close();
        }
        
    Element GetElement(){
     return this->contenido;
   
    }
    ~Dibujo() {}
};