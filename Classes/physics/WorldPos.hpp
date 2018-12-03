//
//  WorldPos.hpp
//  PixelWorld
//
//  Created by Nils Baumgartner on 13.11.18.
//

#ifndef WorldPos_hpp
#define WorldPos_hpp

#include <tuple>

class WorldPos{
public:
    int x,y,xFrac,yFrac,z,zFrac;
    void init(int x, int y, int xFrac, int yFrac, int z, int zFrac);
    void calcScreenPos(int* screenPos);
};

#endif /* WorldPos_hpp */
