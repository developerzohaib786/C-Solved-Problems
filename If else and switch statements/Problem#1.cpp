    #include <iostream>
    #include <string>
    using namespace std;
    int main (){
        int a;
        int b;
        int c;
        string choice;
        cout<<"Enter your first number"<<endl;
        cin>>a;
        cout<<"Enter your second number"<<endl;
        cin>>b;
        cout<<"Choose action to preform"<<endl;
        cout<<"addition"<<endl;
        cout<<"subtraction"<<endl;
        cout<<"multiplication"<<endl;
        cout<<"division"<<endl;
        cout<<"bitwise_or"<<endl;
        cout<<"bitwise_and"<<endl;
        cout<<"bitwise_xor"<<endl;
        cout<<"Enter correct spelling with lower case"<<endl;
        cin>>choice;
        if (choice == "addition"){
        c=a+b;
        cout<<c;
        }
        else if (choice == "subtraction"){
        c=a-b;
        cout<<c;
        }
        else if (choice == "multiplication"){
        c=a*b;
        cout<<c;
        }
        else if (choice == "division"){
        c=a/b;
        cout<<c;
        }
        else if (choice == "bitwise_or"){
        c=a & b;
        cout<<c;
        }
        else if (choice == "bitwise_and"){
        c=a | b;
        cout<<c;
        }
        else if (choice == "bitwise_xor"){
        c=a ^ b;
        cout<<c;
        }
        else{
            cout<<"None of the action selected!";
        }
        return 0;
    }
