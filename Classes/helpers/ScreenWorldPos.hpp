//
//  ScreenWorldPos.hpp
//  PixelWorld
//
//  Created by Nils Baumgartner on 12.11.18.
//

#ifndef ScreenWorldPos_hpp
#define ScreenWorldPos_hpp
#include <tuple>
#include "../physics/WorldPos.hpp"

class ScreenWorldPos{
public:
    static void setScreenPosFromGlobalPos(std::tuple<int, int> screenPos, WorldPos worldPos);

};
    
#endif /* ScreenWorldPos_hpp */
