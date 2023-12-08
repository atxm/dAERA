#ifndef HALLWAY_H
#define HALLWAY_H

#include "Environment.h"

class Hallway : public Environment {
public:
   Hallway(const std::string& name);
    virtual void setItemInRoom(Item* item){}
    virtual void setEnemyInRoom(EnemyStatus* enemy){}
    virtual void setPageInRoom(Page* page){}
   virtual ~Hallway();
};

#endif // HALLWAY_H
