// Finishing the programm 09.10.2024
#include <iostream>
#include <vector>
#include <cassert>

using namespace std;


class ArrayInt {
private:
    int* m_data;
    int m_length;
public:
    ArrayInt()
        : m_length(0), m_data(nullptr)
    {   
    }
    ArrayInt(int length)
        : m_length(length) 
    {
        assert(length >= 0) ;

        if(m_length > 0) 
            m_data = new int[m_length];
        else
            m_data = nullptr;
    }
    ~ArrayInt()
    {
        delete [] m_data;
    }
    void erase() {
        delete[] m_data;
        m_data = nullptr;
        m_length = 0;
    }
    int geLength() const
    {
        return m_length;
    }
    int& operator[](int index)
    {
        assert(index >= 0 && index < m_length);

        return m_data[index];
    }
    void resize(int newLength) {
        if (newLength == m_length)
            return;
        if (newLength <= 0)
        {
            erase();
            return;
        }  

        int* data = new int[newLength];
        if (m_length > 0)
        {
            int count = newLength > m_length ? m_length :newLength;
            for(int i = 0; i < count; ++i) {
                data[i] = m_data[i];
            }
        }

        delete []m_data;
        m_data = data;
        m_length = newLength;

    }

    void insertBefore(int value, int index) {
        assert(index >= 0 && index <= m_length);
        int *data = new int[m_length + 1];
        for(int i = 0; i < index; ++i) {
            data[i] = m_data[i];
        }
        data[index] = value;
        for(int i = index; i < m_length; ++i) {
            data[i + 1] = m_data[i];
        }
        delete [] m_data;
        m_data = data;
        ++m_length;
    }

    void push_back(int value) {
        insertBefore(value, m_length);
    }
    void Pop_back() {
        if (m_length == 0) 
            cout << "Array is Empty";
        else
            {
                int* data = new int[m_length - 1];
                for(int i = 0; i < m_length - 1; ++i)
                    data[i] = m_data[i];
                delete[] m_data;
                m_data = data;
                m_length = m_length - 1;
            }
    }
    void print() {
        for(int i = 0; i < m_length; ++i)
            cout << m_data[i] << ' ' ;
        cout << endl;
    }

    void pop_front() 
    {
        if(m_length == 0)
            cout << "Array is Empty";
        else
        {
            int* data = new int[m_length - 1];
            for(int i = 0; i < m_length - 1; ++i)
                data[i] = m_data[i + 1];
            data[m_length - 2] = m_data[m_length - 1];
            delete[] m_data;
            m_data = data;
            m_length = m_length - 1;
        }
    }
    //09.10.2024. How does work BubbleSort? YandexPraktikum.
    void sort(ArrayInt& value) 
    {
        for(size_t idx_i = 0; idx_i + 1 < value.geLength(); ++idx_i)
            for(size_t idx_j = 0; idx_j + 1 < value.geLength() - idx_i; ++idx_j)
                if(value[idx_j + 1] < value[idx_j])
                {
                    int temp = value[idx_j];
                    value[idx_j] = value[idx_j + 1];
                    value[idx_j + 1] = temp;
                }
    }
    // this is solution  of homework #2 to 5 lecture
    int unique_items(ArrayInt& value)
    {
        int count = 0;
        for(int i = 0; i + 1 < value.geLength(); ++i)
            if(value[i + 1] !=  value[i])
                ++count;
        return ++count;
    }
};


int main()
{
    ArrayInt arr(7);
    arr[0] = 63;
    arr[1] = 63;
    arr[2] = 7;
    arr[3] = 7;
    arr[4] = -2;
    arr[5] = 9;
    arr[6] = 7;
    arr.print();
    arr.sort(arr);
    arr.print();
    cout << "count of unique_item is: " << arr.unique_items(arr) << endl;
    cout << arr.geLength() << endl;
    // arr.pop_front();
    // arr.print();
    // arr.Pop_back();
    // arr.print();
    // arr.Pop_back();
    // cout << arr.geLength() << endl;
    // arr.print();

    return 0;
}