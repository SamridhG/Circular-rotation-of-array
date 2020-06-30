#include<iostream>
#include<vector>
using namespace std;
class problem;

class problem{
    int N,R,Q,i;
     vector<int>A;
    public:
    problem()
    {
        cin>>N>>R>>Q;
    }
    void Array()
    {
       
        for(i=0;i<N;i++)
        {
            int c;
            cin>>c;
            A.push_back(c);
        }
    }
    void Rotation()
   {
      for(i=1;i<=R;i++)
      {
          A.insert(A.begin(),A[N-1]);
          A.pop_back();
      }
     /* for(i=1;i<=R;i++)
      {
          int j;
          int temp=A[N-1];
            for(j=N-1;j>=1;j--)
            {
                A[j]=A[j-1];
            }
            A[j]=temp;          
      }*/
    }
    void showdata()
    {
        for(i=1;i<=Q;i++)
        {
            int x;
            cin>>x;
            cout<<A[x]<<endl;
        }
    }
};

int main()
{
    problem C;
    C.Array();
    C.Rotation();
    C.showdata();
}
