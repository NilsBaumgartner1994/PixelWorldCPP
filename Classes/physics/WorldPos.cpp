//
//  WorldPos.cpp
//  PixelWorld
//
//  Created by Nils Baumgartner on 13.11.18.
//

#include "WorldPos.hpp"

void WorldPos::init(int x, int y, int xFrac, int yFrac, int z, int zFrac){
    this->x = x;
    this->y = y;
    this->xFrac = xFrac;
    this->yFrac = yFrac;
    this->z = z;
    this->zFrac = zFrac;
}

void WorldPos::calcScreenPos(int* screenPos){
    int width = 480;
    int height = 320;
    int spriteWidth = 128;
    int spriteHeight = 64;
    int tileWidthHalf = spriteWidth/2;
    int tileHeightHalf = spriteHeight;
    
    int globalY = y;
    int globalX = x;
    int globalYFrac = yFrac;
    int globalXFrac = xFrac;
    
    int relativeY = (globalY - 0);
    int relativeX = (globalX - 0);
    
    int oldYF = globalYFrac - 0;
    int oldXF = globalXFrac - 0;
    
    //int spriteCorrection = scaleZoom(-sprite.getRegionWidth() / 2);
    int spriteCorrection = spriteWidth / 2;
    int widthCorrection = width / 2;
    int tileCorrection = -spriteHeight;
    int heightCorrection = height / 2;
    
    int xPosMultXPart = 1;
    int xPosMultYPart = -1;
    int yPosMultXPart = 1;
    int yPosMultYPart = 1;
    
    // int extraXCorrection = 0;
    // int extraYCorrection = 0;
    
    //if (this.cameraDirection == Direction.NORTH) {
    xPosMultXPart = 1;
    xPosMultYPart = -1;
    yPosMultXPart = 1;
    yPosMultYPart = 1;
    /**}
    if (this.cameraDirection == Direction.EAST) {
    xPosMultXPart = -1;
    xPosMultYPart = -1;
    yPosMultXPart = 1;
    yPosMultYPart = -1;
    }
    if (this.cameraDirection == Direction.SOUTH) {
    xPosMultXPart = -1;
    xPosMultYPart = 1;
    yPosMultXPart = -1;
    yPosMultYPart = -1;
    }
    if (this.cameraDirection == Direction.WEST) {
    xPosMultXPart = 1;
    xPosMultYPart = 1;
    yPosMultXPart = -1;
    yPosMultYPart = 1;
    }*/
    
    // relativeX += extraXCorrection;
    // relativeY += extraYCorrection;
    
    int relativeXYForX = (xPosMultXPart * relativeX + xPosMultYPart * relativeY);
    int fractionCorrectionX = (xPosMultXPart * oldXF / 2 + xPosMultYPart * oldYF);
    screenPos[0] = relativeXYForX * tileWidthHalf + spriteCorrection + widthCorrection + fractionCorrectionX;
    
    int relativeXYForY = (yPosMultXPart * relativeX + yPosMultYPart * relativeY);
    int fractionCorrectionY = (yPosMultXPart * oldXF / 4 + yPosMultYPart * oldYF / 2);
    screenPos[1] = relativeXYForY * tileHeightHalf + tileCorrection + heightCorrection + fractionCorrectionY;
    
}
