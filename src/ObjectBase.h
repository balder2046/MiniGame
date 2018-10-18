#pragma once
#include <string>
class CObjectBase{
public:
    CObjectBase();
    virtual ~CObjectBase();
public:
    long long getObjectID() const{
        return m_objectID;
    }
protected:
    std::string m_strName;
    long long m_objectID;
};