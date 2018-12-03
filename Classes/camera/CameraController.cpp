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
}
