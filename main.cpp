#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    int T , T_save ; /// T to put in the number of test cases
    vector <double> vect ; /// vect to put the grades in
    vector <double> resu_stack ; ///stack to put the results in
    cin >> T ;
    T_save = T ;
    while(T)
    {
        double avr = 0;
        double n ;
        double temp ;

        cin >> n ;

        for(int i = 0 ; i < n ; i++)
        {
            cin >> temp ;
            vect.push_back(temp);
            avr+=temp ;
        }

        avr = avr/n ;

        temp = 0 ;

        for(int i = 0 ; i < n ; i++ )
        {
            if (vect.at(i) > avr)
            {
                temp++ ;
            }
        }

        resu_stack.push_back((double)100*temp/n);

        vect.clear();

        T-- ;
    }
    for(int i = 0 ; i < T_save ; i ++ )
    {
            cout << fixed <<setprecision(3) << showpoint << resu_stack.at(i) << "%" << endl;
    }
}
