//
//  CameraController.cpp
//  PixelWorld
//
//  Created by Nils Baumgartner on 07.11.18.
//

#include "CameraController.hpp"

CameraController::~CameraController(){
    
}

void CameraController::init(int width, int height){
    this->width = width;
    this->height = height;
    this->pos = std::unique_ptr<WorldPos>(new WorldPos());
    this->pos->init(1, 1, 0, 0, 0, 0);
}
