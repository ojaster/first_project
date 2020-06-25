////
////  pictureDraw.cpp
////  FIrst_Project
////
////  Created by Данил on 02/12/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <SFML/Graphics.hpp>
//int main(){
//    sf::Texture tex;
//    tex.loadFromFile("/Users/daniil/Desktop/B04284_01_04.png");
//    sf::RenderWindow window(sf::VideoMode(2880, 1080), "15");
//    sf::Sprite sp(tex);
//    window.setFramerateLimit(60);
//    sf::Event event;
//     while (window.isOpen()){
//            while (window.pollEvent(event)){
//                if (event.type == sf::Event::Closed){
//                window.close();
//                }
//                if(event.key.code == sf::Keyboard::Escape){
//                    window.close();
//                }
//                if(event.key.code == sf::Keyboard::Up){
//                    sf::Texture temp;
//                    temp.loadFromFile("/Users/daniil/Desktop/kamado-nezuko-oboi-2880x1080-25963_89.png");
//                    sp.setTexture(temp);
//                    
//                }
//                
//            }
//         window.draw(sp);
//         window.display();
//    }
////      sf::RenderWindow window(sf::VideoMode(2880,1080),
////        "Bouncing mushroom.");
////
////      sf::Texture mushroomTexture;
////      mushroomTexture.loadFromFile("/Users/daniil/Desktop/kamado-nezuko-oboi-2880x1080-25963_89.png");
////      sf::Sprite mushroom(mushroomTexture);
//////      sf::Vector2u size = mushroomTexture.getSize();
//////      mushroom.setOrigin(size.x / 2, size.y / 2);
//////      sf::Vector2f increment(0.4f, 0.4f);
////       sf::Event event;
////
////    while(window.isOpen()){
////        while(window.pollEvent(event)){
////          if(event.type == sf::Event::Closed){
////            window.close();
////          }
////        }
////
//////        if((mushroom.getPosition().x + (size.x / 2) >
//////          window.getSize().x && increment.x > 0) ||
//////          (mushroom.getPosition().x - (size.x / 2) < 0 &&
//////          increment.x < 0))
//////        {
//////            // Reverse the direction on X axis.
//////            increment.x = -increment.x;
//////        }
////
//////        if((mushroom.getPosition().y + (size.y / 2) >
//////          window.getSize().y && increment.y > 0) ||
//////          (mushroom.getPosition().y - (size.y / 2) < 0 &&
//////          increment.y < 0))
//////        {
//////             // Reverse the direction on Y axis.
//////            increment.y = -increment.y;
//////        }
//////
//////        mushroom.setPosition(mushroom.getPosition() + increment);
////
////        window.clear(sf::Color(16,16,16,255)); // Dark gray.
////        window.draw(mushroom); // Drawing our sprite.
////        window.display();
////      }
//}
//
