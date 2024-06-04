//Calculation of weighted average with array.
#include <iostream>
using namespace std;
int main()
{
    int g[10];
    int w[10];
    int avg=0;int sumw=0;
    for(int i=0;i<10;i++)
        {
          cout<<g[i]*w[i];
        sumw+=g[i]*w[i];
        avg+=w[i];
        }
     avg=( sumw/avg);
    int maxgrade=g[0];
    for(int i=1;i<10;i++){
        if(g[i]>maxgrade){
            maxgrade=g[i];
        }
    }
    int maxefw=w[0];
    for(int i=1;i<10;i++){
        if( w[i]>maxefw){
             maxefw=w[i];
        }
    }
    int maxefgrade=(maxgrade*maxefw);
    cout << "average:"<<avg<< endl;
    cout << "Max grade:"<<maxgrade<< endl;
    cout << " Max effect fW"<< maxefw<< endl;
    return 0;
}
