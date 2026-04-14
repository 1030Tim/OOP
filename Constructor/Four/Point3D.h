// Point3D.h
#ifndef POINT3D_H
#define POINT3D_H
class Point3D{
    private:
        int x,y,z;
    public:
        Point3D(int x, int y, int z);
        void SetXYZ(int x, int y, int z);
        void print() const;
};
#endif