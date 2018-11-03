//
//  Chunk.cpp
//  PixelWorld
//
//  Created by Nils Baumgartner on 03.11.18.
//

#include "MapTile.cpp"

class Chunk {
public:
    Chunk();
    static const int CHUNKSIZE = 32;
    MapTile t[CHUNKSIZE][CHUNKSIZE];
};

Chunk::Chunk(){
    for(int i=0; i<CHUNKSIZE; i++){
        for(int j=0; j<CHUNKSIZE; j++){
            t[i][j] = MapTile();
        }
    }
}

