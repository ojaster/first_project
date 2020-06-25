////
////  something2.cpp
////  FIrst_Project
////
////  Created by Данил on 8.6.2020.
////  Copyright © 2020 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <SFML/Graphics.hpp>
//#include <iostream>
//#include <math.h>
//#include <SFML/OpenGL.hpp>
//using namespace std;
////int main(){
////    sf::RenderWindow window(sf::VideoMode(800.f,800.f),"space war");
////    sf::Sprite ship;
////    ship.setPosition(300, 300);
////    sf::Texture shipTexture;
////    shipTexture.loadFromFile("/Users/daniil/Desktop/ship.png");
////    ship.setTexture(shipTexture);
////    window.setFramerateLimit(60);
//////    sf::RectangleShape ship;
//////    ship.setPosition(300, 300);
//////    ship.setSize(sf::Vector2f(40,40));
////    sf::Event event;
////    //
////    bool up = false;
////    bool down = false;
////    bool right = false;
////    bool left = false;
////    int speed = 20;
////    //
////    bool plusangle = false;
////    bool minusangle = false;
////    //
////    //
////    sf::Clock clock;
////    sf::Time timer;
////    const float PI = 3.14159265;
////
////    int angle;
////    while (window.isOpen()) {
////        timer = clock.getElapsedTime();
////        clock.restart();
////        while (window.pollEvent(event)) {
////            if(event.type == sf::Event::Closed){
////                window.close();
////            }
////            if(event.type == sf::Event::KeyPressed){
////                switch (event.key.code) {
////                    case sf::Keyboard::W:
////                        up = true;
////                        break;
////                    case sf::Keyboard::S:
////                        down = true;
////                        break;
////                    case sf::Keyboard::D:
////                        right = true;
////                        break;
////                    case sf::Keyboard::A:
////                        left = true;
////                        break;
////                    default:
////                        break;
////
////                }
////            }
////
////            if(event.type == sf::Event::KeyReleased){
////                switch (event.key.code) {
////                    case sf::Keyboard::W:
////                        up = false;
////                        break;
////                    case sf::Keyboard::S:
////                        down = false;
////                        break;
////                    case sf::Keyboard::D:
////                        right = false;
////                        break;
////                    case sf::Keyboard::A:
////                        left = false;
////                        break;
////                    default:
////                        break;
////
////                }
////            }
////        }
////        if(up){
////            ship.setPosition(ship.getPosition().x, ship.getPosition().y - speed * timer.asMilliseconds()/100);
////        }
////        if(down){
////            ship.setPosition(ship.getPosition().x, ship.getPosition().y + speed * timer.asMilliseconds()/100);
////        }
////        if(left){
////            ship.setPosition(ship.getPosition().x - speed * timer.asMilliseconds()/100, ship.getPosition().y);
////        }
////        if(right){
////            ship.setPosition(ship.getPosition().x + speed * timer.asMilliseconds()/100, ship.getPosition().y);
////        }
////        angle = atan2(event.mouseMove.y - ship.getPosition().y, event.mouseMove.x - ship.getPosition().x );
////        angle = angle * (180/PI);
////        if(angle < 0){
////            angle = 360 - (-angle);
////        }
////        ship.rotate(angle);
////        //cout<<"up:"<<up<<"down:"<<down<<"right"<<right<<"left"<<left<<endl;
////        window.clear(sf::Color::Blue);
////        window.draw(ship);
////        window.display();
////    }
////
////}
//
