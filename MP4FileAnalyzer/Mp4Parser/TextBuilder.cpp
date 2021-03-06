//
//  TextBuilder.cpp
//  Mp4Parser
//
//  Created by 강진영 on 8/10/15.
//  Copyright (c) 2015 sensation. All rights reserved.
//

#include "TextBuilder.h"

TextBuilder::TextBuilder(){
    
};

TextBuilder::~TextBuilder(){
    
};

uint TextBuilder::makeTextfile(BoxModel * boxdata){
    
    std::ofstream outFile("output.txt");
    
    for (std::vector<int>::size_type i = 0; i < boxdata->BoxesVector.size(); ++i)
    {
        outFile << " Offset: " << boxdata->BoxesVector[i]->mOffset << std::endl;
        outFile << " Size:  " << boxdata->BoxesVector[i]->mSize << std::endl;
        outFile << " Type: "  << boxdata->BoxesVector[i]->mType <<  " \n " << std::endl;        
    }
    outFile.close();
    
    return 1;
    
}

