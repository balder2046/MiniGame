#pragma once
#include "objectbase.h"
#include "math3d.h"
class CMapObject : CObjectBase
{
public:
    CMapObject();
    virtual ~CMapObject();
public:
    const Vector3d &GetPosition() const{
        return m_position;
    }
    void SetPosition(const Vector3d &newPos);
protected:
    Vector3d m_position;

};