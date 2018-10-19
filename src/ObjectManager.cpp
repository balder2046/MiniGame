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
     VECTOR_OBJECT_BASE::const_iterator iter;
     for (iter = m_objects.begin(); iter != m_objects.end(); ++iter)
     {
         if ((*iter)->getObjectID() == idFind)
         {
             return *iter;
         }
     }
     return 0;
 }
void CObjectManager::removeObjectByID(long long idFind)
{
    VECTOR_OBJECT_BASE::iterator iter;
    for (iter = m_objects.begin(); iter != m_objects.end();++iter){
        if ((*iter)->getObjectID() == idFind)
        {
            delete *iter;
            m_objects.erase(iter);
            break;
        }
    }
}
void CObjectManager::removeObject(CObjectBase *obj)
{
    VECTOR_OBJECT_BASE::iterator iter;
    for (iter = m_objects.begin(); iter != m_objects.end(); ++iter){
        if (*iter == obj)
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
    return newPlayer;
}