//
//  Human.hpp
//  PixelWorld
//
//  Created by Nils Baumgartner on 06.11.18.
//

#ifndef Human_hpp
#define Human_hpp

class Human{
public:
    ~Human();
    void init(int globalX, int globalY);
    int globalX, globalY;
};

#endif /* Human_hpp */
