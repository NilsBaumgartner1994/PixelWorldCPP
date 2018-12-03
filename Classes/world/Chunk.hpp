//
//  Chunk.hpp
//  PixelWorld
//
//  Created by Nils Baumgartner on 04.11.18.
//

#ifndef Chunk_hpp
#define Chunk_hpp

#include "MapTile.hpp"
#include "cocos2d.h"

class TileWorld;
class Chunk{
public:
    ~Chunk();
    Chunk(TileWorld* world, int globalX, int globalY, std::unordered_map <std::string, std::unique_ptr<cocos2d::Sprite>>* map);
    MapTile tiles[32][32];
    TileWorld* world;
    int globalX, globalY;
    void addTilesToRender(cocos2d::Layer* layer, std::unordered_map <std::string, std::unique_ptr<cocos2d::Sprite>>* map);
};

#endif /* Chunk_hpp */
