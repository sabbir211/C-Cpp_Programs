#include <iostream>
using namespace std;
#include <vector>
void shortest_distance(vector<vector<int>>&matrix){
	   int nodes=matrix.size();
	   for(int k=0;k<nodes;k++){
	       
	       for(int i=0;i<nodes;i++){
	           for(int j=0;j<nodes;j++){
	                if(matrix[i][k]!=-1 && matrix[k][j]!=-1){
	                    if(matrix[i][j]==-1){
	                        matrix[i][j]=matrix[i][k]+matrix[k][j];
	                    }
	                    else{
	                        matrix[i][j]=min(matrix[i][j],matrix[i][k]+matrix[k][j]);
	                    }
	                }
	                
	                
	            
	           }
	       }
	       
	   }
	    
	}
int main()
{
    int n;
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n, -1));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            matrix[i][j] = x;
        }
    }
    shortest_distance(matrix);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
        
    }
    

}