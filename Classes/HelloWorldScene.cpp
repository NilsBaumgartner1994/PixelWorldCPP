/****************************************************************************
 Copyright (c) 2017-2018 Xiamen Yaji Software Co., Ltd.
 
 http://www.cocos2d-x.org
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/

#include "HelloWorldScene.h"
#include "inputs/VarHolder.cpp"

#include <iostream>
#include <string>

USING_NS_CC;

Scene* HelloWorld::createScene()
{
    auto scene = Scene::create();
    auto layer = HelloWorld::create();
    scene->addChild(layer);
    return scene;
}

bool HelloWorld::init()
{
    if ( !Layer::init() )
    {
        return false;
    }
    
    
    this->sprites.insert(std::make_pair("grass", std::unique_ptr<Sprite>(Sprite::create("tiles/grass.png"))));
    
    world = std::unique_ptr<TileWorld>(new TileWorld("Default",&sprites));
    world->addTilesToRender(this,&sprites);
    
    camera = std::unique_ptr<CameraController>(new CameraController());
    camera->init(this->getBoundingBox().getMaxX(), this->getBoundingBox().getMaxY());
    
    std::cout << "Now Deletions are ok" << std::endl;
    
    VarHolder test;
    test.setX(3);
    
    /**
    sprite = Sprite::create("tiles/grass.png");
    sprite->setPosition(this->getBoundingBox().getMidX(), this->getBoundingBox().getMidY());
    this->addChild(sprite, 0);
     */
    
    this->scheduleUpdate();
    return true;
}

void HelloWorld::update(float delta){
    
//std::cout << "Hallo";
    this->removeAllChildren();
    world->addTilesToRender(this,&sprites);
    
    /**
    auto position = sprite->getPosition();
    position.x -= 250 * delta;
    if (position.x  < 0 - (sprite->getBoundingBox().size.width / 2)){
        position.x = this->getBoundingBox().getMaxX() + sprite->getBoundingBox().size.width/2;
    }
    
    sprite->setPosition(position);
     */
}
