#pragma once
#include <vector>
#include "objectbase.h"
class CObjectManager{
public:
    CObjectManager();
    virtual ~CObjectManager();
public:
    CObjectBase *getObjectByID(long long idFind) const;
    void removeObjectByID(long long idFind);
    void removeObject(CObjectBase *obj);

    
private:
    

};