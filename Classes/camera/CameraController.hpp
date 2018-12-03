//
//  CameraController.hpp
//  PixelWorld
//
//  Created by Nils Baumgartner on 07.11.18.
//

#ifndef CameraController_hpp
#define CameraController_hpp

class CameraController{
public:
    ~CameraController();
    void init(int width, int height);
    int width, height;
};

#endif /* CameraController_hpp */
