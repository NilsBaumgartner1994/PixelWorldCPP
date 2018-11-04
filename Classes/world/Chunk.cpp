//
//  Chunk.cpp
//  PixelWorld
//
//  Created by Nils Baumgartner on 04.11.18.
//

#include "Chunk.hpp"
#include <iostream>

using namespace std;


Chunk::~Chunk(){
    //cout << "Chunk is being deleted: " << this->globalX << " " << this->globalY << endl;
}

Chunk::Chunk(TileWorld* world, int globalX, int globalY){
    this->world = world;
    this->globalX = globalX;
    this->globalY = globalY;
    
    for(int x=0; x<32; x++){
        for(int y=0; y<32; y++){
            this->tiles[x][y].init(this, x, y);
        }
    }
    
    cout << "Specific Chunk Constructor" << endl;
}
