#pragma once
#include "ObjectBase.h"
class CWorld : CObjectBase{
public:
    CWorld();
    virtual ~CWorld();
public:
    void updateWorld(double dTime);
};
