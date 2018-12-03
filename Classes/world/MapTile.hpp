//
//  MapTile.hpp
//  PixelWorld
//
//  Created by Nils Baumgartner on 04.11.18.
//

#ifndef MapTile_hpp
#define MapTile_hpp

#include "Block.hpp"
#include "cocos2d.h"

class Chunk;
class MapTile{
public:
    ~MapTile();
    void init(Chunk* c, int localyX, int localyY, std::unordered_map <std::string, std::unique_ptr<cocos2d::Sprite>>* map);
    Block block;
    Chunk* chunk;
    int localX, localY;
    void addTilesToRender(cocos2d::Layer* layer, std::unordered_map <std::string, std::unique_ptr<cocos2d::Sprite>>* map);
};

#endif /* MapTile_hpp */
