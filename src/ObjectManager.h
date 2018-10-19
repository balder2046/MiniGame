#pragma once
#include <vector>
#include <list>
#include <map>
#include "objectbase.h"
#include "player.h"

class CObjectManager{
public:
    CObjectManager();
    virtual ~CObjectManager();
public:
    CObjectBase *getObjectByID(long long idFind) const;
    void removeObjectByID(long long idFind);
    void removeObject(CObjectBase *obj);

public:
    CPlayer *AddPlayer();
private:
    
    std::map<long long,CObjectBase *> m_objects;

};