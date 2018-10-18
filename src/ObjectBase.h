#pragma once
#include <string>
class CObjectBase{
public:
    CObjectBase();
    virtual ~CObjectBase();

protected:
    std::string m_strName;
};