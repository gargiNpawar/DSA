#include<bits/stdc++.h>
using namespace std;
int main()
/*{
int i=1;
while(i<=5){
    cout<<"Helloo"<< i <<endl;
    i=i+1;
}
return 0;
}
//do ensures that the first time the action is done/printed 
//and checks the condition later

//DO WHILE
{   
    int i=2;
    do{
        cout<<"Helloo "<< i <<endl;
        i=i+1;   
    }while(i<=1);
    cout<<i<<endl;
}
//even though i=2 doesnt satisfy the condition is executes atleast once and then comes out of loop

//FACTORIAL OF NO
{
    int n=5;
    int factorial=1;
    while(n>0){ //condition
        factorial=factorial * n; //print
        n=n-1; //decreament

    }
    cout<<"Factorial of 5 is "<<factorial<<endl;
    return 0;
}
*/
{
    int numbers[]={11,23,3,4,5,6,7,88,9,10};
    int target=6;
    int index=0;
    for(int num:numbers){ //this for loop doesn't give the index directly
        if(num==target){
            cout<<"Target found at:"<< index<<endl;
            break;
            // Using 'break' to exit the loop early when the target is found
        }
        cout<<"Checking "<<num<<endl;
        index++;
    }
    for(int num:numbers){
        if(num%2==0){
            continue;
            // Using 'continue' to skip specific elements ie even nos
        }
        cout<<"odd number: "<<num<<endl;
    }
    
    return 0;

}    