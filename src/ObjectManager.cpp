#include "objectmanager.h"

CObjectManager::CObjectManager(){
    
}
CObjectManager::~CObjectManager(){
    for (VECTOR_OBJECT_BASE::iterator iter = m_objects.begin(); iter != m_objects.end();++iter){
        delete *iter;
    }
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
    for (iter = m_objects.begin(); iter != m_objects.end(); ++iter){
        if (*iter == pObj)
        {
            delete *iter;
            m_objects.erase(iter);
            break;
        }
    }
}

CPlayer  *CObjectManager::AddPlayer(){
    CPlayer *newPlayer = new CPlayer();
    m_objects.push_back(newPlayer);
    m_mapId2Obj[newPlayer->getObjectID()] = newPlayer;
    return newPlayer;
}