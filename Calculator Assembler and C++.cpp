//MAGALI ANAHI MEZA CHAVEZ

#include <iostream>
using namespace std;

//The calculator methods
int addition( int $a, int $b )
{
int $result;
__asm__ __volatile__(
        "movl %1, %%eax;"
        "movl %2, %%ebx;"
        "addl %%ebx,%%eax;"
        "movl %%eax, %0;" : "=g" ( $result ) : "g" ( $a ), "g" ( $b ));
return $result ;
}

int subtraction( int $a, int $b )
{
int $result;
__asm__ __volatile__(
        "movl %1, %%eax;"
        "movl %2, %%ebx;"
        "subl %%ebx,%%eax;"
        "movl %%eax, %0;" : "=g" ( $result ) : "g" ( $a ), "g" ( $b ));
return $result ;
}

int multi( int $a, int $b )
{
int $result;
__asm__ __volatile__(
        "movl %1, %%eax;"
        "movl %2, %%ecx;"
        "mull %%ecx;"
        "movl %%eax, %0;" : "=g" ( $result ) : "g" ( $a ), "g" ( $b ));
return $result ;
}

int division( int $a, int $b )
{
int $result;
__asm__ __volatile__(
        "xorl %%edx, %%edx;"
        "movl %1, %%eax;"
        "movl %2, %%ebx;"
        "divl %%ebx;"
        "movl %%eax, %0;" : "=g" ( $result ) : "g" ( $a ), "g" ( $b ));
return $result ;
}

int power( int $a, int $b )
{
int $result;
__asm__ __volatile__(
        "movl %2, %%ecx;"
        "decl %%ecx;"
        "movl %1, %%eax;"
        "cycle:;"
            "movl %1, %%ebx;"
            "mull %%ebx;"
            "loopl cycle;"
        "movl %%eax, %0;" : "=g" ( $result ) : "g" ( $a ), "g" ( $b ));
return $result ;
}

int main(int argc, char** argv) {
    int a,b,c,opc;
    //Ends when the option 6 its selected
    do {
        system("cls");
        cout << "\t\t---------------------------------------------------------------------------------------------------\n";
		cout << "\t\t\t\t\t      |             Calculator           |\n";
		cout << "\t\t\t\t   -----------------------------------------------------------\n";
		cout << "\t\t\t\t   |  1.- Addition              |  2.- Substraction          |\n";
		cout << "\t\t\t\t   -----------------------------------------------------------\n";
		cout << "\t\t\t\t   |  3.- Multiplication        |  4.- Division              |\n";
		cout << "\t\t\t\t   -----------------------------------------------------------\n";
		cout << "\t\t\t\t   |  5.- Power                 |  6.- Exit                  |\n";
		cout << "\t\t\t\t   -----------------------------------------------------------\n";
		cout << "\t\t---------------------------------------------------------------------------------------------------\n";
		cout << "\n -Choose the option you wish to perform: ";
        cin >> opc;
        system("cls");
        switch(opc)
        {
            case 1:
               cout << "\t\t-------------------------------------------------------------------------\n";
               cout << "\t\t\t\t      |            Addition           |\n";
               cout << "\t\t-------------------------------------------------------------------------\n";
               cout << "\n -Enter two numbers: " << endl;
               cin >> a;
               cout << "+ " << endl;
               cin >> b;
               c=addition(a,b);
               cout<<"\nThe sum result is "<<a<<"+"<<b<<"="<<c<<"\n"<<endl;
               system("PAUSE");
            break;
            case 2:
               cout << "\t\t-------------------------------------------------------------------------\n";
               cout << "\t\t\t\t      |            Substraction           |\n";
               cout << "\t\t-------------------------------------------------------------------------\n";
               cout << "\n -Enter two numbers: " << endl;
               cin >> a;
               cout << "- " << endl;
               cin >> b;
               c=subtraction(a,b);
               cout<<"\nThe subtraction result is "<<a<<"-"<<b<<"="<<c<<"\n"<<endl;
               system("PAUSE");
            break;
            case 3:
               cout << "\t\t-------------------------------------------------------------------------\n";
               cout << "\t\t\t\t      |            Multiplication           |\n";
               cout << "\t\t-------------------------------------------------------------------------\n";
               cout << "\n -Enter two numbers: " << endl;
               cin >> a;
               cout << "* " << endl;
               cin >> b;
               c=multi(a,b);
               cout<<"\nThe multiplication result is "<<a<<"*"<<b<<"="<<c<<"\n"<<endl;
               system("PAUSE");
            break;
            case 4:
               cout << "\t\t-------------------------------------------------------------------------\n";
               cout << "\t\t\t\t      |            Division           |\n";
               cout << "\t\t-------------------------------------------------------------------------\n";
               cout << "\n -Enter two numbers: " << endl;
               cin >> a;
               cout << "/ " << endl;
               cin >> b;
               c=division(a,b);
               cout<<"\nThe division result is "<<a<<"/"<<b<<"="<<c<<"\n"<<endl;
               system("PAUSE");
            break;
            case 5:
               cout << "\t\t-------------------------------------------------------------------------\n";
               cout << "\t\t\t\t      |            Power           |\n";
               cout << "\t\t-------------------------------------------------------------------------\n";
               cout << "\n -Enter two numbers: " << endl;
               cin >> a;
               cout << "^" << endl;
               cin >> b;
               c=power(a,b);
               cout<<"\nThe power result is "<<a<<"^"<<b<<"="<<c<<"\n"<<endl;
               system("PAUSE");
            break;
            case 6:
                cout << "\n - Leaving the calculator... -" << endl;
            break;
            default:
                cout << "\nWrong choice\n";

        }
    } while(opc!=6);
    return 0;
}
