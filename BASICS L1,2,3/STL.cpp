#include<bits/stdc++.h>
using namespace std;
/*
//PAIRS
void explainpair()
{
    pair<int,int>p = {1,7};
    cout<<p.first<<" "<<p.second<<endl;

    pair<int,pair<int,int>> p1={1,{3,5}};
    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;

    pair<int,int>arr[]={{1,4},{4,8},{5,6}};
    cout<<arr[1].second<<endl;
    cout<<arr[2].first<<endl;

}
int main()
{
    explainpair();
    return 0;
}
*/


//VECTOR
//vector are dynamic in nature
/*
void explainvector()
{   
    //DECLARE A VECTOR
    vector<int> v; //{ }
    v.push_back(1);//{1}
    v.emplace_back(6);//{1,6} emplace is faster than push_back

    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2);

    vector<int> v(5,100); //a container of size 5 is defined with 5 instances of 100
    //{100,100,100,100,100}
    vector<int> v(5);// a container of size 5 with 5 instances of 0 or any garbage value is defined
    v.push_back(1); //increases the size of v from 5 to 6 dynamically

    vector<int> v1(5,20);
    vector<int> v2(v1);//a copy of v1 passed to v2
     
    //ITERATOR POINTS TO THE MEMORY 
    vector<int>::iterator it=v.begin  
    //syntax..datastructure<datatype>::iterator name=points to the memory address where the 20 is,*(v.begin()) accesses the element 
    //{20,10,15,6,7}

    it++; //moves to the next memory ->10
    cout<<*(it)<<" ";

    it=it+2; //->6
    cout<<*(it)<<" ";

    vector<int>:: iterator it=v.end();// points to the element after the end/last element
    cout<< v[0]<< " "<<v.at(0);
    cout<< v.back()<<" "; // {10,20,30} points to element at 30

    //printing the vectors

    for(vector<int> ::iterator it = v.begin(); it!=v.end(); it++)
    {
        cout<< *(it)<<" ";
    }
    //or shortcut 
    for(auto it = v.begin(); it !=v.end(); it++)
    {
        cout<<*(it)<<" ";
    }
    for(auto it:v){
        cout<<it<<" ";
    }

    //delete the element
    //{ 10,20,12,23,35}
    v.erase(v.begin()+2,v.begin()+4);//(start,end)+2 points at 12 and +4 points at 35
    //elements deleted are 12 and 23 ie {10,20,35}

    //insert the element
    vector<int>v(2,100); //{100,100}
    v.insert(v.begin(),300); //{300,100,100}
    v.insert(v.begin()+1,2,10);//{300,10,10,100,100}

    vector<int> copy(2,50); //{50,50}
    v.insert(v.begin(),copy.begin(),copy.end());//{50,50,300,10,10,100,100}

    //size of vector
    cout<<v.size();
    
    //{10,20,30}
    cout<<v.pop_back();//removes the last element ie 30

    //swap the vectors
    v1.swap(v2);  //v1<->v2

    //erases the vector
    v.clear();

    cout<<v.empty(); //returns true or false

}
*/


/*
//LIST when we dont know much about the size
void explainList()
{
    list<int> ls;
    ls.push_back(2); //{2}
    ls.emplace_back(4); //{2,4}
    ls.push_front(5); //{5,2,4}
    ls.emplace_front(); {2,4};


 //rest all functions are same


}
*/


//STACK IS LIFO LAST IN FIRST OUT...PUSH,TOP,POP
//all operation in o(1) ie constant time
/*
void explainStack()
{
    stack<int> st;
    st.push(1); //{1}
    st.push(2); //{2,1}
    st.push(3); //{3,2,1}
    st.push(3); //{3,3,2,1}
    st.emplace(5); //{5,3,3,2,1}

    cout<<st.top(); //prints 5
    st.pop(); // removes the top element {3,3,2,1}
    cout<<st.top(); // prints 3
    cout<<st.size(); //4
    cout<<st.empty(); //false

    stack<int> st1,st2;
    st1.swap(st2); //swap of stacks

}
*/


//QUEUE FOLLOWS FIFO ie first in first out ...all operations at O(1)
/*
void explainQueue()
{
    queue<int> q;
    q.push(1); // start of queue->{1}
    q.push(2); //{1,2}
    q.emplace(6); //{1,2,6}

    q.back() +=5; //{ 1,2,6+5=11}
    cout<< q.back(); //11
    cout<< q.front(); //1
    
    q.pop(); //deletes the front guy...{2,11}
    cout<< q.front(); //2
 
}
*/


//PRIORTY QUEUE 
/*
void explainPQ()
{   //arranges in the higher->lower value 
    priority_queue<int>pq;
    pq.push(5); //{5}       
    pq.push(2); //{5,2}
    pq.push(8);//{8,5,2}
    pq.emplace(10) //{10,8,5,2}

    cout<<pq.top(); //prints 10
    pq.pop(); //{8,5,2}

    cout<<pq.top(); //print 8

    //minimum heap.. lower->higher
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(5);  //{5}
    pq.push(2);  //{2,5}
    pq.push(8);  //{2,5,8}
    pq.emplace(10); //{2,5,8,10}

    cout<<pq.top(); //prints 2
    //push and pop--log(n)
    //top--o(1)

}
*/


//SET...ARRANGES IN THE SORTED ORDER AND IS UNIQUE
//ALL OPERATIONS IN LOGORITHMIC TIME IE log(N)
/*
void explainSet()
{
    set<int>st;
    st.insert(1); //{1}
    st.emplace(2); //{1,2}
    st.insert(4); //{1,2,4}
    st.insert(3); //{1,2,3,4}
    st.insert(2); //{1,2,3,4} only unique elements

    auto it=st.find(3); //iterator that points to the add of 3
    auto it=st.find(6); //not present int the set so returs st.end();

    //ERASE
    //Finds and erases 5
    st.erase(5); //erases 5  form set and takes  logarithmin time
    
    //Erases the element at iterator
    auto it=st.find(3);
    st.erase(it); //Takes O(1) time to remove using the iterator.

    //erases more than one in{1,2,3,4,5}
    auto it1=st.find(2);
    auto it2=st.find(4);
    st.erase(it1,it2);
    //it1 points to {2} and it2 points to {4}...so 2 and 3 are erased

    //count
    int cnt=st.count(1);//checks it 1 is present or not and how many are there
                    //it returns 0->not present 

    //lower and upper bound





}
*/


//MULTISET----it follows only sorted fun of set...allows for multiple duplicate occurences
/*
void explainMultiSet(){
   multiset<int> ms;
   ms.insert(1); //{1}
   ms.insert(1); //{1,1}
   ms.insert(1); //{1,1,1}

   ms.erase(1); //all 1's are erased
   ms.erase(ms.find(1)); //only single 1 is erased as find points to the iterator
   auto it1 = ms.find(1);
   auto it2 = it1;
   if (it2 != ms.end()) ++it2;  // move 1 step
   if (it2 != ms.end()) ++it2;  // move another step
   ms.erase(it1, it2); // erase the range: first two 1s

   int cnt=ms.count(1); //give the total count of no of 1's
   cout<<cnt;
}
int main() {
    explainMultiSet();
    return 0;
}



*/
//UNORDERED SET--->> HAS RANDOMIZED ORDER OF SET AND IS UNIQUE
//HAS SAME FUN AS SET BUT DOESNT HAVE UPPER AND LOWER BOUND

//MAP--{unique key in sorted order, value} pairs and key can be of any datatype(int,double,pair)
void explainMap()
{
    //{key,value}
    map<int,int> mpp;
    map<int,pair<int,int>> mpp;
    map<pair<int,int>,int> mpp;


    //map<int,int> mpp;
    mpp[1]=2 ; //{key=1,v=2}
    mpp.emplace({3,1}) ;//[{1,2},{3,1}]
    mpp.insert({2,4}); //[{1,2},{2,4},{3,1}]
    mpp[{2,3}]=10 //{key={2,3},v=10}

    for(auto it:mpp){
        cout<<"key: "it.first<<" value:  "<<it.second<<endl;
        /*it print 1 2
                   2 4
                   3 1 
        */ 

    }
    // map<pair<int,int>,int> mpp;
    mpp[{2, 3}]=10 //{key={2,3},v=10}
    mpp[{1, 2}] = 10;
    mpp[{3, 1}] = 20;
    mpp.insert({{2, 4}, 30});

    // Iterating over the map
    for (auto it : mpp) {
        cout << "Key: {" << it.first.first << ", " << it.first.second << "} ";
        cout << "Value: " << it.second << endl;
    }
    






}




