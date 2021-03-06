//64 Sail
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(true);
	cin.tie(NULL);
	cout.tie(NULL);
	
    long long int t,sx,sy,ex,ey;
    cin>>t>>sx>>sy>>ex>>ey;
    string s;
    cin>>s;
    long long int cntn = 0,cnts = 0, cnte = 0, cntw = 0, i=0;
    long long int x1 = abs(ex-sx);
    long long int y1 = abs(ey-sy);
    long long int nn = count(s.begin(),s.end(),'N');
    long long int ss = count(s.begin(),s.end(),'S');
    long long int ee = count(s.begin(),s.end(),'E');
    long long int ww = count(s.begin(),s.end(),'W');
    if(ex==sx && ey>sy)// north
    {
    	if(nn>=y1)
    	{
    		for(i=0;i<t;i++)
    		{
    			if(s[i]=='N')
	    		{
	    			cntn++;
	    			if(cntn == y1)
	    			break;
				}
			}
			cout<<i+1;
		}
		else
		cout<<-1;
	}
	else if(ex==sx && ey<sy)// South
	{
		if(ss>=y1)
    	{
    		for(i=0;i<t;i++)
    		{
    			if(s[i]=='S')
	    		{
	    			cnts++;
	    			if(cnts == y1)
	    			break;
				}
			}
			cout<<i+1;
		}
		else
		cout<<-1;
	}
	else if(ex>sx && ey==sy)// East
	{
		if(ee>=x1)
    	{
    		for(i=0;i<t;i++)
    		{
    			if(s[i]=='E')
	    		{
	    			cnte++;
	    			if(cnte == x1)
	    			break;
				}
			}
			cout<<i+1;
		}
		else
		cout<<-1;
	}
	else if(ex<sx && ey==sy)// West
	{
		if(ww>=x1)
    	{
    		for(i=0;i<t;i++)
    		{
    			if(s[i]=='W')
	    		{
	    			cntw++;
	    			if(cntw == x1)
	    			break;
				}
			}
			cout<<i+1;
		}
		else
		cout<<-1;
	}
    else if(ex>sx && ey>sy)// north east
    {
    	if(nn>=y1 && ee>=x1)
    	{
    		for(i=0;i<t;i++)
    		{
    			if(s[i]=='N')
	    		cntn++;
	    		else if(s[i]=='E')
	    		cnte++;
	    		if(cntn>=y1 && cnte>=x1)
	    		break;
			}
			cout<<i+1;
		}
		else
		cout<<-1;
	}
	else if(ex<sx && ey>sy)// north west
    {
    	if(nn>=y1 && ww>=x1)
    	{
    		for(i=0;i<t;i++)
    		{
    			if(s[i]=='N')
	    		cntn++;
	    		else if(s[i]=='W')
	    		cntw++;
	    		if(cntn>=y1 && cntw>=x1)
	    		break;
			}
			cout<<i+1;
		}
		else
		cout<<-1;
	}
	else if(ex<sx && ey<sy)// south west
    {
    	if(ss>=y1 && ww>=x1)
    	{
    		for(i=0;i<t;i++)
    		{
    			if(s[i]=='S')
	    		cnts++;
	    		else if(s[i]=='W')
	    		cntw++;
	    		if(cnts>=y1 && cntw>=x1)
	    		break;
			}
			cout<<i+1;
		}
		else
		cout<<-1;
	}
	else if(ex>sx && ey<sy) // south east
    {
    	if(ss>=y1 && ee>=x1)
    	{
    		for(i=0;i<t;i++)
    		{
    			if(s[i]=='S')
	    		cnts++;
	    		else if(s[i]=='E')
	    		cnte++;
	    		if(cnts>=y1 && cnte>=x1)
	    		break;
			}
			cout<<i+1;
		}
		else
		cout<<-1;
	}
    return 0;
}
