//
//  UtilManger.cpp
//  Mp4Parser
//
//  Created by 강진영 on 8/8/15.
//  Copyright (c) 2015 sensation. All rights reserved.
//

#include "UtilManger.h"

//using namespace std;


UtilManger::UtilManger()
{
    errorManger = new ErrorManager;
    
};

UtilManger::~UtilManger()
{
    delete errorManger;
}



