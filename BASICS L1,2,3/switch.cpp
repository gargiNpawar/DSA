#include<bits/stdc++.h>
using namespace std;
int main()
/*{
    int day;
    cout<<"Enter the day u want out of 7days:";
    cin>>day;

    switch(day)
    {
        case 1:
            cout<<"Monday";
            break;  //it breaks out of all condition statements u have written
        case 2:
            cout<<"Tuesday";
            break;
        case 3:
            cout<<"Wednesday";
            break;    
        case 4:
            cout<<"Thursday";
            break;
        case 5:
            cout<<"Friday";
            break;
        case 6:
            cout<<"Saturday";
            break;    
        case 7:
            cout<<"Sunday";
            break;  
        default:
            cout<<"Invalid input" ;     

    }
    cout<<"Check done";
    return 0;
}*/
//Limited to Integer or Character Types
// Duplicate case, not allowed
{
    char grade;
    cout<<"Enter the grade u recevied (A/B)";
    cin>>grade;
    grade = toupper(grade);//convert to uppercase before switch 

    switch (grade) {
        case 'A':
            cout << "Excellent!" << endl;
            break;
        case 'B':
            cout << "Good!" << endl;
            break;
        default:
            cout << "Not specified." << endl;
    }

    return 0;
}