#include<iostream>
using namespace std;

int Absolute(int num)
{
	if (num>0)
	{
	//	return num;
		cout<<"ABsolute is from positive"<<num<<endl;
	}
	else if (num<0)
	{
		//return -num;
		cout<<"square is negative"<<-num<<endl;
	}
}



int main()
{
	cout<<Absolute(-9)<<endl;
	return 0;
}



/*#include<iostream>

using namespace std;

int absolute(int val)
{
    if (val >= 0) // && (and), || (or)
    {
        return val;
    }
    else if (val < 0) //elif
    {
        return -val;
    }
}

int main()
{
    cout << absolute(8) << endl;
    return 0;
}
*/

