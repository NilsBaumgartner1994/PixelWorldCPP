//
//  Block.hpp
//  PixelWorld
//
//  Created by Nils Baumgartner on 04.11.18.
//

#ifndef Block_hpp
#define Block_hpp
#include "../physics/WorldPos.hpp"

class MapTile;
class Block{
public:
    ~Block();
    void init(int id, std::unordered_map <std::string, std::unique_ptr<cocos2d::Sprite>>* map);
    MapTile* tile;
    WorldPos pos;
    cocos2d::Sprite* sprite;
    int id;
};

#endif /* Block_hpp */
