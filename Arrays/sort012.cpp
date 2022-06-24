#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int i;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int> vec0, vec1, vec2;



    for(i=0;i<n;i++){
        switch(arr[i]){
            case 0:
            vec0.push_back(arr[i]);
            break;

            case 1:
            vec1.push_back(arr[i]);
            break;

            case 2:
            vec2.push_back(arr[i]);
            break;
            
        }
    }

    vector<int> :: iterator it;

    for(it = vec1.begin(); it!= vec1.end(); it++){
        vec0.push_back(*it);
    }

    for(it = vec2.begin(); it!= vec2.end(); it++){
        vec0.push_back(*it);
    }

    for(i=0;i<n;i++){
        cout<<vec0[i]<<" ";
    }

    cout<<endl;

return 0;
}