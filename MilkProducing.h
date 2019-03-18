#IFNDEF MILKPRODUCING_H
#DEFINE MILKPRODUCING_H

class MilkProducing : public FarmAnimal{
    private :
        bool produceMilk;
    public :
        MilkProducing();
        void moveRandom();
        void makeVoice();
        void eat();
        void gotInteracted();
}

#ENDIF