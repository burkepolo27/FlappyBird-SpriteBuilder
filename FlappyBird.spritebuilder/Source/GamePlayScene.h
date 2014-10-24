//
//  GamePlayScene.h
//  FlappyBird
//
//  Created by Gerald on 2/11/14.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCNode.h"
#import "Character.h"

typedef NS_ENUM(NSInteger, DrawingOrder) {
    DrawingOrderPipesCharacterwingOrderGround,
    DrawingOrderHero
};

@interface GamePlayScene : CCNode <CCPhysicsCollisionDelegate>
{
    //character = (Character*)[CCBReader load:@"Character"];
    [[CCPhysicsNode addChild:"character"]
-(void) initialize;
-(void) addObstacle;
-(void) showScore;

@end
