#include <iostream>
#include <string>
using namespace std;
//const unsigned __int128 omg = 18446744073709551615;

class MyString {
private:
    string str;
public:
    MyString(string s) : str(s) {}
    friend ostream& operator<<(ostream& out, const MyString& ms)
    {
        out << ms.str << endl;
        return out;
    }
    int find(const string& s) const
    {
        return str.find(s);
    }
    int find(const string& s, int i) const
    {
        return str.find(s, i);
    }
};

    int getWordCount(const std::string& input, const std::string& delim)
    {
        int count = 0;
        if(input.find(delim) != -1)
        {
            size_t cur_pos = 0;
            while(input.find(delim, cur_pos) != -1)
            {
                ++count;
                cur_pos = input.find(delim, cur_pos) + delim.length();
            }
        }
        return count + 1;
    }

    string getWord(const std::string& input, int index, const std::string& delim)
    {
        if( index == 1) 
        {   
            //cout << input.find(delim) << endl;
            return input.substr(0, input.find(delim));
        }
        else if(index == getWordCount(input, delim))
            {
               // cout << "OHOHO" << endl;
                size_t cur_pos = 0;
                while(input.find(delim, cur_pos) != -1)
                    {
                        cur_pos = input.find(delim, cur_pos) + delim.length();
                    }
                //cout << cur_pos << ' ' << input.length() << endl;
                return input.substr(cur_pos, input.length() - cur_pos);

            }
            else
        {
        // figuring out the cur_pos_start
        size_t cur_pos_start = 0;
        for(size_t i = 1; i < index; i++) 
            cur_pos_start = input.find(delim, cur_pos_start) + delim.length();
        size_t cur_pos_end = input.find(delim, cur_pos_start);
        
        return input.substr(cur_pos_start, cur_pos_end - cur_pos_start);
        }
    }
    // remove all entries of string symbols from input string
    std::string& trim(std::string& input, const std::string& symbols)
    {
        if(input.find(symbols) != -1)
        {
            size_t cur_pos = 0;
            while(input.find(symbols, cur_pos) != -1)
            {
                cur_pos = input.find(symbols, cur_pos);
                input.erase(cur_pos, symbols.length());
            }
            return input; 
        }
        else
        {
            cout << "No such symbols" << endl; 
            return input;
        }
    }

int main()
{
     string mS("v trave sidel*kuznechik v trave sidel-kuznechik " 
     "sovsev kak ogurechik zelenenkiy*kuznechik  bil*\n");
     cout << mS;
    //cout << mS.find("ZZZz") << endl;
    // cout << mS.find("z",(size_t) mS.find("z") + 1) << endl;
    // cout << mS.find("z", (size_t) 41 ) << endl;
    // cout << mS.length() << endl;
    // cout << mS.max_size() << endl;

   // cout << getWordCount(mS, "ogurechik") << endl;
    cout << getWord(mS, 4, "kuz" ) << endl;
    //string test("abcdefgh\n");
    //cout << test.find("bcd");
    //cout << test.length() << endl;
    trim(mS,"ZZZ");
    cout << mS;
    return 0;
}