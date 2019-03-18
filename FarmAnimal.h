#IFNDEF FARMANIMAL_H
#DEFINE FARMANIMAL_H

class FarmAnimal : public Object{
    private :
        int hungry;
        bool produceProduct;
    public :
        virtual ~FarmAnimal();
        virtual void moveRandom()=0;
        virtual void makeVoice()=0;
        virtual void eat()=0;
};

class EggProducing : public FarmAnimal{
    public :
        EggProducing();
        void moveRandom();
        void makeVoice();
        void eat();
        void gotInteracted();
};

class MeatProducing : public FarmAnimal{
    public :
        MeatProducing();
        void moveRandom();
        void makeVoice();
        void eat();
        void gotKilled();
};

class MilkProducing : public FarmAnimal{
    public :
        MilkProducing();
        void moveRandom();
        void makeVoice();
        void eat();
        void gotInteracted();
};

#ENDIF