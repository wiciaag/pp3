// pp3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    /*zadanie 1
    int a, b;
    cout << "podaj a:";
    cin >> a;
    cout << "\npodaj b:";
    cin >> b;
    if(a==b)
    {
        cout << "liczby a i b sa sobie rowne.\n";
    }
    else if (a < b) {
        cout << "A jest mniejsze od b\n";
    }
    else if (a > b) {
        cout << "a jest wieksze od b\n";
        }*/
        /*zadanie 2
    int a, b;
    cout << "podaj a:";
    cin >> a;
    cout << "\npodaj b:";
    cin >> b;
    if (a == b)
    {
        cout << "liczby a i b sa sobie rowne.\n";
    }
    else {
        if (a < b) {
            cout << "A jest mniejsze od b\n";
        }
        else {
            cout << "a jest wieksze od b\n";
        }


    }*/
    /*zadanie3
    float r;
    cout << "podaj liczbe od 0.0 do 1.0:", cin >> r;
    if (r >= 0.7 && r <= 1.0)
    {
        cout << "bardzo silna korelacja dodatnia";
    }
    else if (r >= 0.5)
        cout << "silna korelacja dodatnia";
    else if(r>=0.3)
    {
        cout << "umiarkowana korelacja dodatnia";
    }
    else if(r>=0.2)
        cout << "slaba korelacja dodatnia";
    else if(r>=0.0)
        cout << "brak korelacji";*/
        /*zadanie4
        float a, b;
        char znak;
        cout << "podaj a:";
        cin >> a;
        cout << "\npodaj b:";
        cin >> b;
        cout << "\npodaj znak dzialania:";
        cin >> znak;
        switch (znak)
        {
            case '+':

                cout << "\n" << a + b;
                break;

            case'-':

                cout << "\n" << a -b;
                break;

            case'*':

                cout << "\n" << a * b;
                break;

            case'/':

                if (b == 0)
                    cout << "\nnie dziel przez 0!!";
                else
                    cout << "\n" << a / b;
                break;

            default:
                cout << "\nniepoprawny znak dzialania";
    }*/
    /*zadanie5
    int a = 0;
    while(7)
    {
        cout << a + 1;
        a++;
    }
    return 0;*/
    /*zadanie6
    float a, b;
    char znak;
    while (7) {
        cout << "podaj a:";
        cin >> a;
        cout << "\npodaj b:";
        cin >> b;
        cout << "\npodaj znak dzialania:";
        cin >> znak;
        switch (znak)
        {
        case '+':

            cout << "\n" << a + b;
            break;

        case'-':

            cout << "\n" << a - b;
            break;

        case'*':

            cout << "\n" << a * b;
            break;

        case'/':

            if (b == 0)
                cout << "\nnie dziel przez 0!!";
            else
                cout << "\n" << a / b<<"\n";
            break;

        default:
            cout << "\nniepoprawny znak dzialania";
        }
		
        char z;
        cout << "czy chcesz kontynuowac obliczenia?\n";
        cin >> z;
        if(z=='n')
        {
            break;
		}
    }*/
/*zadanie7
int i=0;
while (7)
{
    if(i%2==1)
    cout << i<<"\n";
    if(i==200)
    {
        break;
    }
    i++;
}*/
}

