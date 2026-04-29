#ifndef ANIMALSTARTUS_H
#define ANIMALSTARTUS_H

class AnimalStatus{
    private:
        int hp,mp;
    public:
        AnimalStatus(int _hp, int _mp);

        friend void showStatus(const AnimalStatus &animal);
};

#endif