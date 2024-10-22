#include <iostream>
using namespace std;
#include <string>

const int maxIndex = 9;

class offTheFeild: public exception
{
public:
    string what()
    {
        return "Field boundaries violated !!!";
    }
};

class IllegalCommand : public exception
{
public:
    string what()
    {
        return "Wrong command!!!";
    }
};

class Robot {
private:
    int X, Y;
public:
    Robot () : X(0), Y(0) {}
    int getX() const {
        return X;
    }
    int getY() const {
        return Y;
    }
    void move(string s, int step) 
    {
        try {
        if(step < 0)
            throw IllegalCommand();
        if(s =="up") 
            {
                Y += step;
                // if(Y > 0)
                    // throw offTheFeild();
            }
        else
             if(s =="down")
             {
                  Y -= step;
                //   if(Y < -maxIndex)
                    // throw offTheFeild();
             }
            else
                 if(s =="left")
                 {
                     X -= step;
                    //  if(X < 0)
                        // throw offTheFeild();
                 }
                else
                    if(s == "right")
                    {
                        X += step;
                        // if(X > maxIndex)
                            // throw offTheFeild();
                    }
                    else
                        throw IllegalCommand();
            if((X < 0)||(X > maxIndex)||(Y > 0)||(Y< -maxIndex))
                throw offTheFeild();
        }
        catch(IllegalCommand& IC)
        {
            cout << IC.what() << endl;
        }
        catch(offTheFeild& oF)
        {
            cout << oF.what() << endl;
        }
    }
};

int main()
{
    Robot r;
    r.move("up", 3);
    cout << "X: " << r.getX() << ' ' << "Y: " << r.getY() << endl;
    //r.move("right", 10);

    return 0;
}