#include <stdio.h>
using namespace std;

class Creature;

class Chances{
    private:
        float spawnChance = NULL;
        float deathChance = NULL;
        float reproduceChance = NULL;
    public: 
        bool trySpawn(){
            float a = spawnChance;
            return true;
        }
        bool tryDeath(){
            float a = deathChance;
            return true;
        }
        bool tryReproduce(){
            float a = reproduceChance;
            return true;
        }
};

class Actions{
        Creature* createCreature(){
            Creature* a;
            return a;
        }
};

class Creature: public Chances, public Actions{
    private: 
        Creature* createCreature(){
            bool rep = tryReproduce();
            Creature* a;
            return a;
        }
        void die(){
            bool die = tryDeath();
        }
};

class World: public Chances, public Actions{
         Creature* createCreature(){
            bool rep  = trySpawn();
            Creature* a;
            return a;
         }
};

int main(){
    
    return 0;
}
