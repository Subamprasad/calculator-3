// //using if else

// #include<iostream>;
// using namespace std;

// int main(){
//     int num1, num2, op;
//     char x;


//     while (true)
//     {
//     cout<<"********** Two Number Calculator ***********\n\n";
//     cout<<"\tPress 1 for addition\n";
//     cout<<"\tPress 2 for subtraction\n";
//     cout<<"\tPress 3 for multiplication\n";
//     cout<<"\tPress 4 for division\n";
//     cout<<"\tPress 5 for remainder\n\t";
//     cin>>x;
//     cout<<"\t\tEnter a first number\n\t\t\t";
//     cin>>num1;
//     cout<<"\t\tEnter a sesond number\n\t\t\t";
//     cin>>num2;

//     if(x=='1'){
//         op=num1+num2;
//         cout<<"\t\tThe sum is = "<<op<<endl;
//     }
//     else if(x=='2'){
//         op=num1-num2;
//         cout<<"\t\tThe subtraction is = "<<op<<endl;
//     }
//     else if(x=='3'){
//         op=num1*num2;
//         cout<<"\t\tThe multiplication is = "<<op<<endl;
//     }
//     else if(x=='4'){
//         op=num1/num2;
//         cout<<"\t\tThe division is = "<<op<<endl;
//     }
//     else if(x=='5'){
//         op=num1%num2;
//         cout<<"\t\tThe remainder is = "<<op<<endl;
//     }
//     else{
//         cout<<"\tError! Invalid Operation "<<endl;
//     }
//     cout<<endl;
//     }
//     return 0;
// }




//  //using a switch

#include <iostream>
using namespace std;

int main() {
    char oper;
    float num1, num2;
    while (true)
   {
    cout<<"********** Two Number Calculator ***********\n\n";
    cout<<"\tPress 1 for addition\n";
    cout<<"\tPress 2 for subtraction\n";
    cout<<"\tPress 3 for multiplication\n";
    cout<<"\tPress 4 for division\n\t";
    // cout<<"\tPress 5 for remainder\n\t";
    cin>>oper;
    cout<<"\t\tEnter a first number\n\t\t\t";
    cin>>num1;
    cout<<"\t\tEnter a sesond number\n\t\t\t";
    cin>>num2;

    switch (oper) {
        case '1':
        cout<<"\t\tThe sum is = "<<num1+num2<<endl<<endl;
        break;
        case '2':
        cout<<"\t\tThe subtraction is = "<<num1-num2<<endl<<endl;
        break;
        case '3':
        cout<<"\t\tThe muitiplication is = "<<num1*num2<<endl<<endl;
        break;
        case '4':
        cout<<"\t\tThe division is = "<<num1/num2<<endl<<endl;
        break;
        // case '5':
        // cout<<"\t\tThe remainder is = "<<num1%num2<<endl<<endl;
        // break;
        default:
            // operator is doesn't match any case constant (1, 2, 3, 4, 5)
        cout << "\tError! Invalid Operation";
        break;
    }
   }
    return 0;
}




// //using a function

// #include<iostream>;
// using namespace std;


// void sum(){
// int n1,n2;
// cout<<"\t\tEnter a first number\n\t\t\t";
// cin>>n1;
// cout<<"\t\tEnter a second number\n\t\t\t";
// cin>>n2;
// cout<<"\t\tThe sum = "<<n1+n2<<endl<<endl;
// }

// void subtraction(){
// int n1,n2;
// cout<<"\t\tEnter a first number\n\t\t\t";
// cin>>n1;
// cout<<"\t\tEnter a second number\n\t\t\t";
// cin>>n2;
// cout<<"\t\tThe subtraction = "<<n1-n2<<endl<<endl;
// }
// void multiplicatio(){
// int n1,n2;
// cout<<"\t\tEnter a first number\n\t\t\t";
// cin>>n1;
// cout<<"\t\tEnter a second number\n\t\t\t";
// cin>>n2;
// cout<<"\t\tThe multiplicatio = "<<n1*n2<<endl<<endl;
// }
// void division(){
// int n1,n2;
// cout<<"\t\tEnter a first number\n\t\t\t";
// cin>>n1;
// cout<<"\t\tEnter a second number\n\t\t\t";
// cin>>n2;
// cout<<"\t\tThe division = "<<n1/n2<<endl<<endl;
// }
// void remainder(){
// int n1,n2;
// cout<<"\t\tEnter a first number\n\t\t\t";
// cin>>n1;
// cout<<"\t\tEnter a second number\n\t\t\t";
// cin>>n2;
// cout<<"\t\tThe remainder = "<<n1%n2<<endl<<endl;
// }


// int main(){
//     int n;
//     while (true){
//     cout<<"********** Two Number Calculator ***********\n\n";
//     cout<<"\tPress 1 for addition\n";
//     cout<<"\tPress 2 for subtraction\n";
//     cout<<"\tPress 3 for multiplicatio\n";
//     cout<<"\tPress 4 for division\n";
//     cout<<"\tPress 5 for remainder\n\t";
//     cin>>n;
//     if (n==1)
//     sum();
//     else if (n==2)
//     subtraction();
//     else if (n==3)
//     multiplicatio();
//     else if (n==4)
//     division();
//     else if (n==5)
//     remainder();
//     else
//         cout<<"\tError! Invalid Operation\t"<<endl;
//     }
//     return 0;
// }