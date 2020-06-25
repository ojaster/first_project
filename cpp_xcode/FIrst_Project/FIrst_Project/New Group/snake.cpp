////
////  snake.cpp
////  FIrst_Project
////
////  Created by Данил on 31.5.2020.
////  Copyright © 2020 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <SFML/Graphics.hpp>
//#include <SFML/OpenGL.hpp>
//#include <CoreGraphics/CoreGraphics.h>
//#include <SFML/Audio.hpp>
//using namespace std;
//struct snakee{
//    sf::RectangleShape s;
//    int oldx;
//    int oldy;
//};
//int main(){
//
//    sf::Text text;
//    sf::Font font;
//    font.loadFromFile("/Users/daniil/Desktop/Arial.ttf");
//    text.setFont(font);
//    text.setCharacterSize(80);
//    text.setFillColor(sf::Color::Red);
//    text.setPosition(150, 200);
//    text.setString("Game Over!!");
//    srand(time(NULL));
//    sf::RenderWindow window(sf::VideoMode(800.f,800.f),"snake");
//    window.setFramerateLimit(60);
//    sf::Event event;
//    int limit = 100;
//    snakee snake[limit];
//    int top = 0;
//    int size = 1;
//    snake[0].s.setSize(sf::Vector2f(20,20));
//    snake[0].s.setFillColor(sf::Color::Red);
//    snake[0].s.setPosition(400,400);
//    sf::RectangleShape snakeHead;
//    snakeHead.setSize(sf::Vector2f(20,20));
//    snakeHead.setFillColor(sf::Color::Yellow);
//    snakeHead.setPosition(400,400);
//    //fruit
//    sf::RectangleShape fruit;
//    fruit.setSize(sf::Vector2f(40,40));
//    fruit.setFillColor(sf::Color::Blue);
//    fruit.setPosition(rand() % 760 + 1, rand() % 760 + 1);
//    //moovement
//    bool up = false;
//    bool down = false;
//    bool left = false;
//    bool right = false;
//    float speed = 25;
//    bool game = true;
//    //
////    sf::Clock clock;
////    sf::Time timer;
//    sf::Clock anotherClock;
//    sf::Time anotherTimer;
//    float timer;
//    float time;
//    label:{
//
//    }
//    while(window.isOpen()){
//         time = anotherClock.getElapsedTime().asSeconds();
//         anotherClock.restart();
//            timer += time;
//        while (window.pollEvent(event)) {
//            if(event.type == sf::Event::Closed){
//                window.close();
//            }
//            if(event.type == sf::Event::KeyPressed){
//                switch (event.key.code) {
//                        case sf::Keyboard::Up:
//                        if(!down){
//                            up = true;
//                            down = false;
//                            left = false;
//                            right = false;
//                        }
//                            break;
//                        case sf::Keyboard::Down:
//                        if(!up){
//                            down = true;
//                            up = false;
//                            left = false;
//                            right = false;
//                        }
//                            break;
//                        case sf::Keyboard::Left:
//                        if(!right){
//                            left = true;
//                            down = false;
//                            up = false;
//                            right = false;
//                        }
//                            break;
//                        case sf::Keyboard::Right:
//                        if(!left){
//                            right = true;
//                            down = false;
//                            left = false;
//                            up = false;
//                        }
//                            break;
//                    default:
//                        break;
//                }
//               // afk = false;
//                //cout<<"up:"<<up<<" down:"<<down<<" left:"<<left<<" right:"<<right<<endl;
//            }
//        }
//      //  timer = clock.getElapsedTime();
//       // if(timer.asMilliseconds() >= 200){
////        if(up || down || left || right){
////            for(int i = 0; i< size; i++){
////                snake[i].oldx = snake[i].s.getPosition().x;
////                snake[i].oldy = snake[i].s.getPosition().y;
////            }
////        }
//        if(timer > 0.1){
//            timer = 0;
//            if(up){
//                snake[top].s.setPosition(snake[0].s.getPosition().x, snake[0].s.getPosition().y-speed);
//                for(int i = 0; i < size; i++){
//                    swap(snake[i], snake[top]);
//                }
//          //      snake[0].s.setPosition(snake[0].s.getPosition().x, snake[0].s.getPosition().y-(speed * anotherTimer.asSeconds()));
//            }else if(left){
//                snake[top].s.setPosition(snake[0].s.getPosition().x - speed, snake[0].s.getPosition().y);
//                for(int i = 0; i < size; i++){
//                   swap(snake[i], snake[top]);
//               }
//           //     snake[0].s.setPosition(snake[0].s.getPosition().x-(speed * anotherTimer.asSeconds()), snake[0].s.getPosition().y);
//            }else if(right){
//                snake[top].s.setPosition(snake[0].s.getPosition().x + speed, snake[0].s.getPosition().y);
//                for(int i = 0; i < size; i++){
//                   swap(snake[i], snake[top]);
//               }
//           //     snake[0].s.setPosition(snake[0].s.getPosition().x+(speed * anotherTimer.asSeconds()), snake[0].s.getPosition().y);
//            }else if(down){
//
//                snake[top].s.setPosition(snake[0].s.getPosition().x, snake[0].s.getPosition().y+speed);
//                for(int i = 0; i < size; i++){
//                    swap(snake[i], snake[top]);
//                }
//             //   snake[0].s.setPosition(snake[0].s.getPosition().x, snake[0].s.getPosition().y+(speed * anotherTimer.asSeconds()));
//            }
//        }
//        //    clock.restart();
////        if(up || down || left || right){
////            for(int i = 1; i< size; i++){
////                snake[i].s.setPosition(snake[i-1].oldx, snake[i-1].oldy);
////            }
//            snakeHead.setPosition(snake[0].s.getPosition().x, snake[0].s.getPosition().y);
////        }
//        //}
//
//        if(snake[0].s.getPosition().y <= 0){
//            snake[0].s.setPosition(snake[0].s.getPosition().x, window.getSize().y-20);
//            cout<<"up"<<endl;
//        }
//        if(snake[0].s.getPosition().y >= window.getSize().y){
//            snake[0].s.setPosition(snake[0].s.getPosition().x, 20);
//            cout<<"down"<<endl;
//        }
//        if(snake[0].s.getPosition().x <= 0){
//            snake[0].s.setPosition(window.getSize().x-20, snake[0].s.getPosition().y);
//            cout<<"left"<<endl;
//        }
//        if(snake[0].s.getPosition().x >= window.getSize().x){
//            snake[0].s.setPosition(20, snake[0].s.getPosition().y);
//            cout<<"right"<<endl;
//        }
//        if(snake[0].s.getGlobalBounds().intersects(fruit.getGlobalBounds())){
//            if(size == limit){
//                cout<<"GAME OVER!"<<endl;
//                break;
//            }
//             fruit.setPosition(rand() % 760 + 1, rand() % 760 + 1);
//            top++;
//            size++;
//            snake[top].s.setSize(sf::Vector2f(20,20));
//            snake[top].s.setFillColor(sf::Color::Red);
//         //   snake[top].s.setPosition(snake[top-1].oldx,snake[top-1].oldy);
//            if(up){
//                snake[top].s.setPosition(snake[top-1].s.getPosition().x, snake[top-1].s.getPosition().y+speed);
//            }else if(down){
//                 snake[top].s.setPosition(snake[top-1].s.getPosition().x, snake[top-1].s.getPosition().y-speed);
//            }else if(left){
//                snake[top].s.setPosition(snake[top-1].s.getPosition().x+speed, snake[top-1].s.getPosition().y);
//            }else if(right){
//               snake[top].s.setPosition(snake[top-1].s.getPosition().x-speed, snake[top-1].s.getPosition().y);
//            }
//
//        }
//        for(int i = 1; i< size; i++){
//            if(snakeHead.getGlobalBounds().intersects(snake[i].s.getGlobalBounds())/*snakeHead.getPosition().x == snake[i].s.getPosition().x && snakeHead.getPosition().y == snake[i].s.getPosition().y*/){
//                snake[i].s.setFillColor(sf::Color::Green);
//                game = false;
//            }
//        }
//        if(!game){
//            label2:{
//                    window.clear(sf::Color::White);
//                    if(event.key.code == sf::Keyboard::Space){
//                        top = 0;
//                        size = 1;
//                        game = true;
//                        goto label;
//                    }if(event.type == sf::Event::Closed || event.key.code == sf::Keyboard::Escape){
//                        window.close();
//                    }
//                    window.draw(text);
//                    window.display();
//            }
//            goto label2;
//        }
//        window.clear(sf::Color::Black);
//        for(int i = 0; i < size; i++){
//            window.draw(snake[i].s);
//        }
//        window.draw(fruit);
//        window.draw(snakeHead);
//        window.display();
//
//    }
//
//}
