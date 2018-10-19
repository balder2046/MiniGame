#pragma once
#include "objectbase.h"
class CWorld : public CObjectBase{
public:
    CWorld();
    virtual ~CWorld();
public:
    void updateWorld(double dTime);
};
