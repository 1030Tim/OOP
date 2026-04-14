#ifndef PERSON_H
#define PERSON_H
class Person{
    private:
        double height;
        double weight;
    public:
        Person();
        void setHight(double height);
        void setWeight(double weight);
        double BMI();
        double getHeight() const;
        double getWeight() const;
};
#endif