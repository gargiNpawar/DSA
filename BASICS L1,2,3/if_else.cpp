#include<bits/stdc++.h>
using namespace std;
int main()
/*{
    int age;
    cout<<"Enter your current age:";
    cin>>age;
    if(age>=18)
    {
        cout<<"U are an adult";
    }
    else
    {
        cout<<"U are not an adult";
    }
    return 0;
}
{
    int marks;
    cout<<"Enter your marks:";
    cin>>marks;
    if(marks<25)   //so if this condtion is false it means the input marks are 
                   //definetly greater than 25
    {
        cout<<"F";
    }
    else if(marks>=25 && marks<=44){  //so we can omit the marks>=25 condition
        cout<<"E";
    }
    else if(marks>=45 && marks<=49){
        cout<<"D";
    }
    else if(marks>=50 && marks<=59){
        cout<<"C";    
    }
    else if(marks>=60 && marks<=79){
        cout<<"B";    
    }
    else if(marks>=80 && marks<=100){
        cout<<"A" ;   
    }
    return 0;
} 
//if we use IF CONDITION...even if the first condtion is true it will check
//all the remaining condtions making it time taking...so we use else if


{
    int marks;
    cout<<"Enter your marks:";
    cin>>marks;
    if(marks<25)   //so if this condtion is false it means the input marks are 
                   //definetly greater than 25
    {
        cout<<"F";
    }
    else if(marks<=44){  //so we can omit the marks>=25 condition
        cout<<"E";
    }
    else if(marks<=49){
        cout<<"D";
    }
    else if(marks<=59){
        cout<<"C";    
    }
    else if(marks<=79){
        cout<<"B";    
    }
    else if( marks<=100){
        cout<<"A" ;   
    }
    return 0;
}*/
{ //nested if 
    int age;
    cin>>age;
    if (age<18){
        cout<<"Not eligible for job";
    }
    else if (age<=57){
        cout<<"Eligible for job";
        if(age>=55){
            cout<<",but retirement soon";
        }
    }
    else{
        cout<<"retirment time";
    }    
    return 0;
}     
