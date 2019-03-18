#IFNDEF MEATPRODUCING_H
#DEFINE MEATPRODUCING_H

class MeatProducing : public FarmAnimal{
    public :
        MeatProducing();
        void moveRandom();
        void makeVoice();
        void eat();
        void gotKilled();
}

#ENDIF