#include <iostream>
#include <cstdlib>
using namespace std;



class element 
{
    public:
        int i; 
        element *second; ///��������� �� ��������� ������� ������
};


class list
{
    private:
        element *first; ///��������� �� ������ ������� ������
    public:
        list()
        {
            first = NULL;
        }
        ~list(){};
    void set_list(int n); ///���� ������
    void get_list(); ///����� ������
 
};


void list::set_list (int n)
{
    element *new_element = new element;  
    new_element -> i = n;                    
    new_element -> second = first;///������� ������������� �������� "������"
    first = new_element;                  
}

void list::get_list()
{
    element *Current; 
    Current = first; 
    while(Current != 0) 
    {
        cout << Current->i << " " << endl;
        Current = Current -> second;
    }
}


void main()
{
    list sp1;
    while (true)
    {
        int k,e;
        char q;
        cout << "how many elements do you wannt to add to the list?" << endl;
        cin >> k;
		cout << "enter element " << endl;
        for (int s = 0; s < k; ++s)
        {
            cin >> e;
            sp1.set_list(e);
        }

		cout << "shall i finish the list? (Y),(N)" << endl;
        cin >> q;
        if (q == 'y')
		break;            
    }
	sp1.get_list();
}