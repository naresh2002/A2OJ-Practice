//88 IQ Test
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
	char mat[4][4];
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			cin>>mat[i][j];
		}
	}
	//cout<<endl;
	int i, j, ioff, joff, off_cnt;
	int sub_mtrx_size;
	/* if we make terminating condition sub_mtrx_size>=1 then we will have all 
	possible square sub matrices */
	for(int sub_mtrx_size = 2; sub_mtrx_size > 1 ; sub_mtrx_size--) 
	{
	    int off_cnt = 4 - sub_mtrx_size + 1;
	    for (int ioff = 0; ioff < off_cnt; ioff++) 
		{
	        for (int joff = 0; joff < off_cnt; joff++) 
			{
				int cntb = 0,cntw = 0;
	            for (int i = 0; i < sub_mtrx_size; i++) 
				{
	                for (int j = 0; j < sub_mtrx_size; j++) 
					{
						//cout<<mat[i+ioff][j+joff]<<" ";
						if(mat[i+ioff][j+joff]=='#')
						cntb++;
						else
						cntw++;
	                }
	                //cout<<"\n";
	            }
	            //cout<<"\n";
	            if(cntb>=3 || cntw>=3)
	            {
	            	cout<<"YES";
	            	return 0;
				}
	        }
	    }
	}
	cout<<"NO";
    return 0;
}
