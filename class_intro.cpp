#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Hero
{
private:
    int health;

public:
    char level;
    int gethealth()
    {
        return health;
    }
    int getlevel()
    {
        return level;
    }
    void sethealth(int h, string pswd)
    {
        if (pswd == "xyz")
        {
            health = h;
        }
    }
    void setlevel(char ch)
    {
        level = ch;
    }
};

int main()
{
    // 1
    // Hero h;
    // h.sethealth(70, "xyz");
    // cout << h.gethealth() << endl;
    // cout << sizeof(h) << endl; // op-> 8 but why not 5 [(int+char)->(4+1)]  // padding //greedy allignment

    // // 2
    // // static allocation
    Hero h1;
    h1.sethealth(70, "xyz");
    h1.setlevel('B');

    cout << "Health is : " << h1.gethealth() << endl;
    cout << "Level is : " << h1.level << endl;

    // dynamically allocation
    Hero *h2 = new Hero;
    h2->sethealth(90, "xyz");
    h2->setlevel('A');

    cout << "Health is : " << (*h2).gethealth() << endl;
    cout << "Level is : " << (*h2).level << endl;

    cout << "Health is : " << h2->gethealth() << endl;
    cout << "Level is : " << h2->level << endl;
}
