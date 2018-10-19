#include "mapobject.h"

 CMapObject::CMapObject()
 {

 }
CMapObject::~CMapObject(){

}
void CMapObject::SetPosition(const Vector3d &newPos){
    m_position = newPos;
}