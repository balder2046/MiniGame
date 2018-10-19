#include "objectmanager.h"
#include <algorithm>
CObjectManager::CObjectManager(){
    
}
 struct __Delete{
        void operator ()(CObjectBase * ptr)
        {
            delete ptr;
        }
    } __t;
CObjectManager::~CObjectManager(){
 
   
    std::for_each(m_objects.begin(),m_objects.end(),__t);
    m_objects.clear();
}
 CObjectBase *CObjectManager::getObjectByID(long long idFind) const
 {
     std::map<long long ,CObjectBase *>::const_iterator iterFind;
     iterFind = m_mapId2Obj.find(idFind);
     if (iterFind == m_mapId2Obj.end())
     {
        return 0;
     }
     else
     {
         return iterFind->second;
     }
     
 }
void CObjectManager::removeObjectByID(long long idFind)
{
    CObjectBase *pObj = getObjectByID(idFind);
    removeObject(pObj);
}
void CObjectManager::removeObject(CObjectBase *pObj)
{
    m_mapId2Obj.erase(pObj->getObjectID());
    VECTOR_OBJECT_BASE::iterator iter;
    iter = std::find(m_objects.begin(),m_objects.end(),pObj);
    if (iter != m_objects.end())
    {
        delete *iter;
        m_objects.erase(iter);
    }
}

CPlayer  *CObjectManager::AddPlayer(){
    CPlayer *newPlayer = new CPlayer();
    m_objects.push_back(newPlayer);
    m_mapId2Obj[newPlayer->getObjectID()] = newPlayer;
    return newPlayer;
}