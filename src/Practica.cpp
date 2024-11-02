#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/color.hpp>
#include <ftxui/screen/terminal.hpp>
#include <iostream>
#include <thread>

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    std::string reset_position;
    int frame = 0;
   
   
    while (true)
    {
        int x=frame;
        int y=x*x;

        auto can = Canvas(1000,1000);
        can.DrawBlockLine(78,7,120,7);
        can.DrawBlockLine(100,0,100,7);
        can.DrawBlockLine(101,0,101,7);
        can.DrawBlockLine(99,0,99,7);
        can.DrawBlockLine(102,0,102,7);
        can.DrawBlockLine(98,0,98,7);
        can.DrawBlockLine(97,0,97,7);
        can.DrawBlockLine(103,0,103,7);
        can.DrawBlockLine(96,0,96,7);
        can.DrawBlockLine(150,80,100,10,Color::Yellow1);
        can.DrawBlockLine(30,80,100,10,Color::Yellow1);
        can.DrawBlockLine(30,80,150,80,Color::Yellow1);
        can.DrawBlockLine(38,70,145,70);
        can.DrawBlockLine(48,60,138,60);
        can.DrawBlockLine(60,50,130,50);
        can.DrawBlockLine(70,50,70,60);
        can.DrawBlockLine(96,50,96,60);
        can.DrawBlockLine(120,50,120,60);
        can.DrawBlockLine(79,60,79,70);
        can.DrawBlockLine(105,60,105,70);
        can.DrawBlockLine(70,70,70,80);
        can.DrawBlockLine(96,70,96,80);
        can.DrawBlockLine(120,70,120,80);
        can.DrawBlockEllipse(97,37,18,8);
        can.DrawBlockEllipseFilled(97,37,3,8,Color::BlueLight);
        can.DrawBlockLine(63,80,63,100);
        can.DrawBlockLine(64,80,64,100);
        can.DrawBlockLine(65,80,65,100);
        can.DrawBlockCircleFilled(64,100,5);
        can.DrawBlockLine(65,100,70,103);
        can.DrawBlockLine(120,80,120,100);
        can.DrawBlockLine(121,80,121,100);
        can.DrawBlockLine(122,80,122,100);
        can.DrawBlockCircleFilled(121,100,5);
        can.DrawBlockLine(120,100,115,103);
        can.DrawBlockLine(75,80,75,90);
        can.DrawBlockLine(76,80,76,90);
        can.DrawBlockLine(77,80,77,90);
        can.DrawBlockLine(77,90,83,90);
        can.DrawBlockLine(83,90,83,94);
        can.DrawBlockLine(82,90,82,94);
        can.DrawBlockLine(112,80,112,90);
        can.DrawBlockLine(113,80,113,90);
        can.DrawBlockLine(114,80,114,90);
        can.DrawBlockLine(114,90,108,90);
        can.DrawBlockLine(108,90,108,94);
        can.DrawBlockLine(109,90,109,94);
        can.DrawBlockEllipseFilled(100,200 - y,100,10,Color::Black);
        can.DrawBlockEllipseFilled(100,200 - y,5,10,Color::White);

        Screen pantalla = Screen::Create(Dimension::Full(), Dimension::Full());
        Element lienzo = bgcolor(Color::Green, canvas(&can));
        Render(pantalla, lienzo);
        std::cout << reset_position;
        pantalla.Print();
        reset_position = pantalla.ResetPosition(true);
        this_thread::sleep_for(0.5s);
        this_thread::sleep_for(0.1s);
        frame++;
    }

    return 0;
}