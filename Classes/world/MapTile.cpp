//
//  MapTile.cpp
//  PixelWorld
//
//  Created by Nils Baumgartner on 03.11.18.
//
#include "Block.cpp"

class MapTile {
public:
    MapTile();
    Block b;
};

MapTile::MapTile(){
    b = Block();
    b.setID(1);
}


