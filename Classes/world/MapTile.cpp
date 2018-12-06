//
//  MapTile.cpp
//  PixelWorld
//
//  Created by Nils Baumgartner on 04.11.18.
//

#include "MapTile.hpp"
#include <iostream>
#include <tuple>

using namespace std;

MapTile::~MapTile(){
    //cout << "MapTile: " << this->localX << " " << localY << " is being deleted: " << endl;
}

void MapTile::init(Chunk* chunk, int localX, int localY, std::unordered_map <std::string, std::unique_ptr<cocos2d::Sprite>>* map){
    this->chunk = chunk;
    this->localX = localX;
    this->localY = localY;
    this->block.init(1,map);
    this->block.pos.init(localX, localY, 0, 0, 0,0);
}

void MapTile::addTilesToRender(cocos2d::Layer* layer, std::unordered_map <std::string, std::unique_ptr<cocos2d::Sprite>>* map, CameraController* camera){
    this->block.init(1,map);
    int xP = this->block.sprite->getBoundingBox().getMaxX()*this->localX;
    int yP = this->block.sprite->getBoundingBox().getMaxY()*this->localY;
    
    this->block.sprite->setPosition(layer->getBoundingBox().getMidX()-xP, layer->getBoundingBox().getMidY()-yP);
    int screenPos[2] = {0,0};
    this->block.pos.calcScreenPos(screenPos,camera);
    this->block.sprite->setPosition(screenPos[0],screenPos[1]);
    layer->addChild(this->block.sprite,0);
}
