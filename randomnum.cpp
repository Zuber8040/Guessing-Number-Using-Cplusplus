#include<iostream>
#include<cstdlib>
#include<ctime>


using namespace std;

int main()
{

    cout<<" GUESSING A NUMBER "<<endl;
    int num ,n; 
    cout<<"Guess a integer Number from 1 to 100 :  ";
    cin>>n;


    srand(time(0));
    for (int i= 1 ; i<=25; i++ )
    {
           num = rand()%100;
    }
    if (n == num)
        cout<<"\nRight guess";
    else
        cout<<"Worng Guess \n"<<"Right number is "<<num<<endl;
            

    return 0;
}
