#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int random_number()
{
    srand(time(NULL));
    return rand()%3;
}

int user_input()
{
    int choice;
    cout<<"Enter"<<endl;
    cout<<"0->rock"<<endl;
    cout<<"1->paper"<<endl;
    cout<<"2->scissor"<<endl;
    cin>>choice;
    return choice;
}


void processing()
{
int user1_input=user_input();
int user2_input=random_number();
int user1_points=0;
int user2_points=0;

    if(user1_input==user2_input)
    {
      cout<<"It's a Tie"<<endl;
    }

    else if
        (
         (user1_input==0 && user2_input==1)||//player:rock computer:paper
         (user1_input==0 && user2_input==2)||//player:rock computer:scissor
         (user1_input==2 && user2_input==0)//player:scissor computer:rock
        )
    {
       user2_points++;
    }
    else if
        (
         (user1_input==1 && user2_input==0)||//player:paper computer:rock
         (user1_input==1 && user2_input==2)||//player:paper computer:scissor
         (user1_input==2 && user2_input==1)//player:scissor computer:paper
         )
    {
       user1_points++;
    }


if(user1_input>user2_points)
{
    cout<<"You WIN!!"<<endl;
}
else if(user2_input>user1_points)
{
    cout<<"You LOSE!!"<<endl;
}
else
{
    cout<<"It's Tie!"<<endl;
}
}
int main()
{
    int i=0;
    while(i<3)
    {
        processing();
        i++;
    }
return 0;
}
