#include <SFML/Graphics.hpp>
using namespace sf;

int main()
{
    RenderWindow window(VideoMode(300,300), "PuzzleGAME");

    int a = 0, b = 100, c = 200;
    int x = 2, y = 2;

    int photo[3][3];

    photo[0][0] = 1;
    photo[0][1] = 2;
    photo[0][2] = 3;
    photo[1][0] = 4;
    photo[1][1] = 5;
    photo[1][2] = 6;
    photo[2][0] = 7;
    photo[2][1] = 8;
    photo[2][2] = 9;

    Texture p;
    p.loadFromFile("/home/yevhenii/Desktop/studingCode/CodeC++/PuzzleGame/cpluplus.jpg");
    Sprite s(p);
    Sprite s1(p);
    Sprite s2(p);
    Sprite s3(p);
    Sprite s4(p);
    Sprite s5(p);
    Sprite s6(p);
    Sprite s7(p);
    Sprite s8(p);
    Sprite s9(p);
    Sprite temp(p);

    s5.setTextureRect(IntRect(0,0,100,100));
    s8.setTextureRect(IntRect(100,0,100,100));
    s6.setTextureRect(IntRect(200,0,100,100));
    s4.setTextureRect(IntRect(0,100,100,100));
    s7.setTextureRect(IntRect(100,100,100,100));
    s3.setTextureRect(IntRect(200,100,100,100));
    s1.setTextureRect(IntRect(0,200,100,100));
    s2.setTextureRect(IntRect(100,200,100,100));
    s9.setTextureRect(IntRect(200,200,100,100));
    temp.setTextureRect(IntRect(500,600,100,100));

    s1.setPosition(a,a);
    s2.setPosition(b,a);
    s3.setPosition(c,a);
    s4.setPosition(a,b);
    s5.setPosition(b,b);
    s6.setPosition(c,b);
    s7.setPosition(a,c);
    s8.setPosition(b,c);
    s9.setPosition(c,c);

    while (window.isOpen())
    {
        s1.setPosition(a,a);
        s2.setPosition(b,a);
        s3.setPosition(c,a);
        s4.setPosition(a,b);
        s5.setPosition(b,b);
        s6.setPosition(c,b);
        s7.setPosition(a,c);
        s8.setPosition(b,c);
        s9.setPosition(c,c);

        Event e;

            while (window.pollEvent(e))
            {
                if (e.type == Event::Closed)
                    window.close();

                window.clear();
                window.draw(s1);
                window.draw(s2);
                window.draw(s3);
                window.draw(s4);
                window.draw(s5);
                window.draw(s6);
                window.draw(s7);
                window.draw(s8);
                window.draw(s9);
                window.display();
            }
////////////////////////////////////////9
            if (e.key.code == Keyboard::S && photo[x][y] == 9)
            {
                s9 = temp;
                s9 = s6;
                s6 = temp;
                x = 1; y = 2;
            }

            if (e.key.code == Keyboard::D && photo[x][y] == 9)
            {
                s9 = temp;
                s9 = s8;
                s8 = temp;
                x = 2; y = 1;
            }
/////////////////////////////////////////8
            if (Keyboard::isKeyPressed(Keyboard::A) && photo [x][y] == 8)
            {
                s8 = temp;
                s8 = s9;
                s9 = temp;
                x = 2; y = 2;
            }

            if (Keyboard::isKeyPressed(Keyboard::D) && photo[x][y] == 8)
            {
                s8 = temp;
                s8 = s7;
                s7 = temp;
                x = 2; y = 0;
            }

            if (e.key.code == Keyboard::S && photo[x][y] == 8)
            {
                s8 =temp;
                s8 = s5;
                s5 = temp;
                x = 1; y = 1;
            }
////////////////////////////////////////7
            if (e.key.code == Keyboard::S && photo[x][y] == 7)
            {
                s7 =temp;
                s7 = s4;
                s4 = temp;
                x = 1; y = 0;
            }

            if (e.key.code == Keyboard::A && photo[x][y] == 7)
            {
                s7 = temp;
                s7 = s8;
                s8 = temp;
                x = 2; y = 1;
            }
////////////////////////////////////////6
            if (Keyboard::isKeyPressed(Keyboard::W)&& photo[x][y] == 6)
            {
                s6 = temp;
                s6 = s9;
                s9 = temp;
                x = 2; y = 2;
            }

            if(Keyboard::isKeyPressed(Keyboard::S) && photo[x][y] == 6)
            {
                s6 = temp;
                s6 = s3;
                s3 = temp;
                x = 0; y = 2;
            }

            if (e.key.code == Keyboard::D && photo[x][y] == 6)
            {
                s6 = temp;
                s6 = s5;
                s5 = temp;
                x = 1; y = 1;
            }
////////////////////////////////////5
        if (Keyboard::isKeyPressed(Keyboard::W)&& photo[x][y] == 5)
        {
            s5 = temp;
            s5 = s8;
            s8 = temp;
            x = 2; y = 1;
        }

        if(Keyboard::isKeyPressed(Keyboard::S) && photo[x][y] == 5)
        {
            s5 = temp;
            s5 = s2;
            s2 = temp;
            x = 0; y = 1;
        }

        if (Keyboard::isKeyPressed(Keyboard::D) && photo[x][y] == 5)
        {
            s5 = temp;
            s5 = s4;
            s4 = temp;
            x = 1; y = 0;
        }

        if (Keyboard::isKeyPressed(Keyboard::A) && photo[x][y] == 5)
        {
            s5 = temp;
            s5 = s6;
            s6 = temp;
            x = 1; y = 2;
        }
//////////////////////////////////4
        if (Keyboard::isKeyPressed(Keyboard::W)&& photo[x][y] == 4)
        {
            s4 = temp;
            s4 = s7;
            s7 = temp;
            x = 2; y = 0;
        }

        if(Keyboard::isKeyPressed(Keyboard::S) && photo[x][y] == 4)
        {
            s4 = temp;
            s4 = s1;
            s1 = temp;
            x = 0; y = 0;
        }
        if (e.key.code == Keyboard::A && photo[x][y] == 4)
        {
            s4 = temp;
            s4 = s5;
            s5 = temp;
            x = 1; y = 1;
        }
///////////////////////3
        if (e.key.code == Keyboard::D && photo[x][y] == 3)
        {
            s3 = temp;
            s3 = s2;
            s2 = temp;
            x = 0; y = 1;
        }
        if (e.key.code == Keyboard::W && photo[x][y] == 3)
        {
            s3 = temp;
            s3 = s6;
            s6 = temp;
            x = 1; y = 2;
        }
/////////////////////////////////2
        if (e.key.code == Keyboard::W && photo[x][y] == 2)
        {
            s2 = temp;
            s2 = s5;
            s5 = temp;
            x = 1; y = 1;
        }

        if (Keyboard::isKeyPressed(Keyboard::A) && photo[x][y] == 2)
        {
            s2 = temp;
            s2 = s3;
            s3 = temp;
            x = 0; y = 2;
        }
        if (Keyboard::isKeyPressed(Keyboard::D) && photo[x][y] == 2)
        {
            s2 = temp;
            s2 = s1;
            s1 = temp;
            x = 0; y = 0;
        }
///////////////////////////////1
        if (e.key.code == Keyboard::W && photo[x][y] == 1)
        {
            s1 = temp;
            s1 = s4;
            s4 = temp;
            x = 1; y = 0;
        }

        if (e.key.code == Keyboard::A && photo[x][y] == 1)
        {
            s1 = temp;
            s1 = s2;
            s2 = temp;
            x = 0; y = 1;
        }

    window.clear();
        window.draw(s1);
        window.draw(s2);
        window.draw(s3);
        window.draw(s4);
        window.draw(s5);
        window.draw(s6);
        window.draw(s7);
        window.draw(s8);
        window.draw(s9);
        window.display();
    }
}