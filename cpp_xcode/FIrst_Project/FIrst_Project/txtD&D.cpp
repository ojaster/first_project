////
////  Defender.cpp
////  FIrst_Project
////
////  Created by Данил on 25/12/2018.
////  Copyright © 2018 Daniil. All rights reserved.
////
////
//#include <stdio.h>
//#include <iostream>
//#include <stdio.h>
//#include <stdlib.h>
//#include <iostream>
//#include <time.h>
//#include <unistd.h>
//#include <term.h>
//using namespace std;
//int const n=10;
//class DAndD{
//private:
//    string Magister;
//    int choose;
//
//    int map[n][n];
//    int x;
//    int y;
//    int fraG=0;
//    int heroHealth=5;
//    int heroArmour=0;
//    int moves=0;
//    char flyRegistor;
//    int monsters[n][n];
//    int monster=0;
//    int Class;
//    int saveMonster=monster;
//    //necromance
//    int necromanWeaponType=0;
//    int necromanceChoesType=0;
//    int necromancePantsType=0;
//    int necromanceArmourType=0;
//    //knight
//        int knightWeapon=0;
//    int knightArmourType=0;
//    int knightChoesType=0;
//    int knightPantsType=0;
//    //mage
//    int wandType=0;
//    int mageArmourType=0;
//    int magePantsType=0;
//    int mageChoeType=0;
//    //warrior
//    int warriorChoesType=0;
//    int warriorPantsType=0;
//    int warriorArmourType=0;
//    int wariorWeapon=0;
//    int fightChoose;
//    int monsterHealth=5;
//    int mageTurns=0;
//    int monsterDamage=0;
//    //xp
//    int xp=0;
//public:
//    void inventeryWay(){
//        int inventory=0;
//        if(Class == 1){
//            //mage
//        while(inventory<=4){
//                cout<<"Inventory"<<endl;
//                cout<<"1 = weapon"<<endl;
//                cout<<"2 = armour"<<endl;
//                cout<<"3 = pants"<<endl;
//                cout<<"4 = choes"<<endl;
//            if(inventory==1){
//                wandStats();
//                cout<<endl;
//                cout<<"Inventory"<<endl;
//                cout<<"1 = weapon"<<endl;
//                cout<<"2 = armour"<<endl;
//                cout<<"3 = pants"<<endl;
//                cout<<"4 = choes"<<endl;
//            }
//            if(inventory==2){
//                mageArmour();
//                cout<<endl;
//                cout<<"Inventory"<<endl;
//                cout<<"1 = weapon"<<endl;
//                cout<<"2 = armour"<<endl;
//                cout<<"3 = pants"<<endl;
//                cout<<"4 = choes"<<endl;
//            }
//            if(inventory==3){
//                magePants();
//                cout<<endl;
//                cout<<"Inventory"<<endl;
//                cout<<"1 = weapon"<<endl;
//                cout<<"2 = armour"<<endl;
//                cout<<"3 = pants"<<endl;
//                cout<<"4 = choes"<<endl;
//            }
//            if(inventory==4){
//                mageChoes();
//                cout<<endl;
//                cout<<"Inventory"<<endl;
//                cout<<"1 = weapon"<<endl;
//                cout<<"2 = armour"<<endl;
//                cout<<"3 = pants"<<endl;
//                cout<<"4 = choes"<<endl;
//            }
//            do{
//                cin>>inventory;
//            }while(inventory>4 || inventory<0);
//            if(inventory==0){
//                break;
//            }
//            }
//        statCheck();
//        }
//
//        if(Class == 4){
//            //necromance
//            while(inventory<=4){
//                cout<<"Inventory"<<endl;
//                cout<<"1 = weapon"<<endl;
//                cout<<"2 = armour"<<endl;
//                cout<<"3 = pants"<<endl;
//                cout<<"4 = choes"<<endl;
//                if(inventory==1){
//                    NecromanceWeapons();
//                    cout<<endl;
//                    cout<<"Inventory"<<endl;
//                    cout<<"1 = weapon"<<endl;
//                    cout<<"2 = armour"<<endl;
//                    cout<<"3 = pants"<<endl;
//                    cout<<"4 = choes"<<endl;
//                }
//                if(inventory==3){
//                    necromancePants();
//                    cout<<endl;
//                    cout<<"Inventory"<<endl;
//                    cout<<"1 = weapon"<<endl;
//                    cout<<"2 = armour"<<endl;
//                    cout<<"3 = pants"<<endl;
//                    cout<<"4 = choes"<<endl;
//                }
//                if(inventory==2){
//                    necromanceArmour();
//                    cout<<endl;
//                    cout<<"Inventory"<<endl;
//                    cout<<"1 = weapon"<<endl;
//                    cout<<"2 = armour"<<endl;
//                    cout<<"3 = pants"<<endl;
//                    cout<<"4 = choes"<<endl;
//                }
//                if(inventory==4){
//                    necromanceChoes();
//                    cout<<endl;
//                    cout<<"Inventory"<<endl;
//                    cout<<"1 = weapon"<<endl;
//                    cout<<"2 = armour"<<endl;
//                    cout<<"3 = pants"<<endl;
//                    cout<<"4 = choes"<<endl;
//                }
//                do{
//                    cin>>inventory;
//                }while(inventory>4 || inventory<0);
//                if(inventory==0){
//                    break;
//                }
//            }
//            statCheck();
//        }
//
//        if(Class == 2){
//            //warrior
//            while(inventory<=4){
//                cout<<"Inventory"<<endl;
//                cout<<"1 = weapon"<<endl;
//                cout<<"2 = armour"<<endl;
//                cout<<"3 = pants"<<endl;
//                cout<<"4 = choes"<<endl;
//                if(inventory==1){
//                    wariorWeapons();
//                    cout<<endl;
//                    cout<<"Inventory"<<endl;
//                    cout<<"1 = weapon"<<endl;
//                    cout<<"2 = armour"<<endl;
//                    cout<<"3 = pants"<<endl;
//                    cout<<"4 = choes"<<endl;
//                }
//                if(inventory==2){
//                    warriorArmour();
//                    cout<<endl;
//                    cout<<"Inventory"<<endl;
//                    cout<<"1 = weapon"<<endl;
//                    cout<<"2 = armour"<<endl;
//                    cout<<"3 = pants"<<endl;
//                    cout<<"4 = choes"<<endl;
//                }
//                if(inventory==4){
//                    warriorChoes();
//                    cout<<endl;
//                    cout<<"Inventory"<<endl;
//                    cout<<"1 = weapon"<<endl;
//                    cout<<"2 = armour"<<endl;
//                    cout<<"3 = pants"<<endl;
//                    cout<<"4 = choes"<<endl;
//                }
//                if(inventory==3){
//                    warriorPants();
//                    cout<<endl;
//                    cout<<"Inventory"<<endl;
//                    cout<<"1 = weapon"<<endl;
//                    cout<<"2 = armour"<<endl;
//                    cout<<"3 = pants"<<endl;
//                    cout<<"4 = choes"<<endl;
//                }
//                do{
//                    cin>>inventory;
//                }while(inventory>4 || inventory<0);
//                if(inventory==0){
//                    break;
//                }
//            }
//            statCheck();
//        }
//
//        if(Class == 3){
//            //knight
//            while(inventory<=4){
//                cout<<"Inventory"<<endl;
//                cout<<"1 = weapon"<<endl;
//                cout<<"2 = armour"<<endl;
//                cout<<"3 = pants"<<endl;
//                cout<<"4 = choes"<<endl;
//                if(inventory==1){
//                    knightWeapons();
//                    cout<<endl;
//                    cout<<"Inventory"<<endl;
//                    cout<<"1 = weapon"<<endl;
//                    cout<<"2 = armour"<<endl;
//                    cout<<"3 = pants"<<endl;
//                    cout<<"4 = choes"<<endl;
//                }
//                if(inventory==2){
//                    knightArmour();
//                    cout<<endl;
//                    cout<<"Inventory"<<endl;
//                    cout<<"1 = weapon"<<endl;
//                    cout<<"2 = armour"<<endl;
//                    cout<<"3 = pants"<<endl;
//                    cout<<"4 = choes"<<endl;
//                }
//                if(inventory==3){
//                    knightPants();
//                    cout<<endl;
//                    cout<<"Inventory"<<endl;
//                    cout<<"1 = weapon"<<endl;
//                    cout<<"2 = armour"<<endl;
//                    cout<<"3 = pants"<<endl;
//                    cout<<"4 = choes"<<endl;
//                }
//                if(inventory==4){
//                    knightChoes();
//                    cout<<endl;
//                    cout<<"Inventory"<<endl;
//                    cout<<"1 = weapon"<<endl;
//                    cout<<"2 = armour"<<endl;
//                    cout<<"3 = pants"<<endl;
//                    cout<<"4 = choes"<<endl;
//                }
//                do{
//                    cin>>inventory;
//                }while(inventory>4 || inventory<0);
//                if(inventory==0){
//                    break;
//                }
//            }
//            statCheck();
//        }
//    }
//    //mage
//    void mageChoes(){
//        if(mageChoeType==1){
//            cout<<"mage Choes are kaloshi"<<endl;
//            cout<<"|  |   |  |"<<endl;
//            cout<<"|  |   |  |"<<endl;
//            cout<<"/  |   /  |"<<endl;
//            cout<<"----   ----"<<endl;
//            cout<<"Choes name: UnderLakopta"<<endl;
//            cout<<"Defence: 0.5"<<endl;
//        }
//    }
//    void magePants(){
//        if(magePantsType==1){
//            cout<<"mage pants are ..."<<endl;
//            cout<<"|  |   |  |"<<endl;
//            cout<<"|__|   |__|"<<endl;
//            cout<<"|  |   |  |"<<endl;
//            cout<<"|  |   |  |"<<endl;
//            cout<<"name of pants: mage pants"<<endl;
//            cout<<"Defence: 1"<<endl;
//        }
//    }
//    void mageArmour(){
//        if(mageArmourType==1){
//        cout<<"Your armour is mantia"<<endl;
//        cout<<" ____"<<endl;
//        cout<<"(    )"<<endl;
//        cout<<"|____|"<<endl;
//        cout<<"|    |"<<endl;
//        cout<<"|    |"<<endl;
//        cout<<"|    |"<<endl;
//        cout<<"mantia name: mantia lakopta"<<endl;
//        cout<<"defend: 2"<<endl;
//        }
//    }
//    void wandStats(){
//        if(wandType==1){
//            cout<<"your Weapon is a wand "<<endl;
//            cout<<endl;
//            cout<<"*"<<endl;
//            cout<<"|"<<endl;
//            cout<<"|"<<endl;
//            cout<<"|"<<endl;
//            cout<<endl;
//            cout<<"Wand name: Holy water Wand"<<endl;
//            cout<<"Power = 1"<<endl;
//            cout<<"Damage = 2"<<endl;
//            cout<<"Element Water"<<endl;
//            cout<<"Passive power: double your damage if you fight with demon"<<endl;
//        }
//
//    }
//    //mage end
//    void aboutClases(){
//        cout<<"Mage is: shooter he shoot from far"<<endl;
//        cout<<"Warrior is: slow but powerful"<<endl;
//        cout<<"Knight is: fast and light "<<endl;
//        cout<<"Necromance Is; summoner"<<endl;
//    }
//    void Magistersay(){
//        string question;
//        cout<<"Hello Player its time do choose class"<<endl;
//        do{
//            cout<<"1 = Mage"<<endl;
//            cout<<"2 = Warrior"<<endl;
//            cout<<"3 = Knight"<<endl;
//            cout<<"4 = Necromance"<<endl;
//            cout<<"do you want to know about Clases if you want write Yes else No:";
//            cin>>question;
//            if(question=="yes"){
//                aboutClases();
//            }
//            cout<<"1 = Mage"<<endl;
//            cout<<"2 = Warrior"<<endl;
//            cout<<"3 = Knight"<<endl;
//            cout<<"4 = Necromance"<<endl;
//            cout<<"choose class:";
//            cin>>choose;
//            Class=choose;
//            if(choose>4 || choose<1){
//                cout<<"Sorry. Can You try again"<<endl;
//            }
//        }while(choose>4 || choose<1);
//            statCheck();
//    }
//    //Necromance
//    void necromanceChoes(){
//        cout<<"Your Necromance Choes are vecnelsc"<<endl;
//        cout<<"   (  )  (  )"<<endl;
//        cout<<"   |  |  |  |"<<endl;
//        cout<<"   |  |  |  |"<<endl;
//        cout<<"   |  |  |  |"<<endl;
//        cout<<"   |  |  |  |"<<endl;
//        cout<<"----  |---- |"<<endl;
//        cout<<"------|-----|"<<endl;
//        cout<<"bahilis name: saunahodki"<<endl;
//        cout<<"defend: 1"<<endl;
//    }
//    void necromancePants(){
//        cout<<"Your pants are vacnelsc"<<endl;
//        cout<<"(  )  (  )"<<endl;
//        cout<<"#  #  #  #"<<endl;
//        cout<<"|  |  |  |"<<endl;
//        cout<<"|  |  |  |"<<endl;
//        cout<<"|  |  |  |"<<endl;
//        cout<<"vecnelsc name: monilatir"<<endl;
//        cout<<"Defence: 1.5"<<endl;
//    }
//    void necromanceArmour(){
//        cout<<"Your Armour is norday"<<endl;
//        cout<<"    ________"<<endl;
//        cout<<"  (          )"<<endl;
//        cout<<"  |          |"<<endl;
//        cout<<"  |          |"<<endl;
//        cout<<"  |          |"<<endl;
//        cout<<"  |          |"<<endl;
//        cout<<"  |          |"<<endl;
//        cout<<"  narday name: LRing "<<endl;
//        cout<<"Defence:0"<<endl;
//        cout<<"Power up Summon powers"<<endl;
//
//
//    }
//    void NecromanceWeapons(){
//        if(necromanWeaponType==1){
//            cout<<"your Weapon is a weapon"<<endl;
//            cout<<" #"<<endl;
//            cout<<"@ @"<<endl;
//            cout<<" - "<<endl;
//            cout<<" | "<<endl;
//            cout<<" | "<<endl;
//            cout<<" | "<<endl;
//            cout<<" | "<<endl;
//            cout<<"Stick name: One person power"<<endl;
//            cout<<"Summon power: 1-3"<<endl;
//            cout<<"Damage = 0.5"<<endl;
//            cout<<"summoned persons Demon,Baby Dragon zombi, elf"<<endl;
//            cout<<"Persons Damage: 1-5 "<<endl;
//            cout<<"persons Defence: 3-7"<<endl;
//        }
//    }
//    //Necromance end
//    //warrior
//    void wariorWeapons(){
//        if(wariorWeapon==1){
//            cout<<"your weapon is a axe and wood shield"<<endl;
//            cout<<")---("<<endl;
//            cout<<"  |  "<<endl;
//            cout<<"  |  "<<endl;
//            cout<<"  |  "<<endl;
//            cout<<"  |  "<<endl;
//            cout<<"and Shield"<<endl;
//            cout<<" -------- "<<endl;
//            cout<<"(        )"<<endl;
//            cout<<"|        |"<<endl;
//            cout<<"(        )"<<endl;
//            cout<<" -------- "<<endl;
//            cout<<"Shield name: Wooden"<<endl;
//            cout<<"Axe name Wooden killer"<<endl;
//            cout<<"Shield Def:2"<<endl;
//            cout<<"axe Damage:5"<<endl;
//            cout<<"axe Passive power: hits slowly"<<endl;
//        }
//    }
//    void warriorArmour(){
//        if(warriorArmourType==1){
//            cout<<"Your armor kaltchuga"<<endl;
//            cout<<" (___________)"<<endl;
//            cout<<"  |    |    |"<<endl;
//            cout<<"   |   |   |"<<endl;
//            cout<<"  |____|____| "<<endl;
//            cout<<" |           |"<<endl;
//            cout<<"Your armoour name is: men from steel"<<endl;
//            cout<<"defence: 3.5"<<endl;
//        }
//    }
//    void warriorPants(){
//        if(warriorPantsType==1){
//            cout<<"your Pants are shashka"<<endl;
//            cout<<"  [   ]  [   ]"<<endl;
//            cout<<"  |   |  |   |"<<endl;
//            cout<<"  |___|  |___|"<<endl;
//            cout<<"  |___|  |___|"<<endl;
//            cout<<"Your pants name is: cold Winter"<<endl;
//            cout<<"Defence: 2"<<endl;
//        }
//    }
//    void warriorChoes(){
//        if(warriorPantsType==1){
//            cout<<"your Pants are shashka"<<endl;
//            cout<<"  [   ]  [   ]"<<endl;
//            cout<<"  |   |  |   |"<<endl;
//            cout<<" _|___| _|___|"<<endl;
//            cout<<"(_____|(_____|"<<endl;
//            cout<<"Choes name is:  cold winter colection"<<endl;
//            cout<<"Defence: 1.5"<<endl;
//        }
//    }
//    //warrior end
//    //knight
//    void knightWeapons(){
//        if(knightWeapon==1){
//            cout<<"Your weapon is fork"<<endl;
//            cout<<" |"<<endl;
//            cout<<" |"<<endl;
//            cout<<" |"<<endl;
//            cout<<" |"<<endl;
//            cout<<"-|-"<<endl;
//            cout<<" |"<<endl;
//            cout<<"your Weapon name is: fork"<<endl;
//            cout<<"fork Damage:2"<<endl;
//            cout<<"passive power:very fast and light"<<endl;
//        }
//    }
//    void knightArmour(){
//        if(knightArmourType==1){
//            cout<<"your armour is odezda"<<endl;
//            cout<<"(       )"<<endl;
//            cout<<"|       |"<<endl;
//            cout<<"|       |"<<endl;
//            cout<<"|       |"<<endl;
//            cout<<" |     |"<<endl;
//            cout<<"your armour name is: fakazil"<<endl;
//            cout<<"Armour defence:2"<<endl;
//        }
//
//    }
//    void knightPants(){
//        if(knightPantsType==1){
//            cout<<"your choes is lagiten"<<endl;
//            cout<<" |   | |   |"<<endl;
//            cout<<" |   | |   |"<<endl;
//            cout<<" |   | |   |"<<endl;
//            cout<<" |___| |___|"<<endl;
//            cout<<" |   | |   |"<<endl;
//            cout<<"Your choes name is: laft"<<endl;
//            cout<<"choes defence:2"<<endl;
//        }
//    }
//    void knightChoes(){
//        if(knightChoesType==1){
//        cout<<"your choes is butzi"<<endl;
//        cout<<" |   | |   |"<<endl;
//        cout<<" |   | |   |"<<endl;
//        cout<<" |   | |   |"<<endl;
//        cout<<" |___| |___|"<<endl;
//        cout<<"|    ||    |"<<endl;
//        cout<<"Your choes name is: botz"<<endl;
//        cout<<"choes defence:1"<<endl;
//        }
//    }
//    //knight end
//    void fight(){
//        int amount = 5;
//        while(monsterHealth>0){
//            cout<<"1 : Attack"<<endl;
//            cout<<"2 : Heal"<<endl;
//            cout<<"3 : Left From fight"<<endl;
//            cout<<"4 : Show hero stats"<<endl;
//            cin>>fightChoose;
//            if(fightChoose==3){
//                displayMap();
//                doStep();
//            }
//            if(Class == 1){
//                if(fightChoose==4){
//                    cout<<"Your Health Left:"<<heroHealth<<endl;
//                    cout<<"Your Armour Left:"<<heroArmour<<endl;
//                    cout<<"Your Monster Health Left:"<<monsterHealth<<endl;
//                    cout<<"your xp:"<<xp<<endl;
//                }
//                if(wandType==1){
//                    if(fightChoose==2){
//                        cout<<"        *"<<endl;
//                        cout<<"   ( )  |"<<endl;
//                        cout<<"    | /-|"<<endl;
//                        cout<<" ___|/  |"<<endl;
//                        cout<<"    |"<<endl;
//                        cout<<"   _|_"<<endl;
//                        cout<<"  /  |"<<endl;
//                        cout<<" /   |"<<endl;
//                        cout<<"/    |"<<endl;
//                        mageTurns++;
//                        heroHealth=heroHealth+2;
//                        heroHealth--;
//                            cout<<"1 : Attack"<<endl;
//                            cout<<"3 : Left From fight"<<endl;
//                        do{
//                            cin>>fightChoose;
//                        }while(fightChoose==2 || fightChoose==4);
//                        cout<<"Your Health Left:"<<heroHealth<<endl;
//                        cout<<"Your Armour Left:"<<heroArmour<<endl;
//                        cout<<"Your Monster Health Left:"<<monsterHealth<<endl;
//                    }
//                    if(fightChoose== 1){
//                        cout<<"        *"<<endl;
//                        cout<<"   ( )  |"<<endl;
//                        cout<<"    | /-|"<<endl;
//                        cout<<" ___|/  |"<<endl;
//                        cout<<"    |"<<endl;
//                        cout<<"   _|_"<<endl;
//                        cout<<"  /  |"<<endl;
//                        cout<<" /   |"<<endl;
//                        cout<<"/    |"<<endl;
//                        mageTurns++;
//                        monsterHealth--;
//                        if(heroArmour>0){
//                            heroArmour--;
//                        }else{
//                            heroHealth--;
//                        }
//                        if(monsterHealth==0){
//                            fraG++;
//                            monster--;
//                            xp=xp+5000;
//                        }
//                        cout<<"Your Health Left:"<<heroHealth<<endl;
//                        cout<<"Your Armour Left:"<<heroArmour<<endl;
//                        cout<<"Your Monster Health Left:"<<monsterHealth<<endl;
//
//                }
//            }
//
//            }
//            if(heroHealth==0){
//                break;
//            }
//        }
//        if(monsterHealth==0){
//            cout<<"you killed monseter"<<endl;
//            switch(flyRegistor){
//                case 'w':
//                    map[x][y]=0;
//                    map[x-1][y]=2;
//                    x=x-1;
//                    displayMap();
//
//                case 'a':
//                    map[x][y]=0;
//                    map[x][y-1]=2;
//                    y=y-1;
//                    displayMap();
//                case 's':
//                    map[x][y]=0;
//                    map[x+1][y]=2;
//                    x=x+1;
//                    displayMap();
//                case 'd':
//                    map[x][y]=0;
//                    map[x][y+1]=2;
//                    y=y+1;
//                    displayMap();
//
//            }
//
//                doStep();
//        }
//    }
//    void statCheck(){
//        cout<<"Very well"<<endl;
//        if(Class==1){
//            //Mage
//            wandType=1;
//            mageArmourType=1;
//            magePantsType=1;
//            mageChoeType=1;
//            wandStats();
//            cout<<endl;
//        }
//        if(Class==4){
//            //Nec
//            necromanceArmourType=1;
//            necromancePantsType=1;
//            necromanWeaponType=1;
//            necromanceChoesType=1;
//            NecromanceWeapons();
//            cout<<endl;
//        }
//        if(Class==2){
//            //war
//            warriorArmourType=1;
//            wariorWeapon=1;
//            warriorPantsType=1;
//            warriorChoesType=1;
//            wariorWeapons();
//            cout<<endl;
//        }
//        if(Class==3){
//            //Kni
//            knightWeapon=1;
//            knightChoesType=1;
//            knightPantsType=1;
//            knightArmourType=1;
//            knightWeapons();
//            cout<<endl;
//        }
//        center();
//    }
//        void center(){
//        cout<<"do you wana go to the world or stay and watch inventory"<<endl;
//            cout<<"1 = stay and watch stats"<<endl;
//            cout<<"0 = go and watch world"<<endl;
//            cin>>choose;
//
//        if(choose == 1){
//            choose=0;
//            cout<<"inventory button is 5"<<endl;
//            cin>>choose;
//            if(choose==5){
//                inventeryWay();
//            }
//        }else{
//            firstLocationMap();
//            cout<<"stop watching = 3"<<endl;
//            cin>>choose;
//        }
//        if(choose==3){
//            srand(time(NULL));
//            fillMap();
//            createMonstters();
//            createArmour();
//            createHero();
//            displayMap();
//            doStep();
//        }
//    }
//    void firstLocationMap(){
//
//            cout<<"World 1"<<endl;
//        cout<<"()  ()  * ()()()  #"<<endl;
//        cout<<"     "<<endl;
//
//
//    }
//        void createHero(){
//                int xI;
//                int xJ;
//                do{
//
//                    xI=rand()%n;
//                    xJ=rand()%n;
//                    if(map[xI][xJ]!=1){
//                        break;
//                    }
//                }while(1);
//                 map[xI][xJ]=2;
//                x=xI;
//                y=xJ;
//            }
//            void fillMap(){
//                for(int i=0; i<n; i++){
//                    for(int j=0; j<n; j++){
//                        map[i][j]=0;
//                    }
//                }
//            }
//            void createMonstters(){
//                int const amount=5;
//                int array[amount][2];
//                for(int i=0; i<amount; i++){
//                    array[i][0]=rand()%n;
//                    array[i][1]=rand()%n;
//                }
//                for(int i=0; i<amount; i++){
//                    int xI=array[i][0];
//                    int xJ=array[i][1];
//                        map[xI][xJ]=1;
//                    if(map[xI][xJ]==1){
//                        monster++;
//                    }
//                }
//            }
//            void createArmour(){
//                int const armour=5;
//                int array[armour][2];
//                for(int i=0; i<armour; i++){
//                    array[i][0]=rand()%n;
//                    array[i][1]=rand()%n;
//                }
//                for(int i=0; i<armour; i++){
//                    int xI=array[i][0];
//                    int xJ=array[i][1];
//                    map[xI][xJ]=4;
//                }
//            }
//            void displayMap(){
//                for(int i=0; i<n; i++){
//                    for(int j=0; j<n; j++){
//                        cout<<map[i][j]<<" ";
//
//                    }
//                    cout<<endl;
//                }
//                cout<<"Your health:"<<heroHealth<<endl;
//                cout<<"Your Armour:"<<heroArmour<<endl;
//                cout<<"Your FraG:"<<fraG<<endl;
//                cout<<"Your Moves:"<<moves<<endl;
//                cout<<"Monsters Left:"<<monster<<endl;
//            }
//
//            bool checkMonsters(int i,int j){
//                if(map[i][j]==1){
//                    return true;
//                }else{
//                    return false;
//                }
//            }
//            bool checkArmour(int i,int j){
//                if(map[i][j]==4){
//                    return true;
//                }else{
//                    return false;
//                }
//            }
//            void doStep(){
//                while(heroHealth!=0){
//                    cin>>flyRegistor;
//                    switch(flyRegistor){
//                        case 'w':
//                            if(x-1>=0){
//                                moves++;
//                                bool res2=checkArmour(x-1,y);
//                                if(res2==true){
//                                    heroArmour++;
//                                }
//                                bool res=checkMonsters(x-1,y);
//                                if(res==true && heroArmour>0){
//                                    monsterHealth=5;
//                                    fight();
//                                    if(heroHealth<=0){
//                                        cout<<"Game Over!!"<<endl;
//                                        break;
//
//                                    }else if(monster==0){
//                                        cout<<"Game over!!"<<endl;
//                                        center();
//                                        break;
//
//                                    }
//
//                                }else if(res==true){
//                                    monsterHealth=5;
//                                    fight();
//                                    if(heroHealth<=0){
//                                        cout<<"Game Over!!"<<endl;
//                                        break;
//
//                                    }else if(monster==0){
//                                        cout<<"Game over!!"<<endl;
//                                        center();
//                                        break;
//
//                                    }
//
//                                }
//                                map[x][y]=0;
//                                map[x-1][y]=2;
//                                x=x-1;
//                                displayMap();
//                            }else{
//                                cout<<"You can't make step"<<endl;
//                            }
//                            break;
//                        case 'a':
//                            moves++;
//                            if(x+1>=0){
//                                bool res2=checkArmour(x,y-1);
//                                if(res2==true){
//                                    heroArmour++;
//                                }
//                                bool res=checkMonsters(x,y-1);
//                                 if(res==true && heroArmour>0){
//                                     monsterHealth=5;
//                                     fight();
//                                     if(heroHealth<=0){
//                                         cout<<"Game Over!!"<<endl;
//                                         break;
//
//                                     }else if(monster==0){
//                                         cout<<"Game over!!"<<endl;
//                                         center();
//                                         break;
//
//                                     }
//
//
//
//                                 }else if(res==true){
//                                     monsterHealth=5;
//                                     fight();
//
//                                     if(heroHealth<=0){
//                                         cout<<"Game Over!!"<<endl;
//                                         break;
//
//
//                                     }else if(monster==0){
//                                         cout<<"work"<<endl;
//                                         cout<<"Game over!!"<<endl;
//                                         center();
//                                         break;
//
//                                     }
//
//
//
//                                 }
//                                map[x][y]=0;
//                                map[x][y-1]=2;
//                                y=y-1;
//                                displayMap();
//                            }else{
//                                cout<<"You can't make step"<<endl;
//                            }
//                            break;
//                        case 's':
//                            moves++;
//                                if(x+1<=n-1){
//                                    bool res2=checkArmour(x+1,y);
//                                    if(res2==true){
//                                        heroArmour++;
//                                    }
//                                bool res=checkMonsters(x+1,y);
//                                 if(res==true && heroArmour>0){
//                                     monsterHealth=5;
//                                     fight();
//
//                                    if(heroHealth<=0){
//                                     cout<<"Game Over!!"<<endl;
//                                        break;
//
//                                    }else if(monster==0){
//                                        cout<<"Game over!!"<<endl;
//                                        center();
//                                        break;
//
//                                    }
//
//
//
//                                 }else if(res==true){
//                                     monsterHealth=5;
//                                     fight();
//                                        if(heroHealth<=0){
//                                     cout<<"Game Over!!"<<endl;
//                                     break;
//
//                                        }else if(monster==0){
//                                            cout<<"Game over!!"<<endl;
//                                            center();
//                                            break;
//
//                                        }
//
//                                 }
//
//                                map[x][y]=0;
//                                map[x+1][y]=2;
//                                x=x+1;
//                                displayMap();
//                            }else{
//                                cout<<"You can't make step"<<endl;
//                            }
//                            break;
//                        case 'd':
//                            moves++;
//                                if(y+1<=n-1){
//                                    bool res2=checkArmour(x,y+1);
//                                    if(res2==true){
//                                            heroArmour++;
//                                        }
//                                bool res=checkMonsters(x,y+1);
//                                 if(res==true && heroArmour>0){
//                                     monsterHealth=5;
//                                     fight();
//                                     if(heroHealth<=0){
//                                         cout<<"Game Over!!"<<endl;
//                                         break;
//
//                                     }else if(monster==0){
//                                         cout<<"Game over!!"<<endl;
//                                         center();
//                                         break;
//
//                                     }
//
//
//
////                                         heroArmour=heroArmour-monsterDamage;
////                                         monster--;
////                                         fraG++;
//
//                                }else if(res==true){
//                                    monsterHealth=5;
//                                    fight();
//                                    if(heroHealth<=0){
//                                        cout<<"Game Over!!"<<endl;
//                                        break;
//
//                                    }else if(monster==0){
//                                        cout<<"Game over!!"<<endl;
//                                        center();
//                                        break;
//
//                                    }
//
////                                        heroHealth=heroHealth-monsterDamage;
////                                        monster--;
////                                        fraG++;
//
//                                }
//
//                                map[x][y]=0;
//                                map[x][y+1]=2;
//                                y=y+1;
//                                displayMap();
//                            }else{
//                                cout<<"You can't make step"<<endl;
//                            }
//
//
//                    }
//
//                }
//                cout<<"Game Over!!"<<endl;
//            }
//
//};
//int main(){
//    DAndD hero;
//    hero.Magistersay();
//    hero.statCheck();
//}
