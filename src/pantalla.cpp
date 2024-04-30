#include <ftxui/screen/screen.hpp>
#include <fstream>
#include <iostream>
#include <thread>


using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[]){
    
    Screen pantalla = Screen::Create(
        Dimension::Full(),
        Dimension::Full()
    );

    int x = 0;
    while (true)
    {
        x++;
        pantalla.Clear();
        this_thread::sleep_for(0.1s);

        pantalla.PixelAt(x,5).character = "    _____";
        pantalla1.PixelAt(x,5).character = " ___ |[]|_n__n_I_c";
        pantalla2.PixelAt(x,5).character = "|___||__|###|____}";
        pantalla3.PixelAt(x,5).character = " O-O--O-O+++--O-O";
        pantalla.Print();
        pantalla1.Print();
        pantalla2.Print();
        pantalla3.Print();
        cout<<pantalla.ResetPosition();
        cout<<pantalla1.ResetPosition();
        cout<<pantalla2.ResetPosition();
        cout<<pantalla3.ResetPosition();


    }
  }  