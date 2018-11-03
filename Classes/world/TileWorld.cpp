//
//  TileWorld.cpp
//  PixelWorld
//
//  Created by Nils Baumgartner on 03.11.18.
//

#include "Chunk.cpp"

using namespace std;

class TileWorld {
public:
    TileWorld();
    static const int chunkAmount = 10;
    Chunk chunks[chunkAmount][chunkAmount];
    
    
protected:
    int x;
};


TileWorld::TileWorld(void) {
    for(int i=0; i<chunkAmount; i++){
        for(int j=0; j<chunkAmount; j++){
            chunks[i][j] = Chunk();
        }
    }
}
