#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;


int main()
{
    
    int k = 2;
    vector<int> mat  = {2,2,3,4,0,1,2,0};
    cout << "Vector: ";
    // if (mat[i] == 4)
    vector<int> new_arr = {};
    vector<int> find_n = {};
    for (int i = 0; i < k; i++)
         {
            new_arr.push_back(mat[i]);
        }
        
    
    cout << endl;
    sort(new_arr.begin(), new_arr.end());
    for (int i = 1; i < new_arr.size() + 1; i++)
         {
            find_n.push_back(i);;
        }    
    cout << endl;
    for (int i = 0; i < new_arr.size(); i++)
         if (new_arr[i] == 0) {
          new_arr.erase (new_arr.begin()+i);
        }
        
    cout << endl;
    for (int i = 0; i < new_arr.size(); i++)
         {
            cout << new_arr[i] << " ";
        }
        
    cout << endl;
    
    
  
    
    for (int i = 0; i < find_n.size(); i++)
         {
            cout << find_n[i] << " ";
        }
    cout << endl;
    
    for (int i = 0; i < find_n.size(); i++) {
        if (new_arr[i] != find_n[i]) {
            cout << find_n[i] << " ";
        }
    }
    cout << endl;
    set<int> s;
 
    // Traverse the Vector
    for (int x : find_n) {
 
        // Insert each element
        // into the Set
        s.insert(x);
    }
    cout << "Set: ";
    for (int x : s) {
        cout << x << " ";
    }
    cout << endl;
    
    set<int> z;
    for (int x : new_arr) {
 
        // Insert each element
        // into the Set
        z.insert(x);
    }
    cout << "Set: ";
    for (int x : z) {
       
        cout << x << " ";
        
    }
    cout << endl;
    
    set<int> result;
    set_difference(s.begin(), s.end(), z.begin(), z.end(),
    inserter(result, result.end()));
    
    for (int x : result) {
       
        cout << x << " ";
        
    }
    cout << endl;
    
    return 0;
}
