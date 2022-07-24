#include <iostream>  //Header files
#include <math.h>
#include<stdlib.h>
using namespace std;
class Calculator{   //Creating a class
protected:
   float a, b;
public:
    
    float operator + (Calculator C )  //Compile time polymorphism
    {                                 //Operator overloading case to add two numbers
     int temp=a+C.a;
     return temp;
    }
   
    float sub()
    {
        return a - b;               // Function to subtract two numbers
    }
   
    float mul()
    {
        return a * b;              // Function to multiply two numbers
    }
   
    float div()
    {
        if (b == 0)
        {
   
         cout << "Division By Zero" <<endl;  // Function to divide two numbers
            return INFINITY;
        }
        else
        {
            return a / b;
        }
    }
    
    float sq()
    {
        return sqrt(a);      // Function to find square root of a number
    }
    
    float p_a_b()
    {
       return pow(a,b);      // Function to find a to the power b
    }
    
    float p_a_2()
    {
        return pow(a,2);    // Function to find square of a number
    }

    float p_a_3()
    {
        return pow(a,3);     // Function to find cube of a number
    }
    
    float p_a_inverse()
    {
        return pow(a,-1);     // Function to find inverse of a number
    }
    
    float p_10_a()
    {
        return pow(10,a);     // Function to find 10 to the power a
    }
    
    float facto()
    {
        int temp=1;
        for(int i=1;i<=a;i++){               // Function to find factorial of a number
            temp=temp*i;
        }
        return temp;
    }
    
    float log_10()
    {
        return log10(a);                      // Function to find log10(a)
    }
    
    float sin(){
        return ::sin(a*3.14159/180);           // Function to find Sin(a)
    }

    float cos(){
        return ::cos(a*3.14159/180);           // Function to find Cos(a)
    }

    float tan(){
        return ::tan(a*3.14159/180);           // Function to find Tan(a)
    }

    float cot(){
        return 1/::tan(a*3.14159/180);          // Function to find cot(a)
    }

    float sec(){
        return 1/::cos(a*3.14159/180);          // Function to find sec(a)
    }
    
    float cosec(){
        return 1/::sin(a*3.14159/180);         // Function to find cosec(a)
    }
};

class Values:public Calculator{               //Derived class 1
    public:

    void result1()
    {
        cout << "Enter First Number: ";       // Function to take two inputs from user
        cin >> a;
        cout << "Enter Second Number: ";  
        cin >> b;
    }
};
class Value:public Calculator{                //Derived class 2
    public:
    void result2()
    {
        cout << "Enter the Number: ";        // Function to take single input from user
        cin >> a;
    }

};
int main()
{
    int ch;
    Values V1;     //Creating object for derived class Values
    Value V2,V3;   //Creating object for derived class Value
    cout<<"\t\t\t**********************"<<endl<<
        "\t\t\tSCIENTIFIC CALCULATOR"<<endl<<
        "\t\t\t**********************"<<endl;
    cout << "--------------------"<<endl<<    //Menu
            " Enter your choice: "<<endl<<
            "--------------------"<<endl<<
            
            "1.Addition" <<endl<<
            "2.Subtraction" <<endl<<
            "3.Multiplication" <<endl<<
            "4.Division" <<endl<<
            "5.Square root"<<endl<<
            "6.a^b"<<endl<<
            "7.a^2"<<endl<<
            "8.a^3"<<endl<<
            "9.a^-1"<<endl<<
            "10.10^a"<<endl<<
            "11.Factorial"<<endl<<
            "12.log10(a)"<<endl<<
            "13.Sin(a)"<<endl<<
            "14.Cos(a)"<<endl<<
            "15.Tan(a)"<<endl<<
            "16.Cot(a)"<<endl<<
            "17.Sec(a)"<<endl<<
            "18.Cosec(a)"<<endl<<
            "19.Exit";
         
    while(1)
    {
        cout << "\nEnter Choice: ";  //Input for choice
        cin >> ch;
        switch (ch)                  //Use of switch case
        {
        case 1:
            cout<< "First data"<<endl;       
            cout<<"---------"<<endl;
            V2.result2();
            cout<< "Second data"<<endl;
            cout<<"---------"<<endl;
            V3.result2();
           
            cout << "Result: " <<V2+V3<< endl;            // addition using compile time polymorphism
            break;
        case 2:
             V1.result1();
            cout << "Result: " <<V1.sub() << endl;       //For subtraction
            break;
        case 3:
            V1.result1();
             cout << "Result: " <<V1.mul() << endl;     //For multiplication
            break;
        case 4:
            V1.result1();
             cout << "Result: " <<V1.div() << endl;     //For division
            break;
        case 5:
            V2.result2();
            cout<<"Result: "<<V2.sq()<<endl;           //For square
            break; 
        case 6:
            V1.result1();
            cout<<"Result: "<<V1.p_a_b()<<endl;        //For a to the power b
            break;
        case 7:
            V2.result2();
            cout<<"Result: "<<V2.p_a_2()<<endl;       //For square 
            break;  
        case 8:
            V2.result2();
            cout<<"Result: "<<V2.p_a_3()<<endl;        //For cube
            break;  
        case 9:
            V2.result2();
            cout<<"Result: "<<V2.p_a_inverse()<<endl; //For inverse
            break; 
        case 10:
            V2.result2();
            cout<<"Result: "<<V2.p_10_a()<<endl;      //For 10 to the power a
            break;  
        case 11:
            V2.result2();
            cout<<"Result: "<<V2.facto()<<endl;       //For factorial
            break;
        case 12:
            V2.result2();
            cout<<"Result: "<<V2.log_10()<<endl;      //For log10(a)
            break; 
      
        case 13:
            V2.result2();
            cout<<"Result: "<<V2.sin()<<endl;         //For sin(a)
            break;
        case 14:
            V2.result2();
            cout<<"Result: "<<V2.cos()<<endl;          //For cos(a)
            break;
        case 15:
            V2.result2();
            cout<<"Result: "<<V2.tan()<<endl;         //For tan(a)
            break;   
        case 16:
            V2.result2();
            cout<<"Result: "<<V2.cot()<<endl;         //For cot(a)
            break;  
        case 17:
            V2.result2();
            cout<<"Result: "<<V2.sec()<<endl;         //For sec(a)
            break;
        case 18:
            V2.result2();
            cout<<"Result: "<<V2.cosec()<<endl;       //For cosec(a)
            break;       
        case 19:
            cout<<"Successfully exit !"<<endl;
             exit(0);                                 //To exit
        default:
             cout<<"***You entered invalid choice!****"<<endl<<      //For invalid choice case
             "Please enter a valid choice!!";
             break;                             
        }
   } 
     return 0;
}