////
////  ggg.cpp
////  FIrst_Project
////
////  Created by Данил on 30.3.2020.
////  Copyright © 2020 Daniil. All rights reserved.
////
//
//
//#include <stdio.h>
//#include <iostream>
//#include <SFML/Graphics.hpp>
//#include <SFML/OpenGL.hpp>
//#include <CoreGraphics/CoreGraphics.h>
//#include <SFML/Audio.hpp>
//using namespace std;
//bool collision(sf::RectangleShape &ball, sf::RectangleShape &bat, int &movementx, int &movementy){
//    if (bat.getGlobalBounds().intersects(ball.getGlobalBounds())){
//        return true;
//    }
//    return false;
//
//}
//int main(){
//
//  //    create the window
////       sf::RenderWindow window(sf::VideoMode(800, 600), "My window");
////    sf::Texture texture;
////    texture.loadFromFile("/Users/daniil/Desktop/images.jpeg");
////    sf::Sprite sprite;
////    sprite.setTexture(texture);
////    sprite.setColor(sf::Color::Yellow);
////    sprite.setPosition(100.f, 100.f);
////    sf::Font font;
////    font.loadFromFile("/Users/daniil/Desktop/Arial.ttf");
////    sf::Text text;
////    text.setFont(font);
////    text.setFillColor(sf::Color::Red);
////    text.setCharacterSize(24);
////    int sizex = texture.getSize().x + 100.f;
////    int sizey = texture.getSize().y + 100.f;
////    text.setPosition(sizex, sizey);
////    text.setString("hello world");
////    //  sprite.setRotation(90.f);
////    //sprite.rotate(15.f);
////    //sprite.setScale(0.5f, 2.f);
////    //sprite.scale(0.5f, 2.f);
////    sprite.setOrigin(50.f, 50.f);
////  //  sprite.setTextureRect(sf::IntRect(10, 10, 32, 32));
////   // sprite.move(sf::Vector2f(100.f,100.f));
////       // run the program as long as the window is open
////       while (window.isOpen())
////       {
////           // check all the window's events that were triggered since the last iteration of the loop
////           sf::Event event;
////           while (window.pollEvent(event))
////           {
////               // "close requested" event: we close the window
////               if (event.type == sf::Event::Closed)
////                   window.close();
////           }
////
////           // clear the window with black color
////           window.clear(sf::Color::Black);
////           window.draw(sprite);
////           window.draw(text);
////
////           // draw everything here...
////           // window.draw(...);
////
////           // end the current frame
////           window.display();
////       }
////
//    sf::Clock timer;
//    sf::Time tickrate;
//    sf::SoundBuffer buffer;
//    if(!buffer.loadFromFile("/Users/daniil/Desktop/ball — копия.wav")){
//        cout<<"lol"<<endl;
//    }
//    sf::Sound sound;
//    sound.setBuffer(buffer);
//       sf::RenderWindow window(sf::VideoMode(800,600), "PING PONG");
//    window.setFramerateLimit(60);
//    sf::RectangleShape ball;
//   // ball.setPosition(window.getSize().x/2,window.getSize().y/2);
//    int teleportx = window.getSize().x;
//    int teleporty = window.getSize().y;
//    ball.setPosition(teleportx, teleporty);
//    sf::Keyboard key;
//    sf::RectangleShape heart;
//    ball.setSize(sf::Vector2f(100.f,100.f));
//    ball.setFillColor(sf::Color::White);
//    sf::RectangleShape bat;
//    bat.setSize(sf::Vector2f(50.f,window.getSize().y/2));
//    bat.setPosition(50,0);
//    sf::Event event;
//    int objectmass = 20;
//    int movementx = 4;
//    int movementy = 4;
//
//    int speedy = 10;
//    int speedx = 10;
//       sf::RectangleShape cube;
//    //bools;
//    bool up;
//    bool down;
//    bool right;
//    bool left;
//
//    //o ball
//    int oy = ball.getPosition().y;
//    int ox = ball.getPosition().x;
//    //o bat
//    int oby = bat.getPosition().y;
//    int obx = bat.getPosition().x;
//
//    ball.setFillColor(sf::Color::Red);
//    //
//    bool stop;
//    bool reverse;
//    bool forward;
//    bool continuE;
//    //
//
//
//    int x = bat.getPosition().x;
//    int y = bat.getPosition().y;
//
//    sf::RectangleShape ball2;
//    ball2.setSize(sf::Vector2f(100,100));
//    ball2.setFillColor(sf::Color::Blue);
//    while(window.isOpen()){
//        tickrate = timer.restart();
//        while(window.pollEvent(event)){
//            if(event.type == sf::Event::Closed){
//                window.close();
//            }
//            if(event.type == sf::Event::KeyPressed){
//                switch (event.key.code) {
//                    case sf::Keyboard::W:
//                        up = true;
//                        break;
//                    case sf::Keyboard::S:
//                        down = true;
//                        break;
//                    case sf::Keyboard::A:
//                        left = true;
//                        break;
//                    case sf::Keyboard::D:
//                        right = true;
//                        break;
//                    case sf::Keyboard::Space:
//                        stop = !stop;
//                        break;
//                    case sf::Keyboard::Left:
//                        reverse = true;
//                        break;
//                    case sf::Keyboard::Right:
//                        forward = true;
//                        break;
//
//
//                }
//            }
//
//            if(event.type == sf::Event::KeyReleased){
//                switch (event.key.code) {
//                    case sf::Keyboard::W:
//                        up = false;
//                        break;
//                    case sf::Keyboard::S:
//                        down = false;
//                        break;
//                    case sf::Keyboard::A:
//                        left = false;
//                        break;
//                    case sf::Keyboard::D:
//                        right = false;
//                        break;
//                    case sf::Keyboard::Left:
//                        reverse = false;
//                        break;
//
//
//                }
//            }
//        }
//
//
//
////        int mousex = event.mouseMove.x;
////        int mousey = event.mouseMove.y;
////        ball.setPosition(mousex-ball.getLocalBounds().width/2, mousey-ball.getLocalBounds().height/2);
//      //  ball.setPosition(movementx+window.getSize().x/2,movementy+window.getSize().y/2);
//        if(!collision(ball, bat, movementx, movementy)){
//            if(!stop){
//                if(!reverse){
//                    ball.setPosition(ball.getPosition().x+movementx, ball.getPosition().y+movementy);
//                }else{
//                    ball.setPosition(ball.getPosition().x-movementx, ball.getPosition().y-movementy);
//                }
//            }
//        }else{
//            //ball
//            int oldBTop = oy;
//            int oldBBottom = oy + ball.getGlobalBounds().height;
//            int oldBleft = ox;
//            int oldBRight = ox + ball.getLocalBounds().width;
//
//            int BTop = ball.getPosition().y;
//            int BBottom = ball.getPosition().y + ball.getGlobalBounds().height;
//            int Bleft = ball.getPosition().x;
//            int BRight = ball.getPosition().x + ball.getLocalBounds().width;
//            //bat
//            int Top = bat.getPosition().y;
//            int Bottom = bat.getPosition().y + bat.getGlobalBounds().height;
//            int left = bat.getPosition().x;
//            int Right = bat.getPosition().x + bat.getLocalBounds().width;
//            //bat
//            int OTop = oby;
//            int OBottom = oby + bat.getGlobalBounds().height;
//            int Oleft = obx;
//            int ORight = obx + bat.getLocalBounds().width;
//            //The bug is in ox and oy they shouldn't not be intialized at last colisions, because they can't predict where they will go
//            if (Bottom >= BTop && OBottom < oldBTop) {//bat,ball && bat, ball
////                cout<<"Oball:  "<<" oldL:"<<oldBleft<<" oldR:"<<oldBRight<<" oldT"<<oldBTop<<" oldB:"<<oldBBottom<<endl;
////                cout<<"Cball:  "<<" L:"<<Bleft<<" R:"<<BRight<<" T"<<BTop<<" B:"<<BBottom<<endl;
////                cout<<"----"<<endl;
////                cout<<"Obat:  "<<" oldL:"<<Oleft<<" oldR:"<<ORight<<" oldT"<<OTop<<" oldB:"<<OBottom<<endl;
////                cout<<"Cbat:  "<<" L:"<<left<<" R:"<<Right<<" T"<<Top<<" B:"<<Bottom<<endl;
////
//                cout<<" moovementy:"<<movementy<<endl;
//                cout<<" moovementx:"<<movementx<<endl;
//                cout<<"BOTTOM"<<endl;
//                ball.setPosition(ball.getPosition().x,Bottom+1);
//                bat.setFillColor(sf::Color::Blue);
//                movementy = -movementy;
//
//            } else if (Top <= BBottom && OTop > oldBBottom) {
////                cout<<"Oball:  "<<" oldL:"<<oldBleft<<" oldR:"<<oldBRight<<" oldT"<<oldBTop<<" oldB:"<<oldBBottom<<endl;
////                cout<<"Cball:  "<<" L:"<<Bleft<<" R:"<<BRight<<" T"<<BTop<<" B:"<<BBottom<<endl;
////                cout<<"----"<<endl;
////                cout<<"Obat:  "<<" oldL:"<<Oleft<<" oldR:"<<ORight<<" oldT"<<OTop<<" oldB:"<<OBottom<<endl;
////                cout<<"Cbat:  "<<" L:"<<left<<" R:"<<Right<<" T"<<Top<<" B:"<<Bottom<<endl;
//                cout<<" moovementy:"<<movementy<<endl;
//                cout<<" moovementx:"<<movementx<<endl;
//                cout<<"TOP"<<endl;
//                ball.setPosition(ball.getPosition().x, Top-ball.getLocalBounds().height-1);
//                bat.setFillColor(sf::Color::Yellow);
//                movementy = -movementy;
//            } else if (Right >= Bleft && ORight < oldBleft) {
////               cout<<"Oball:  "<<" oldL:"<<oldBleft<<" oldR:"<<oldBRight<<" oldT"<<oldBTop<<" oldB:"<<oldBBottom<<endl;
////                cout<<"Cball:  "<<" L:"<<Bleft<<" R:"<<BRight<<" T"<<BTop<<" B:"<<BBottom<<endl;
////                cout<<"----"<<endl;
////                cout<<"Obat:  "<<" oldL:"<<Oleft<<" oldR:"<<ORight<<" oldT"<<OTop<<" oldB:"<<OBottom<<endl;
////                cout<<"Cbat:  "<<" L:"<<left<<" R:"<<Right<<" T"<<Top<<" B:"<<Bottom<<endl;
//                cout<<" moovementy:"<<movementy<<endl;
//                cout<<" moovementx:"<<movementx<<endl;
//                cout<<"RIGHT"<<endl;
//              ball.setPosition(Right+1,ball.getPosition().y);
//                bat.setFillColor(sf::Color::Red);
//                movementx = -movementx;
//
//
//            } else if (left <= BRight && Oleft > oldBRight) {
////                cout<<"Oball:  "<<" oldL:"<<oldBleft<<" oldR:"<<oldBRight<<" oldT"<<oldBTop<<" oldB:"<<oldBBottom<<endl;
////                cout<<"Cball:  "<<" L:"<<Bleft<<" R:"<<BRight<<" T"<<BTop<<" B:"<<BBottom<<endl;
////                cout<<"----"<<endl;
////                cout<<"Obat:  "<<" oldL:"<<Oleft<<" oldR:"<<ORight<<" oldT"<<OTop<<" oldB:"<<OBottom<<endl;
////                cout<<"Cbat:  "<<" L:"<<left<<" R:"<<Right<<" T"<<Top<<" B:"<<Bottom<<endl;
//                cout<<" moovementy:"<<movementy<<endl;
//                cout<<" moovementx:"<<movementx<<endl;
//                cout<<"LEFT"<<endl;
//                ball.setPosition(left-ball.getLocalBounds().width-1,ball.getPosition().y);
//               bat.setFillColor(sf::Color::Green);
//                movementx = -movementx;
//
//            }
////            cout<<"-----------------------"<<endl;
////            cout<<" ball:"<<" width:"<<ball.getLocalBounds().width<<" height"<<ball.getLocalBounds().height<<endl;
////            cout<<" bat:"<<" width:"<<bat.getLocalBounds().width<<" height"<<bat.getLocalBounds().height<<endl;
////            cout<<"-----------------------"<<endl;
//             sound.play();
//        }
//            oby = bat.getPosition().y;
//            obx = bat.getPosition().x;
//            ox = ball.getPosition().x-movementx*2;
//            oy = ball.getPosition().y-movementy*2;
////        cout<<" ox: "<<obx<<" oy:"<<oby<<endl;
////        cout<<" x: "<<bat.getPosition().x<<" y:"<<bat.getPosition().y<<endl;
////        cout<<"-----------------------"<<endl;
//        ball2.setPosition(ox, oy);
//        if(!stop){
//                bat.setPosition(x, y);
//            if(y > 0){
//                if (up) y-=speedy;
//            }
//            if(y < window.getSize().y/2){
//                if (down) y+=speedy;
//            }
//                if (left) x-=speedx;
//                if (right) x+=speedx;
//        }
//
//
//
//        if ( ball.getPosition().x <= 0) {
//           ball.setPosition(0, ball.getPosition().y);
//            movementx = -movementx;
//            ball.setFillColor(sf::Color::Red);
//             sound.play();
//            ox = ball.getPosition().x;
//            oy = ball.getPosition().y;
//        }
//        if ( ball.getPosition().y <= 0) {
//            ball.setPosition(ball.getPosition().x, 0);
//            movementy = -movementy;
//            ball.setFillColor(sf::Color::Red);
//             sound.play();
//            ox = ball.getPosition().x;
//            oy = ball.getPosition().y;
//        }
//        if ( ball.getPosition().x + ball.getLocalBounds().width >= window.getSize().x ) {
//            ball.setPosition(window.getSize().x - ball.getLocalBounds().width, ball.getPosition().y);
//            movementx = -movementx;
//            ball.setFillColor(sf::Color::Red);
//             sound.play();
//            ox = ball.getPosition().x;
//            oy = ball.getPosition().y;
//        }
//        if ( ball.getPosition().y + ball.getLocalBounds().height >= window.getSize().y ) {
//            ball.setPosition(ball.getPosition().x, window.getSize().y - ball.getLocalBounds().height);
//            movementy = -movementy;
//            ball.setFillColor(sf::Color::Red);
//             sound.play();
//            ox = ball.getPosition().x;
//            oy = ball.getPosition().y;
//
//        }
//        if ( bat.getPosition().y <= 0) {
//            bat.setPosition(bat.getPosition().x, 0.1);
////            cout<<"collision"<<endl;
////            cout<<"y: "<<y<<endl;
//        }
//        if ( bat.getPosition().y + bat.getLocalBounds().height >= window.getSize().y ) {
//            bat.setPosition(bat.getPosition().x, window.getSize().y - bat.getLocalBounds().height+0.1);
////            cout<<"collision"<<endl;
////            cout<<"y: "<<y<<endl;
//        }
//
//       // movementy+=objectmass/2;
//        //movementx+=movementy/4;
//        window.clear(sf::Color::Black);
//        window.draw(ball);
//        window.draw(bat);
//        window.draw(ball2);
//        //window.draw(sprite);
//        window.display();
//    }
//}
