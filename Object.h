#ifndef OBJECT_H
#define OBJECT_H
class Object{
    private:
        int x;
        int y;
    public:
        Object();
        Object(int, int);
        //Getter
        int getX();
        int getY();
        //Setter
        void setXY(int, int);
        int landType();//1 = Coop, 2 = Barn, 3 = Grass
};

#endif