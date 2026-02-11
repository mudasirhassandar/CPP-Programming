#include <iostream>
using namespace std;
class Mediafile
{
public:
    virtual void play() = 0;
};
class Auido : public Mediafile
{
public:
    void play()
    {
        cout << "Playing Audio File...." << endl;
    }
};
class Video : public Mediafile
{
public:
    void play()
    {
        cout << "Playing Video File...." << endl;
    }
};
class Image : public Mediafile
{
public:
    void play()
    {
        cout << "Displaying Image File...." << endl;
    }
};
int main()
{
    Mediafile *media[3];
    Auido A;
    Video V;
    Image I;
    media[0] = &A;
    media[1] = &V;
    media[2] = &I;
    for (int i = 0; i < 3; i++)
    {
        media[i]->play();
    }
    return 0;
}