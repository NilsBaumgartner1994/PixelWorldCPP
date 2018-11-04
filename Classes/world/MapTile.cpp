//
//  MapTile.cpp
//  PixelWorld
//
//  Created by Nils Baumgartner on 04.11.18.
//

#include "MapTile.hpp"
#include <iostream>

using namespace std;

MapTile::~MapTile(){
    //cout << "MapTile: " << this->localX << " " << localY << " is being deleted: " << endl;
}

void MapTile::init(Chunk* chunk, int localX, int localY){
    this->chunk = chunk;
    this->localX = localX;
    this->localY = localY;
}
