    #include <iostream>
    #include <string>
    using namespace std;
    int main (){
        int a;
        int b;
        int c;
        int choice;
        cout<<"Enter your first number"<<endl;
        cin>>a;
        cout<<"Enter your second number"<<endl;
        cin>>b;
        cout<<"Choose action to preform"<<endl;
        cout<<"for addition = 1"<<endl;
        cout<<"for subtraction = 2"<<endl;
        cout<<"for multiplication = 3"<<endl;
        cout<<"for division = 4"<<endl;
        cout<<"for bitwise_or = 5"<<endl;
        cout<<"for bitwise_and = 6"<<endl;
        cout<<"for bitwise_xor =  7"<<endl;
        cout<<"Enter correct spelling with lower case"<<endl;
        cin>>choice;
      switch (choice)
      {
      case 1: 
      c=a+b;
      cout<<c; 
        break;
        case 2: 
      c=a-b;
      cout<<c; 
        break;
              case 3: 
      c=a*b;
      cout<<c; 
        break;
              case 4: 
      c=a/b;
      cout<<c; 
        break;
              case 5: 
      c=a | b;
      cout<<c; 
        break;
              case 6: 
      c=a&b;
      cout<<c; 
        break;
              case 7: 
      c=a^b;
      cout<<c; 
        break;
      default: cout<<"invalid selection!";
      }
        return 0;
    }
