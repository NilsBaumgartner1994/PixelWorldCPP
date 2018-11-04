//
//  TileWorld.cpp
//  PixelWorld
//
//  Created by Nils Baumgartner on 04.11.18.
//

#include "TileWorld.hpp"

TileWorld::TileWorld(std::string name){
    this->name = name;
    this->chunks.insert(std::make_pair("0,0", std::unique_ptr<Chunk>(new Chunk(this,3,2))));
}

std::string TileWorld::getName(){
    return this->name;
}
