//
//  CameraController.hpp
//  PixelWorld
//
//  Created by Nils Baumgartner on 07.11.18.
//

#ifndef CameraController_hpp
#define CameraController_hpp
#include "../physics/WorldPos.hpp"

class MapTile;
class WorldPos;
class CameraController{
public:
    ~CameraController();
    void init(int width, int height);
    std::unique_ptr<WorldPos> pos;
    int width, height;
};

#endif /* CameraController_hpp */
