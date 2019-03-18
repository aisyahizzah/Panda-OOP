#IFNDEF EGGPRODUCING_H
#DEFINE EGGPRODUCING_H

class EggProducing : public FarmAnimal{
    private :
        bool produceEgg;
    public :
        EggProducing();
        void moveRandom();
        void makeVoice();
        void eat();
        void gotInteracted();
}

#ENDIF