#include "objectbase.h"
long long g_objectCount = 0;
long long allocObjectID()
{
    return g_objectCount++;
}

CObjectBase::CObjectBase()
{
    m_objectID = allocObjectID();
}
CObjectBase::~CObjectBase()
{
    
}