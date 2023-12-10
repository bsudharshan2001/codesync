#include<bits/stdc++.h> // All included in stdc++.h
#include<math.h>
#include<string.h>

//Defining function prototypes here
void example_pairs();
void example_vectors();

using namespace std; // No need to write std::cout
int main(){
    // example_pairs();
    example_vectors();
    return 0;
} 

//Pairs in STL
void example_pairs(){
    pair <int, int> p = {1, 3}; //Dont forget to name the pair

    cout<<p.first<<"\n";
    cout<<p.second;

    pair<int ,pair <int, int>> p1= {1, {2,3}}; //Pair within a pair

    cout<<p1.first<<"\n";
    cout<<p1.second.first<<"\n";
    cout<<p1.second.second<<"\n";

    pair<int, int> arr[] = { {1,2}, {3,4} , {4,5}};

    cout<<arr[1].second;
    cout<<arr[2].first;

    //Now how do I print the pair (Entire pair p1) here not the elements in it like (first or second)
    //Like cout<<p1;
    //or cout<<arr[1];
    // I dont why this doesnt work?

}

// Vectors used for queues, list maps etc.
// Vector is container

//We use vectors because arrays are immutable and also constant in size
void example_vectors(){

    //Vector acts as singly-linked list internally

    vector <int> v; // Creates an empty container

    v.push_back(1); // Pushes 1 into the container
    v.emplace_back(2); // Kind of does the same thing as push back, dynamically increases the size of the container
    // emplace_back is faster than push_back()
    //Find out why?
    //Also find out how to print this vector elements?

    //We can also vector as a pair ie. pairs inside a vector
    v.emplace_back(3);
    v.emplace_back(4);
    v.emplace_back(5);
    v.emplace_back(6);
    v.emplace_back(7);

    vector <pair<int, int>> v1;

    v1.push_back({1,2});
    v1.emplace_back(3,4); //No need of curly braces like needed in push_back, automatically assumes it's a pair

    //Vectors which already pre-existing sizes and values

    vector <int> v2 (5,100); // Here 5 is the vector size, 100 is the value of the 5 instances in the vector
    // the content of the above vector will be {100,100,100,100,100}


    //If dont want any values, just size
    vector <int> v3 (5); //declares 5 instances of 0 or any garbage values

    //Copy one vector to other (Initialize the other with this one)
    vector <int> org (5, 150);
    vector <int> copy (org); //Copying org -> copy


    //Accessing elemets in the vector -> Iterators

    vector <int>::iterator it = v.begin(); //v.begin points to the memory location only not the value

    it++;
    cout<<*(it)<<" "; //*(address) to give value inside the address

    it=it+2;
    cout<<*(it)<<" "<<"\n";

    // vector <int>::iterator it=v.end();
    //v.end() will not exactly point to last in the vector, it will point to a location after last/end

    // vector <int>::iterator it=v.rend(); //never used
    // reverse the ends and same like end() (point to the position after mentioned)

    // vector <int>::iterator it=v.rbegin(); //never used
    //works like begin(), but in the reverse

    //Access like a array using [] or v.at(avoid this)
    cout<<v[1]<<" "<< v.at(0);

    cout<<v.back()<<" "; //last element

    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }

    for(auto it=v.begin();it!=v.end();it++){ //auto - automatically defines a data types and assignes it to a vector iterator
        cout<<*(it)<<" ";
    }

    //for each loop
    for(auto it: v){
        cout<<it<<"";
    }

    //deletion in a vector -> erase()
    //delete at the location
    v.erase(v.begin()+1);

    //erase between (start, end after the element)
    v.erase(v.begin()+2, v.begin()+4);


    //Insert function
    vector<int>v(2,100); //{100, 100}
    //Insert at a particular location
    v.insert(v.begin(),300); // {300,100,100}
    //Insert multiple elements -> use like vector initiation
    v.insert(v.begin()+1,2,10); // {300,10,10,100,100}

    //Insert one vector into another
    vector<int>w(2,50); //{50,50}
    v.insert(v.begin(), w.begin(), w.end());

    //get the vector size
    cout<<v.size();

    //pops out the last element
    v.pop_back();

    //v1 -> {10,20}
    //v2 -> {30,40}
    // v1.swap(v2); //Now v1 -> {30,40} and v2 -> {10,20}

    //Erase the entire vector
    v.clear();

    //Does the vector has minimum of 1 element (v empty or not)
    cout<<v.empty();

}


void example_list(){

    //List acts as doubly-linked list internally

    list<int> ls;
    
    ls.push_back(2); //{2}

    ls.emplace_back(4); // {2,4}

    //Push from front
    ls.push_front(5); // {5,2,4}

    ls.emplace_front(3); //{3,5,2,4}

    //rest all functions same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap


}


void example_deque(){
    deque<int> dq;
    
    dq.push_back(1); //{1}

    dq.emplace_back(2); // {1,2}

    //Push from front
    dq.push_front(4); // {4,1,2}

    dq.emplace_front(3); //{3,4,1,2}

    dq.pop_back(); //{3,4,1}
    dq.pop_front(); // {4,1}

    dq.back();

    dq.front();

        //rest all functions same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}

void example_stack(){
    stack<int>st; //LIFO
    st.push(1); // {1}
    st.push(2); // {2,1}
    st.push(3); // {3,2,1}
    st.push(3); // {3,3,2,1}
    st.emplace(5); // {5,3,3,2,1}

    cout<<st.top(); //prints 5, also **st[2] is invalid **, cant access like vectors

    st.pop();

    cout<<st.top();
    cout<<st.size();
    cout<<st.empty();

    stack<int> st1,st2;
    st1.swap(st2);

}


void example_queue(){
    //FIFO
    queue<int>q;
    q.push(1); // {1}
    q.push(2); // {1, 2}
    q.emplace(4);// {1, 2, 4}

    q.back()+=5; // {1, 2, 9}

    cout<<q.back(); //9

    cout<<q.front(); //1

    q.pop(); // {2,9}

    cout<<q.front(); //2

    //size swap empty -> same as stack
}
