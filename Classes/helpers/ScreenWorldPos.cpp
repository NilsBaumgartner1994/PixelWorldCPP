//
//  ScreenWorldPos.cpp
//  PixelWorld
//
//  Created by Nils Baumgartner on 12.11.18.
//

#include "ScreenWorldPos.hpp"

void ScreenWorldPos::globalPosToScreenPos(std::tuple<int, int> screenPos, WorldPos globalPos){
    /**
    int[] screenPos = new int[2];
    
    int globalY = globalPos.y;
    int globalX = globalPos.x;
    int globalYFrac = globalPos.yFraction;
    int globalXFrac = globalPos.xFraction;
    
    int relativeY = (globalY - camera.getPosition().y);
    int relativeX = (globalX - camera.getPosition().x);
    
    int oldYF = scaleZoom(globalYFrac - camera.getPosition().yFraction);
    int oldXF = scaleZoom(globalXFrac - camera.getPosition().xFraction);
    
    int spriteCorrection = scaleZoom(-sprite.getRegionWidth() / 2);
    int widthCorrection = this.getWidth() / 2;
    int tileCorrection = scaleZoom(-MapTile.tileHeight);
    int heightCorrection = this.getHeight() / 2;
    
    int xPosMultXPart = 1;
    int xPosMultYPart = -1;
    int yPosMultXPart = 1;
    int yPosMultYPart = 1;
    
    // int extraXCorrection = 0;
    // int extraYCorrection = 0;
    
    if (this.cameraDirection == Direction.NORTH) {
        xPosMultXPart = 1;
        xPosMultYPart = -1;
        yPosMultXPart = 1;
        yPosMultYPart = 1;
    }
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
    }
    
    // relativeX += extraXCorrection;
    // relativeY += extraYCorrection;
    
    int relativeXYForX = (xPosMultXPart * relativeX + xPosMultYPart * relativeY);
    int fractionCorrectionX = (xPosMultXPart * oldXF / 2 + xPosMultYPart * oldYF);
    screenPos[0] = relativeXYForX * tileWidthHalf + spriteCorrection + widthCorrection + fractionCorrectionX;
    
    int relativeXYForY = (yPosMultXPart * relativeX + yPosMultYPart * relativeY);
    int fractionCorrectionY = (yPosMultXPart * oldXF / 4 + yPosMultYPart * oldYF / 2);
    screenPos[1] = relativeXYForY * tileHeightHalf + tileCorrection + heightCorrection + fractionCorrectionY;
    
    return screenPos;
    */
    
}
