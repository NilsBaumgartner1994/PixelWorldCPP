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
    
    camera = new CameraController();
    camera->init(this->getBoundingBox().getMaxX(), this->getBoundingBox().getMaxY());
    
    world = std::unique_ptr<TileWorld>(new TileWorld("Default",&sprites));
    world->addTilesToRender(this,&sprites,camera);
    
    std::cout << "Now Deletions are ok" << std::endl;
    
    VarHolder test;
    test.setX(3);
    
    /**
    sprite = Sprite::create("tiles/grass.png");
    sprite->setPosition(this->getBoundingBox().getMidX(), this->getBoundingBox().getMidY());
    this->addChild(sprite, 0);
     */
    
    
    visibleSize = Director::getInstance()->getVisibleSize();
    
    auto listener = EventListenerTouchOneByOne::create();
    listener->setSwallowTouches(true);
    
    listener->onTouchBegan = CC_CALLBACK_2(HelloWorld::onTouchBegan, this);
    listener->onTouchMoved = CC_CALLBACK_2(HelloWorld::onTouchMoved, this);
    listener->onTouchEnded = CC_CALLBACK_2(HelloWorld::onTouchEnded, this);
    listener->onTouchCancelled = CC_CALLBACK_2(HelloWorld::onTouchCancelled, this);
    
    Director::getInstance()->getEventDispatcher()->addEventListenerWithSceneGraphPriority(listener, this);
    
    isTouchDown = false;
    
    initialTouchPos[0] = 0;
    initialTouchPos[1] = 0;
    
    this->scheduleUpdate();
    return true;
}

void HelloWorld::update(float delta){
    
//std::cout << "Hallo";
    this->removeAllChildren();
    world->addTilesToRender(this,&sprites,camera);
    
    if (true == isTouchDown)
    {
        if (initialTouchPos[0] - currentTouchPos[0] > visibleSize.width * 0.05)
        {
            CCLOG("SWIPED LEFT");
            this->camera->pos->add(-1, 0, 1, 0, 0, 0);
            
            isTouchDown = false;
        }
        else if (initialTouchPos[0] - currentTouchPos[0] < - visibleSize.width * 0.05)
        {
            CCLOG("SWIPED RIGHT");
            this->camera->pos->add(1, 0, -1, 0, 0, 0);
            
            isTouchDown = false;
        }
        else if (initialTouchPos[1] - currentTouchPos[1] > visibleSize.width * 0.05)
        {
            CCLOG("SWIPED DOWN");
            this->camera->pos->add(-1, 0, -1, 0, 0, 0);
            
            isTouchDown = false;
        }
        else if (initialTouchPos[1] - currentTouchPos[1] < - visibleSize.width * 0.05)
        {
            CCLOG("SWIPED UP");
            this->camera->pos->add(1, 0, 1, 0, 0, 0);
            
            
            isTouchDown = false;
        }
    }
}

bool HelloWorld::onTouchBegan(Touch *touch, Event *event)
{
    initialTouchPos[0] = touch->getLocation().x;
    initialTouchPos[1] = touch->getLocation().y;
    currentTouchPos[0] = touch->getLocation().x;
    currentTouchPos[1] = touch->getLocation().y;
    
    isTouchDown = true;
    
    return true;
}

void HelloWorld::onTouchMoved(Touch *touch, Event *event)
{
    currentTouchPos[0] = touch->getLocation().x;
    currentTouchPos[1] = touch->getLocation().y;
}

void HelloWorld::onTouchEnded(Touch *touch, Event *event)
{
    isTouchDown = false;
}

void HelloWorld::onTouchCancelled(Touch *touch, Event *event)
{
    onTouchEnded(touch, event);
}

void HelloWorld::menuCloseCallback(Ref* pSender)
{
#if (CC_TARGET_PLATFORM == CC_PLATFORM_WP8) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT)
    MessageBox("You pressed the close button. Windows Store Apps do not implement a close button.","Alert");
    return;
#endif
    
    Director::getInstance()->end();
    
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}
