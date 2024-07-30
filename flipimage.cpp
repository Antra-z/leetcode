
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int> > flipAndInvertImage(vector<vector<int>>& image) 
{
	for(int row=0;row<image.size();row++)
    {
		reverse(image[row].begin(),image[row].end());
		for (int i=0;i<image[row].size();i++)
        {
			if(image[row][i]==0){
				image[row][i]=1;
			}
			else{
				image[row][i]=0;
			}
		}
	}
	return image;
}
int main()
{
	vector<vector<int> > image={{1,1,0},{0,1,0},{0,1,1}};
	image=flipAndInvertImage(image);
	for(auto i: image)
	{
		for(auto j:i)
        {
            cout<<j<<" ";
        }
	}
}