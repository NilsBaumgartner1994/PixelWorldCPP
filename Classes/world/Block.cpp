//
//  Block.cpp
//  PixelWorld
//
//  Created by Nils Baumgartner on 04.11.18.
//

#include "Block.hpp"

Block::~Block(){
    
}

void Block::init(int id,std::unordered_map <std::string, std::unique_ptr<cocos2d::Sprite>>* map){
    this->id = id;
    this->sprite = cocos2d::Sprite::create("tiles/grass.png");
}
