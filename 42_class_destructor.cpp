#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Hero
{
private:
    int health;

public:
    char level;

    // Default constructor
    Hero()
    {
        cout << "Default constructor called" << endl;
    }

    // parameterised constructor
    Hero(int health)
    {
        this->health = health;
    }

    Hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }

    // copy constructor
    Hero(Hero &temp)
    {
        cout << "Copy constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print()
    {
        cout << "Health : " << this->health << endl;
        cout << "Level : " << this->level << endl;
    }
    int gethealth()
    {
        return health;
    }
    int getlevel()
    {
        return level;
    }
    void sethealth(int h)
    {
        health = h;
    }
    void setlevel(char ch)
    {
        level = ch;
    }

    // Destructor
    ~Hero()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    // Static
    Hero a; // automatic destructor called

    // Dynamic
    Hero *b = new Hero;
    delete b; // manually destructor called
}
