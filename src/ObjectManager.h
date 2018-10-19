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
    typedef std::list<CObjectBase *> VECTOR_OBJECT_BASE;

    typedef VECTOR_OBJECT_BASE::iterator OBJECT_BASE_ITERATOR;
    VECTOR_OBJECT_BASE m_objects;
    std::map<long long,CObjectBase *> m_mapId2Obj;

};