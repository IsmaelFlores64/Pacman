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
        int x = frame;
        int y = x*x;

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
        can.DrawBlockEllipseFilled(97,37,3,8);
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
        

        if (200 - y < 45)
        { 
            can.DrawBlockEllipseFilled(97,37,18,8);
            can.DrawBlockEllipseFilled(97,37,3,8,Color::BlueLight);
            y = 5;
        }
         if (100 - x < 75)
        {
        can.DrawBlockLine(78 + x,7,120 + x,7);
        can.DrawBlockLine(100+ x,0,100 + x,7);
        can.DrawBlockLine(101 + x,0,101 + x,7);
        can.DrawBlockLine(99 + x,0,99 + x,7);
        can.DrawBlockLine(102 + x,0,102 + x,7);
        can.DrawBlockLine(98 + x,0,98 + x,7);
        can.DrawBlockLine(97 + x,0,97 + x,7);
        can.DrawBlockLine(103 + x,0,103 + x,7);
        can.DrawBlockLine(96 + x,0,96 + x,7);
        can.DrawBlockLine(150 + x,80,100 + x,10,Color::Red);
        can.DrawBlockLine(30 + x,80,100 + x,10,Color::Red);
        can.DrawBlockLine(30 + x,80,150 + x,80,Color::Red);
        can.DrawBlockLine(38 + x,70,145 + x,70);
        can.DrawBlockLine(48 + x,60,138 + x,60);
        can.DrawBlockLine(60 + x,50,130 + x,50);
        can.DrawBlockLine(70 + x,50,70 + x,60);
        can.DrawBlockLine(96 + x,50,96 + x,60);
        can.DrawBlockLine(120 + x,50,120 + x,60);
        can.DrawBlockLine(79 + x,60,79 + x,70);
        can.DrawBlockLine(105 + x,60,105 + x,70);
        can.DrawBlockLine(70 + x,70,70 + x,80);
        can.DrawBlockLine(96 + x,70,96 + x,80);
        can.DrawBlockLine(120 + x,70,120 + x,80);
        can.DrawBlockEllipseFilled(97 + x,37,18,8);
        can.DrawBlockEllipseFilled(97 + x,37,3,8,Color::Red);
        can.DrawBlockLine(63 + x,80,63 + x,100);
        can.DrawBlockLine(64 + x,80,64 + x,100);
        can.DrawBlockLine(65 + x,80,65 + x,100);
        can.DrawBlockCircleFilled(64 + x,100,5);
        can.DrawBlockLine(65 + x,100,70 + x,103);
        can.DrawBlockLine(120 + x,80,120 + x,100);
        can.DrawBlockLine(121 + x,80,121 + x,100);
        can.DrawBlockLine(122 + x,80,122 + x,100);
        can.DrawBlockCircleFilled(121 + x,100,5);
        can.DrawBlockLine(120 + x,100,115 + x,103);
        can.DrawBlockLine(75 + x,80,75 + x,90);
        can.DrawBlockLine(76 + x,80,76 + x,90);
        can.DrawBlockLine(77 + x,80,77 + x,90);
        can.DrawBlockLine(77 + x,90,83 + x,90);
        can.DrawBlockLine(83 + x,90,83 + x,94);
        can.DrawBlockLine(82 + x,90,82 + x,94);
        can.DrawBlockLine(112 + x,80,112 + x,90);
        can.DrawBlockLine(113 + x,80,113 + x,90);
        can.DrawBlockLine(114 + x,80,114 + x,90);
        can.DrawBlockLine(114 + x,90,108 + x,90);
        can.DrawBlockLine(108 + x,90,108 + x,94);
        can.DrawBlockLine(109 + x,90,109 + x,94);   
        }

         if (100 - x < 60)
        {
        can.DrawBlockLine(78 + x,7,120 + x,7);
        can.DrawBlockLine(100+ x,0,100 + x,7);
        can.DrawBlockLine(101 + x,0,101 + x,7);
        can.DrawBlockLine(99 + x,0,99 + x,7);
        can.DrawBlockLine(102 + x,0,102 + x,7);
        can.DrawBlockLine(98 + x,0,98 + x,7);
        can.DrawBlockLine(97 + x,0,97 + x,7);
        can.DrawBlockLine(103 + x,0,103 + x,7);
        can.DrawBlockLine(96 + x,0,96 + x,7);
        can.DrawBlockLine(150 + x,80,100 + x,10,Color::Black);
        can.DrawBlockLine(30 + x,80,100 + x,10,Color::Black);
        can.DrawBlockLine(30 + x,80,150 + x,80,Color::Black);
        can.DrawBlockLine(38 + x,70,145 + x,70);
        can.DrawBlockLine(48 + x,60,138 + x,60);
        can.DrawBlockLine(60 + x,50,130 + x,50);
        can.DrawBlockLine(70 + x,50,70 + x,60);
        can.DrawBlockLine(96 + x,50,96 + x,60);
        can.DrawBlockLine(120 + x,50,120 + x,60);
        can.DrawBlockLine(79 + x,60,79 + x,70);
        can.DrawBlockLine(105 + x,60,105 + x,70);
        can.DrawBlockLine(70 + x,70,70 + x,80);
        can.DrawBlockLine(96 + x,70,96 + x,80);
        can.DrawBlockLine(120 + x,70,120 + x,80);
        can.DrawBlockEllipseFilled(97 + x,37,18,8);
        can.DrawBlockEllipseFilled(97 + x,37,3,8,Color::Wheat1);
        can.DrawBlockLine(63 + x,80,63 + x,100);
        can.DrawBlockLine(64 + x,80,64 + x,100);
        can.DrawBlockLine(65 + x,80,65 + x,100);
        can.DrawBlockCircleFilled(64 + x,100,5);
        can.DrawBlockLine(65 + x,100,70 + x,103);
        can.DrawBlockLine(120 + x,80,120 + x,100);
        can.DrawBlockLine(121 + x,80,121 + x,100);
        can.DrawBlockLine(122 + x,80,122 + x,100);
        can.DrawBlockCircleFilled(121 + x,100,5);
        can.DrawBlockLine(120 + x,100,115 + x,103);
        can.DrawBlockLine(75 + x,80,75 + x,90);
        can.DrawBlockLine(76 + x,80,76 + x,90);
        can.DrawBlockLine(77 + x,80,77 + x,90);
        can.DrawBlockLine(77 + x,90,83 + x,90);
        can.DrawBlockLine(83 + x,90,83 + x,94);
        can.DrawBlockLine(82 + x,90,82 + x,94);
        can.DrawBlockLine(112 + x,80,112 + x,90);
        can.DrawBlockLine(113 + x,80,113 + x,90);
        can.DrawBlockLine(114 + x,80,114 + x,90);
        can.DrawBlockLine(114 + x,90,108 + x,90);
        can.DrawBlockLine(108 + x,90,108 + x,94);
        can.DrawBlockLine(109 + x,90,109 + x,94);   
        }

         if (100 - x < 55)
        {
        can.DrawBlockLine(78 + x,7,120 + x,7);
        can.DrawBlockLine(100+ x,0,100 + x,7);
        can.DrawBlockLine(101 + x,0,101 + x,7);
        can.DrawBlockLine(99 + x,0,99 + x,7);
        can.DrawBlockLine(102 + x,0,102 + x,7);
        can.DrawBlockLine(98 + x,0,98 + x,7);
        can.DrawBlockLine(97 + x,0,97 + x,7);
        can.DrawBlockLine(103 + x,0,103 + x,7);
        can.DrawBlockLine(96 + x,0,96 + x,7);
        can.DrawBlockLine(150 + x,80,100 + x,10,Color::Blue1);
        can.DrawBlockLine(30 + x,80,100 + x,10,Color::Blue1);
        can.DrawBlockLine(30 + x,80,150 + x,80,Color::Blue1);
        can.DrawBlockLine(38 + x,70,145 + x,70);
        can.DrawBlockLine(48 + x,60,138 + x,60);
        can.DrawBlockLine(60 + x,50,130 + x,50);
        can.DrawBlockLine(70 + x,50,70 + x,60);
        can.DrawBlockLine(96 + x,50,96 + x,60);
        can.DrawBlockLine(120 + x,50,120 + x,60);
        can.DrawBlockLine(79 + x,60,79 + x,70);
        can.DrawBlockLine(105 + x,60,105 + x,70);
        can.DrawBlockLine(70 + x,70,70 + x,80);
        can.DrawBlockLine(96 + x,70,96 + x,80);
        can.DrawBlockLine(120 + x,70,120 + x,80);
        can.DrawBlockEllipse(97 + x,37,18,8);
        can.DrawBlockEllipseFilled(97 + x,37,3,8);
        can.DrawBlockLine(63 + x,80,63 + x,100);
        can.DrawBlockLine(64 + x,80,64 + x,100);
        can.DrawBlockLine(65 + x,80,65 + x,100);
        can.DrawBlockCircleFilled(64 + x,100,5);
        can.DrawBlockLine(65 + x,100,70 + x,103);
        can.DrawBlockLine(120 + x,80,120 + x,100);
        can.DrawBlockLine(121 + x,80,121 + x,100);
        can.DrawBlockLine(122 + x,80,122 + x,100);
        can.DrawBlockCircleFilled(121 + x,100,5);
        can.DrawBlockLine(120 + x,100,115 + x,103);
        can.DrawBlockLine(75 + x,80,75 + x,90);
        can.DrawBlockLine(76 + x,80,76 + x,90);
        can.DrawBlockLine(77 + x,80,77 + x,90);
        can.DrawBlockLine(77 + x,90,83 + x,90);
        can.DrawBlockLine(83 + x,90,83 + x,94);
        can.DrawBlockLine(82 + x,90,82 + x,94);
        can.DrawBlockLine(112 + x,80,112 + x,90);
        can.DrawBlockLine(113 + x,80,113 + x,90);
        can.DrawBlockLine(114 + x,80,114 + x,90);
        can.DrawBlockLine(114 + x,90,108 + x,90);
        can.DrawBlockLine(108 + x,90,108 + x,94);
        can.DrawBlockLine(109 + x,90,109 + x,94);   
        }

         if (100 - x < 45)
        {
        can.DrawBlockLine(78 + x,7,120 + x,7);
        can.DrawBlockLine(100+ x,0,100 + x,7);
        can.DrawBlockLine(101 + x,0,101 + x,7);
        can.DrawBlockLine(99 + x,0,99 + x,7);
        can.DrawBlockLine(102 + x,0,102 + x,7);
        can.DrawBlockLine(98 + x,0,98 + x,7);
        can.DrawBlockLine(97 + x,0,97 + x,7);
        can.DrawBlockLine(103 + x,0,103 + x,7);
        can.DrawBlockLine(96 + x,0,96 + x,7);
        can.DrawBlockLine(150 + x,80,100 + x,10,Color::Red);
        can.DrawBlockLine(30 + x,80,100 + x,10,Color::Red);
        can.DrawBlockLine(30 + x,80,150 + x,80,Color::Red);
        can.DrawBlockLine(38 + x,70,145 + x,70);
        can.DrawBlockLine(48 + x,60,138 + x,60);
        can.DrawBlockLine(60 + x,50,130 + x,50);
        can.DrawBlockLine(70 + x,50,70 + x,60);
        can.DrawBlockLine(96 + x,50,96 + x,60);
        can.DrawBlockLine(120 + x,50,120 + x,60);
        can.DrawBlockLine(79 + x,60,79 + x,70);
        can.DrawBlockLine(105 + x,60,105 + x,70);
        can.DrawBlockLine(70 + x,70,70 + x,80);
        can.DrawBlockLine(96 + x,70,96 + x,80);
        can.DrawBlockLine(120 + x,70,120 + x,80);
        can.DrawBlockEllipseFilled(97 + x,37,18,8);
        can.DrawBlockEllipseFilled(97 + x,37,3,8,Color::Red);
        can.DrawBlockLine(63 + x,80,63 + x,100);
        can.DrawBlockLine(64 + x,80,64 + x,100);
        can.DrawBlockLine(65 + x,80,65 + x,100);
        can.DrawBlockCircleFilled(64 + x,100,5);
        can.DrawBlockLine(65 + x,100,70 + x,103);
        can.DrawBlockLine(120 + x,80,120 + x,100);
        can.DrawBlockLine(121 + x,80,121 + x,100);
        can.DrawBlockLine(122 + x,80,122 + x,100);
        can.DrawBlockCircleFilled(121 + x,100,5);
        can.DrawBlockLine(120 + x,100,115 + x,103);
        can.DrawBlockLine(75 + x,80,75 + x,90);
        can.DrawBlockLine(76 + x,80,76 + x,90);
        can.DrawBlockLine(77 + x,80,77 + x,90);
        can.DrawBlockLine(77 + x,90,83 + x,90);
        can.DrawBlockLine(83 + x,90,83 + x,94);
        can.DrawBlockLine(82 + x,90,82 + x,94);
        can.DrawBlockLine(112 + x,80,112 + x,90);
        can.DrawBlockLine(113 + x,80,113 + x,90);
        can.DrawBlockLine(114 + x,80,114 + x,90);
        can.DrawBlockLine(114 + x,90,108 + x,90);
        can.DrawBlockLine(108 + x,90,108 + x,94);
        can.DrawBlockLine(109 + x,90,109 + x,94);   
        }

         if (100 - x < 35)
        {
        can.DrawBlockLine(78 + x,7,120 + x,7);
        can.DrawBlockLine(100+ x,0,100 + x,7);
        can.DrawBlockLine(101 + x,0,101 + x,7);
        can.DrawBlockLine(99 + x,0,99 + x,7);
        can.DrawBlockLine(102 + x,0,102 + x,7);
        can.DrawBlockLine(98 + x,0,98 + x,7);
        can.DrawBlockLine(97 + x,0,97 + x,7);
        can.DrawBlockLine(103 + x,0,103 + x,7);
        can.DrawBlockLine(96 + x,0,96 + x,7);
        can.DrawBlockLine(150 + x,80,100 + x,10,Color::Black);
        can.DrawBlockLine(30 + x,80,100 + x,10,Color::Black);
        can.DrawBlockLine(30 + x,80,150 + x,80,Color::Black);
        can.DrawBlockLine(38 + x,70,145 + x,70);
        can.DrawBlockLine(48 + x,60,138 + x,60);
        can.DrawBlockLine(60 + x,50,130 + x,50);
        can.DrawBlockLine(70 + x,50,70 + x,60);
        can.DrawBlockLine(96 + x,50,96 + x,60);
        can.DrawBlockLine(120 + x,50,120 + x,60);
        can.DrawBlockLine(79 + x,60,79 + x,70);
        can.DrawBlockLine(105 + x,60,105 + x,70);
        can.DrawBlockLine(70 + x,70,70 + x,80);
        can.DrawBlockLine(96 + x,70,96 + x,80);
        can.DrawBlockLine(120 + x,70,120 + x,80);
        can.DrawBlockEllipseFilled(97 + x,37,18,8);
        can.DrawBlockEllipseFilled(97 + x,37,3,8,Color::Wheat1);
        can.DrawBlockLine(63 + x,80,63 + x,100);
        can.DrawBlockLine(64 + x,80,64 + x,100);
        can.DrawBlockLine(65 + x,80,65 + x,100);
        can.DrawBlockCircleFilled(64 + x,100,5);
        can.DrawBlockLine(65 + x,100,70 + x,103);
        can.DrawBlockLine(120 + x,80,120 + x,100);
        can.DrawBlockLine(121 + x,80,121 + x,100);
        can.DrawBlockLine(122 + x,80,122 + x,100);
        can.DrawBlockCircleFilled(121 + x,100,5);
        can.DrawBlockLine(120 + x,100,115 + x,103);
        can.DrawBlockLine(75 + x,80,75 + x,90);
        can.DrawBlockLine(76 + x,80,76 + x,90);
        can.DrawBlockLine(77 + x,80,77 + x,90);
        can.DrawBlockLine(77 + x,90,83 + x,90);
        can.DrawBlockLine(83 + x,90,83 + x,94);
        can.DrawBlockLine(82 + x,90,82 + x,94);
        can.DrawBlockLine(112 + x,80,112 + x,90);
        can.DrawBlockLine(113 + x,80,113 + x,90);
        can.DrawBlockLine(114 + x,80,114 + x,90);
        can.DrawBlockLine(114 + x,90,108 + x,90);
        can.DrawBlockLine(108 + x,90,108 + x,94);
        can.DrawBlockLine(109 + x,90,109 + x,94);   
        }

         if (100 - x < 25)
        {
        can.DrawBlockLine(78 + x,7,120 + x,7);
        can.DrawBlockLine(100+ x,0,100 + x,7);
        can.DrawBlockLine(101 + x,0,101 + x,7);
        can.DrawBlockLine(99 + x,0,99 + x,7);
        can.DrawBlockLine(102 + x,0,102 + x,7);
        can.DrawBlockLine(98 + x,0,98 + x,7);
        can.DrawBlockLine(97 + x,0,97 + x,7);
        can.DrawBlockLine(103 + x,0,103 + x,7);
        can.DrawBlockLine(96 + x,0,96 + x,7);
        can.DrawBlockLine(150 + x,80,100 + x,10,Color::Blue1);
        can.DrawBlockLine(30 + x,80,100 + x,10,Color::Blue1);
        can.DrawBlockLine(30 + x,80,150 + x,80,Color::Blue1);
        can.DrawBlockLine(38 + x,70,145 + x,70);
        can.DrawBlockLine(48 + x,60,138 + x,60);
        can.DrawBlockLine(60 + x,50,130 + x,50);
        can.DrawBlockLine(70 + x,50,70 + x,60);
        can.DrawBlockLine(96 + x,50,96 + x,60);
        can.DrawBlockLine(120 + x,50,120 + x,60);
        can.DrawBlockLine(79 + x,60,79 + x,70);
        can.DrawBlockLine(105 + x,60,105 + x,70);
        can.DrawBlockLine(70 + x,70,70 + x,80);
        can.DrawBlockLine(96 + x,70,96 + x,80);
        can.DrawBlockLine(120 + x,70,120 + x,80);
        can.DrawBlockEllipse(97 + x,37,18,8);
        can.DrawBlockEllipseFilled(97 + x,37,3,8);
        can.DrawBlockLine(63 + x,80,63 + x,100);
        can.DrawBlockLine(64 + x,80,64 + x,100);
        can.DrawBlockLine(65 + x,80,65 + x,100);
        can.DrawBlockCircleFilled(64 + x,100,5);
        can.DrawBlockLine(65 + x,100,70 + x,103);
        can.DrawBlockLine(120 + x,80,120 + x,100);
        can.DrawBlockLine(121 + x,80,121 + x,100);
        can.DrawBlockLine(122 + x,80,122 + x,100);
        can.DrawBlockCircleFilled(121 + x,100,5);
        can.DrawBlockLine(120 + x,100,115 + x,103);
        can.DrawBlockLine(75 + x,80,75 + x,90);
        can.DrawBlockLine(76 + x,80,76 + x,90);
        can.DrawBlockLine(77 + x,80,77 + x,90);
        can.DrawBlockLine(77 + x,90,83 + x,90);
        can.DrawBlockLine(83 + x,90,83 + x,94);
        can.DrawBlockLine(82 + x,90,82 + x,94);
        can.DrawBlockLine(112 + x,80,112 + x,90);
        can.DrawBlockLine(113 + x,80,113 + x,90);
        can.DrawBlockLine(114 + x,80,114 + x,90);
        can.DrawBlockLine(114 + x,90,108 + x,90);
        can.DrawBlockLine(108 + x,90,108 + x,94);
        can.DrawBlockLine(109 + x,90,109 + x,94);   
        }
        
        if (100 - x < 15)
        {
        can.DrawBlockLine(78 + x,7,120 + x,7);
        can.DrawBlockLine(100+ x,0,100 + x,7);
        can.DrawBlockLine(101 + x,0,101 + x,7);
        can.DrawBlockLine(99 + x,0,99 + x,7);
        can.DrawBlockLine(102 + x,0,102 + x,7);
        can.DrawBlockLine(98 + x,0,98 + x,7);
        can.DrawBlockLine(97 + x,0,97 + x,7);
        can.DrawBlockLine(103 + x,0,103 + x,7);
        can.DrawBlockLine(96 + x,0,96 + x,7);
        can.DrawBlockLine(150 + x,80,100 + x,10,Color::Yellow1);
        can.DrawBlockLine(30 + x,80,100 + x,10,Color::Yellow1);
        can.DrawBlockLine(30 + x,80,150 + x,80,Color::Yellow1);
        can.DrawBlockLine(38 + x,70,145 + x,70);
        can.DrawBlockLine(48 + x,60,138 + x,60);
        can.DrawBlockLine(60 + x,50,130 + x,50);
        can.DrawBlockLine(70 + x,50,70 + x,60);
        can.DrawBlockLine(96 + x,50,96 + x,60);
        can.DrawBlockLine(120 + x,50,120 + x,60);
        can.DrawBlockLine(79 + x,60,79 + x,70);
        can.DrawBlockLine(105 + x,60,105 + x,70);
        can.DrawBlockLine(70 + x,70,70 + x,80);
        can.DrawBlockLine(96 + x,70,96 + x,80);
        can.DrawBlockLine(120 + x,70,120 + x,80);
        can.DrawBlockEllipse(97,37,18,8);
        can.DrawBlockEllipseFilled(97,37,3,8);
        can.DrawBlockLine(63 + x,80,63 + x,100);
        can.DrawBlockLine(64 + x,80,64 + x,100);
        can.DrawBlockLine(65 + x,80,65 + x,100);
        can.DrawBlockCircleFilled(64 + x,100,5);
        can.DrawBlockLine(65 + x,100,70 + x,103);
        can.DrawBlockLine(120 + x,80,120 + x,100);
        can.DrawBlockLine(121 + x,80,121 + x,100);
        can.DrawBlockLine(122 + x,80,122 + x,100);
        can.DrawBlockCircleFilled(121 + x,100,5);
        can.DrawBlockLine(120 + x,100,115 + x,103);
        can.DrawBlockLine(75 + x,80,75 + x,90);
        can.DrawBlockLine(76 + x,80,76 + x,90);
        can.DrawBlockLine(77 + x,80,77 + x,90);
        can.DrawBlockLine(77 + x,90,83 + x,90);
        can.DrawBlockLine(83 + x,90,83 + x,94);
        can.DrawBlockLine(82 + x,90,82 + x,94);
        can.DrawBlockLine(112 + x,80,112 + x,90);
        can.DrawBlockLine(113 + x,80,113 + x,90);
        can.DrawBlockLine(114 + x,80,114 + x,90);
        can.DrawBlockLine(114 + x,90,108 + x,90);
        can.DrawBlockLine(108 + x,90,108 + x,94);
        can.DrawBlockLine(109 + x,90,109 + x,94);   
        }

        Screen pantalla = Screen::Create(Dimension::Full(), Dimension::Full());
        Element lienzo = bgcolor(Color::Green, canvas(&can));
        Render(pantalla, lienzo);
        std::cout << reset_position;
        pantalla.Print();
        reset_position = pantalla.ResetPosition(true);
        this_thread::sleep_for(0.1s);
        frame++;
    }

    return 0;
}