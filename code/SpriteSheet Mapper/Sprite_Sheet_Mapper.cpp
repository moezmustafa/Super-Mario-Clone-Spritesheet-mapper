
#include "SFML/Graphics.hpp"
#include <iostream>
#include <fstream>
using namespace sf; // SFML namespace
using namespace std;

int WindowWidth = 1000;
int WindowHeight = 700;


float  x;
float  y;

int w = 16;
int h = 16;

int ReSizeVal1 = 4;
int ReSizeVal2 = 4;


int main()
{
    RenderWindow window(VideoMode(WindowWidth, WindowHeight), "Mapping Engine");


    Texture tilemap;
    tilemap.loadFromFile("C:/Users/moeez/Desktop/Sprite Mapping Engine/Project2/data files/images/tileset.png");

    Sprite tilemapSprite(tilemap);

    tilemapSprite.scale(ReSizeVal1, ReSizeVal2);


    Clock GameClock;


    while (window.isOpen())
    {



        float fps = GameClock.getElapsedTime().asMilSeconds();

        //keyboard events // controls goes here 


        if (Keyboard::isKeyPressed(Keyboard::Up))
        {
            y--;
        }
        if (Keyboard::isKeyPressed(Keyboard::Down))
        {
            y++;
        }
        if (Keyboard::isKeyPressed(Keyboard::Left))
        {
            x--;
        }
        if (Keyboard::isKeyPressed(Keyboard::Right))
        {
            x++;
        }




        //zoom in and out
        // if (Keyboard::isKeyPressed(Keyboard::A))
        // {
        //     ReSizeVal1 += 1;

        // }
        // if (Keyboard::isKeyPressed(Keyboard::Z))
        // {
        //     ReSizeVal1 -= 1;
        // }

          if (Keyboard::isKeyPressed(Keyboard::A))
        {
            ReSizeVal1 ++;
            ReSizeVal2 ++;


        }
        if (Keyboard::isKeyPressed(Keyboard::Z))
        {
            ReSizeVal1 --;
            ReSizeVal2 --;
        }
        


        // save the 
        if (Keyboard::isKeyPressed(Keyboard::Space))
        {
            ofstream myfile;
            myfile.open("C:/Users/moeez/Desktop/Sprite Mapping Engine/Project2/data files/save.txt");
            myfile << "value of x is " << -1 *(x /  4) << endl;
            myfile << "value of y is " << -1 *(y /  4) << endl;
            myfile << endl;
            myfile << "value of w is " << w << endl;
            myfile << "value of h is " << h << endl;
            myfile << endl;
            myfile << "value of ReSizeVal1 is " << ReSizeVal1 << endl;
            myfile << "value of ReSizeVal2 is " << ReSizeVal2 << endl;
        }




        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
            {
                window.close();

            }
        }

        window.clear();

        window.draw(tilemapSprite);
        tilemapSprite.move(x * fps , y * fps ); // setting the position of the sprite 
        window.display();

    }


}