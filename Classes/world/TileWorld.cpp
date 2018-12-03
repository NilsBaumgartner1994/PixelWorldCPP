//
//  TileWorld.cpp
//  PixelWorld
//
//  Created by Nils Baumgartner on 04.11.18.
//

#include "TileWorld.hpp"
#include <iostream>

using namespace std;

TileWorld::~TileWorld(){
    cout << "TileWorld is being deleted: " << endl;
}

TileWorld::TileWorld(std::string name, std::unordered_map <std::string, std::unique_ptr<cocos2d::Sprite>>* map){
    this->name = name;
    this->chunks.insert(std::make_pair("0,0", std::unique_ptr<Chunk>(new Chunk(this,3,2,map))));
    this->human.init(0, 0);
}

std::string TileWorld::getName(){
    return this->name;
}

void TileWorld::addTilesToRender(cocos2d::Layer* layer, std::unordered_map <std::string, std::unique_ptr<cocos2d::Sprite>>* map){
    chunks["0,0"]->addTilesToRender(layer, map);
}
