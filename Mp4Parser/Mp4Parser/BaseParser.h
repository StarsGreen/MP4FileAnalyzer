//
//  BaseParser.h
//  Mp4Parser
//
//  Created by 강진영 on 8/8/15.
//  Copyright (c) 2015 sensation. All rights reserved.
//

#ifndef __Mp4Parser__BaseParser__
#define __Mp4Parser__BaseParser__

#include <stdio.h>
#include "FIleManger.h"
#include "Processer.h"



class BaseParser
{
    //Fundamental Compononet.
    
    public :
    FileManger *  fileManger;
    Processer  *      processer;
    
    //    Fundamental Compononet.
};


#endif /* defined(__Mp4Parser__BaseParser__) */

