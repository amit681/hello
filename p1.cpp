//basic class and objects and default constructor used
//program for calculate the performance of players
#include<bits/stdc++.h>
using namespace std;
class player
{
	int runs_scored;
	int balls_faced;
	int wicket_taken;
	int overs_done;
	int boundary_hit;
	int dot_balls;
	public:
		player()
		{
			runs_scored=0;
			balls_faced=0;
			wicket_taken=0;
			overs_done=0;
			boundary_hit=0;
			dot_balls=0;
		}
	int strike_rate(int runs,int balls);
	int runs_scored_by_boundary(int four,int six);
	double bowling_avg(int over,int dot,int wicket);

};
int player:: strike_rate(int run,int balls)
{
	runs_scored=run;
	balls_faced=balls;
	return ((runs_scored/balls_faced)*100);
	
}
int player:: runs_scored_by_boundary(int four,int six)
{
boundary_hit=four+six;
return((four*4)+(six*6));	
}
double player:: bowling_avg(int over,int dot,int wicket )
{
	overs_done=over;
	dot_balls=dot;
	wicket_taken=wicket;
	return((over*6)/(dot*wicket*10));
}

int main()
{
	int run,balls,four,six,over,dot,wicket;
	player p1;
	cout<<"enter the runs scored by player \n";
	cin>>run;
	cout<<"enter the balls faced by player \n";
	cin>>balls;
	cout<<"enter the number of four hitted\n";
	cin>>four;
	cout<<"enter the number of six hitted\n";
	cin>>six;
	cout<<"enter the number of overs done by player\n";
	cin>>over;
	cout<<"enter the number of dot balls done\n";
	cin>>dot;
	cout<<"enter the number of wicket taken\n";
	cin>>wicket;
	cout<<" strike rate of player is\n";
	cout<<p1.strike_rate(run,balls)<<endl;
	cout<<"total number of runs hitted by boundary is\n";
	cout<<p1.runs_scored_by_boundary(four,six)<<endl;
	cout<<"bowling average of player is\n";
	cout<<p1.bowling_avg(over,dot,wicket)<<endl;
	return 0;
}
