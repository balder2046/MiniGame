#include "objectmanager.h"
#include <algorithm>
CObjectManager::CObjectManager(){
    
}
 struct __Delete{
        void operator ()(const std::pair<long long ,CObjectBase *> &valuepair)
        {
            delete valuepair.second;
        }
    } __t;
CObjectManager::~CObjectManager(){
 
   
    std::for_each(m_objects.begin(),m_objects.end(),__t);
    m_objects.clear();
}
 CObjectBase *CObjectManager::getObjectByID(long long idFind) const
 {
     
     std::map<long long,CObjectBase *>::const_iterator iterFind = m_objects.find(idFind);
     if (iterFind == m_objects.end())
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
   m_objects.erase(pObj->getObjectID());
   delete pObj;
}

CPlayer  *CObjectManager::AddPlayer(){
    CPlayer *newPlayer = new CPlayer();
    m_objects[newPlayer->getObjectID()] = newPlayer;
    return newPlayer;
}