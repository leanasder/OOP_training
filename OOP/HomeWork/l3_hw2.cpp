#include <iostream>
using namespace std;

    enum suit{spaders, diamonds, hearts, clubs};
    enum nominal{Ace, King, Queen, Jack, ten, nine, ethgt, seven, six, five, four, three, two};

class Card
{
private:
    suit Suit;
    nominal Nom;
    static int Counter;
    bool fliper;
public:
    Card(suit p_Suit, nominal p_Nom) : Suit(p_Suit), Nom(p_Nom)
    {
	Counter++;
	fliper = false;
    }
    void print()
    {
	if(fliper)
	{
	switch(Suit)
	{
	case 0:
	    cout << "This is spaders ";
	    break;
	case 1:
	    cout << "This is diamonds ";
	    break;
	case 2:
	    cout << "This is hearts ";
	    break;
	case 3:
	    cout << "This is clubs ";
	    break;
	}	
	switch(Nom)
	{
	    case 0:
		cout << "Ace" <<endl;
		break;
	    case 1:
		cout << "King" << endl;
		break;
	    case 2:
		cout << "Queen" << endl;
		break;
	    case 3:
		cout << "Jack" << endl;
		break;
	    case 4:
		cout << "Ten" << endl;
		break;
	    case 5:
		cout << "Nine" << endl;
		break;
	    case 6:
		cout << "Eight" << endl;
		break;
	    case 7:
		cout << "Seven" << endl;
		break;
	    case 8:
		cout << "Six" << endl;
		break;
	    case 9:
		cout << "Five" << endl;
		break;
	    case 10:
		cout << " Four" << endl;
		break;
	    case 11:
		cout << " Three" << endl;
		break;
	    case 12:
		cout << "Two" << endl;
		break;
	}
	}
	else
	    cout << "The card is face down" << endl;
		
    }
    void flip()
    {
	if(fliper)
	    fliper = false;
	else fliper = true;
    }
    static int getCount()
    {
	return Counter;
    }
};
int Card::Counter = 0;

int main ()
{
    Card card1(clubs, Queen);
    card1.flip();
    card1.print();
    Card card2(diamonds, Ace);
    card2.flip();
    card2.print();
    cout << "Count existing objects is " << card2.getCount() << endl;
    

    cout << card1.getCount() << endl;
    Card card3(clubs, four);
    Card card4(diamonds, Jack);
    cout << card3.getCount() << endl;
    card3.print(); 

}


