//
//  TileWorld.hpp
//  PixelWorld
//
//  Created by Nils Baumgartner on 04.11.18.
//

#ifndef TileWorld_hpp
#define TileWorld_hpp

#include "Chunk.hpp"
#include <string>
#include <unordered_map>

class TileWorld{
public:
    TileWorld(std::string name);
    std::unordered_map <std::string, std::unique_ptr<Chunk>> chunks;
    std::string name;
    std::string getName();
};

#endif /* TileWorld_hpp */
