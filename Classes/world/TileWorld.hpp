//
//  TileWorld.hpp
//  PixelWorld
//
//  Created by Nils Baumgartner on 04.11.18.
//

#ifndef TileWorld_hpp
#define TileWorld_hpp

#include "Chunk.hpp"
#include "cocos2d.h"
#include <string>
#include <unordered_map>
#include "../entitiys/Human.hpp"

class TileWorld{
public:
    ~TileWorld();
    TileWorld(std::string name, std::unordered_map <std::string, std::unique_ptr<cocos2d::Sprite>>* map);
    std::unordered_map <std::string, std::unique_ptr<Chunk>> chunks;
    std::string name;
    std::string getName();
    Human human;
    
    void addTilesToRender(cocos2d::Layer* layer, std::unordered_map <std::string, std::unique_ptr<cocos2d::Sprite>>* map);
};

#endif /* TileWorld_hpp */
