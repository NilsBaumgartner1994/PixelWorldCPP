//
//  Human.cpp
//  PixelWorld
//
//  Created by Nils Baumgartner on 06.11.18.
//

#include "Human.hpp"

Human::~Human(){
    //cout << "MapTile: " << this->localX << " " << localY << " is being deleted: " << endl;
}

void Human::init(int globalX, int globalY){
    this->globalX = globalX;
    this->globalY = globalY;
}
