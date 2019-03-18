#ifndef OBJECT_H
#define OBJECT_H
class Object{
    private:
        int X;
        int Y;
    public:
        Object(int, int);
        //Getter
        int GetX();
        int GetY();
        //Setter
        void SetXY(int, int);
};

#endif