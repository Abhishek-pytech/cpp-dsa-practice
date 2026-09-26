#include<bits/stdc++.h>
using namespace std;

//  void explainpair(){
//     pair<int,int> p={1,2};
//     cout<<p.first;

void explainpair(){
    pair<int, pair<int, int>> p = {1, {4, 2}};
    cout<<p.first<<endl<<p.second.second;

 }

void explainVector(){
    vector<int>v;
    v.push_back(1);
    v.emplace_back(2);
    for(int value: v)
    cout<<value <<endl;
}

void explainVectorp(){
    vector<pair<int, int>> vp;
    vp.push_back({1, 2});
    vp.emplace_back(3, 4);
    for(const pair<int, int>& value : vp)
        cout << value.first << " " << value.second << endl;
}

void explainvectorsize(){
    vector<int> v(4,20);
    vector<int>v1(v);
    for (int value : v1)
        cout << value << " ";


}

void explainvectorit(){
    vector<int> v = {1, 2, 3, 4};
    vector<int>::iterator it=v.begin();
    it = v.end();
    it++;
    cout<<*(it)<<" ";
    

    it=it+2;
    cout<<*(it);
    cout << v.back();  

}

void explainlist(){
    list<int>ls;
    ls.push_back(1);
    ls.push_front(2);
    ls.emplace_back(3);
    ls.emplace_front(4);


    for(int l:ls){
        cout<<l;
    }


}

void explainDeque(){
    deque<int>dq;
    dq.push_back(1);
    dq.push_front(4);
    dq.pop_back();
    

    for(int d:dq){
        cout<<d;
    }
}

void explainStack(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(7);

    cout<<st.top()<<endl;
    cout<<st.size();
    

}

void explainQueue(){
    queue<int> q;
    q.push(1);
    while (!q.empty()) {
        cout << q.front();
        q.pop();
    }

}


void explainpq(){
    priority_queue<int> pq;
    pq.push(1);
    pq.push(3);
    pq.push(2);
    
    pq.push(2);

    cout << pq.top();

    
}


int main(){
    explainQueue();
   
}
