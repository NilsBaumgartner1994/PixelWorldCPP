//
//  Block.hpp
//  PixelWorld
//
//  Created by Nils Baumgartner on 04.11.18.
//

#ifndef Block_hpp
#define Block_hpp

class MapTile;
class Block{
    MapTile* tile;
    cocos2d::Sprite* sprite;
    int id;
};

#endif /* Block_hpp */
