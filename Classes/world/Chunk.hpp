//
//  Chunk.hpp
//  PixelWorld
//
//  Created by Nils Baumgartner on 04.11.18.
//

#ifndef Chunk_hpp
#define Chunk_hpp

#include "MapTile.hpp"

class TileWorld;
class Chunk{
public:
    ~Chunk();
    Chunk(TileWorld* world, int globalX, int globalY);
    MapTile tiles[32][32];
    TileWorld* world;
    int globalX, globalY;
};

#endif /* Chunk_hpp */
