//
//  MapTile.hpp
//  PixelWorld
//
//  Created by Nils Baumgartner on 04.11.18.
//

#ifndef MapTile_hpp
#define MapTile_hpp

#include "Block.hpp"

class Chunk;
class MapTile{
public:
    Block block;
    Chunk* chunk;
    int localX, localY;
};

#endif /* MapTile_hpp */
