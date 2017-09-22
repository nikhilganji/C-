#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int d;
int p1=0,p2=0,j=1,x=0;

    //Start DICE class
class Dice{
		public:
		 int rollDice()
			{
			     srand(time(0));
				 d=1+rand()%6;
			};
       
        
  //Start SNAKE class
class snake{
        public:
        int snakeCondition()
            {
				//SNAKE swallowing P1
                    if(p1==99){p1=23; cout<< "Snake swallowed P1"<<endl;snake show;show.display();}
                    if(p1==83){p1=32;cout<< "Snake swallowed P1"<<endl;snake show;show.display();}
                    if(p1==76){p1=13;cout<< "Snake swallowed P1"<<endl;snake show;show.display();}
                    if(p1==62){p1=2;cout<< "Snake swallowed P1"<<endl;snake show;show.display();}
                    if(p1==59){p1=36;cout<< "Snake swallowed P1"<<endl;snake show;show.display();}
                    if(p1==44){p1=9;cout<< "Snake swallowed P1"<<endl;snake show;show.display();}
                    if(p1==32){p1=1;cout<< "Snake swallowed P1"<<endl;snake show;show.display();}
                    if(p1==25){p1=6;cout<< "Snake swallowed P1"<<endl;snake show;show.display();}

                    //Snake Swallowing P2
                    if(p2==99){p2=23;cout<< "Snake swallowed P2"<<endl;snake show;show.display();}
                    if(p2==83){p2=32;cout<< "Snake swallowed P2"<<endl;snake show;show.display();}
                    if(p2==76){p2=13;cout<< "Snake swallowed P2"<<endl;snake show;show.display();}
                    if(p2==62){p2=2;cout<< "Snake swallowed P2"<<endl;snake show;show.display();}
                    if(p2==59){p2=36;cout<< "Snake swallowed P2"<<endl;snake show;show.display();}
                    if(p2==44){p2=9;cout<< "Snake swallowed P2"<<endl;snake show;show.display();}
                    if(p2==32){p2=1;cout<< "Snake swallowed P2"<<endl;snake show;show.display();}
                    if(p2==25){p2=6;cout<< "Snake swallowed P2"<<endl;snake show;show.display();}

					

            }
void display(){
	cout<<"******************\n";
    cout<< "Alas..!! SNAKE :/\n";
    cout<<"******************\n\n";}
   
			};

    //Start LADDER class
class ladder{
        public: int ladderCondition()
            {
                // Ladder Climbing P1
                    if(p1==5){p1=26;cout<<"P1 climbed a Ladder"<<endl;ladder show;show.display();}
                    if(p1==3){p1=12;cout<<"P1 climbed a Ladder"<<endl;ladder show;show.display();}
                    if(p1==10){p1=22;cout<<"P1 climbed a Ladder"<<endl;ladder show;show.display();}
                    if(p1==15){p1=66;cout<<"P1 climbed a Ladder"<<endl;ladder show;show.display();}
                    if(p1==27){p1=79;cout<<"P1 climbed a Ladder"<<endl;ladder show;show.display();}
                    if(p1==36){p1=97;cout<<"P1 climbed a Ladder"<<endl;ladder show;show.display();}
                    if(p1==55){p1=98;cout<<"P1 climbed a Ladder"<<endl;ladder show;show.display();}
                    if(p1==62){p1=86;cout<<"P1 climbed a Ladder"<<endl;ladder show;show.display();}

                    // Ladder Climbing P2
                    if(p2==5){p2=26;cout<<"P2 climbed a Ladder"<<endl;ladder show;show.display();}
                    if(p2==3){p2=12;cout<<"P2 climbed a Ladder"<<endl;ladder show;show.display();}
                    if(p2==10){p2=22;cout<<"P2 climbed a Ladder"<<endl;ladder show;show.display();}
                    if(p2==15){p2=66;cout<<"P2 climbed a Ladder"<<endl;ladder show;show.display();}
                    if(p2==27){p2=79;cout<<"P2 climbed a Ladder"<<endl;ladder show;show.display();}
                    if(p2==36){p2=97;cout<<"P2 climbed a Ladder"<<endl;ladder show;show.display();}
                    if(p2==55){p2=98;cout<<"P2 climbed a Ladder"<<endl;ladder show;show.display();}
                    if(p2==62){p2=86;cout<<"P2 climbed a Ladder"<<endl;ladder show;show.display();}

                    }
void display(){
	cout<<"$$$$$$$$$$$$$$$$$$$$\n";
    cout<< "Hurray..!! LADDER\n";
    cout<<"$$$$$$$$$$$$$$$$$$$$\n\n";
               
               }

			};

    //Start Player Class
class player{

			};


    //MAIN function
int main(){
	while(p1<=100||p2<=100) {
		//Player 1 Rolls the dice
                cout<<"player1: Roll the dice\n";
                cin>>x;
                if(x==1) {
					Dice face;
                    face.rollDice();
					
					cout<<"player1 move: "<<d<<endl<<endl;
					p1=p1+d;
                   {snake condition; condition.snakeCondition();}
                    ladder condition; condition.ladderCondition();
                    cout<<"____________________________\n\n";
					cout<<"P1 current Position is: "<<p1<<endl<<endl<<endl;   
                
                        

                

                //Winner code P1:

                    if(p1>=100){
               cout<<"<-----------P1 WINS----------->\n\n";
               return 0;
                    }

                cout<<"player2: Roll the dice\n";}

                 //Player 2 Rolls the dice
                cin>>x;
                        if(x==1) {Dice face; face.rollDice();
                cout<<"player2 move: "<<d<<endl<<endl;
                         p2=p2+d;
                        { snake condition; condition.snakeCondition();}
                         ladder condition; condition.ladderCondition();

                cout<<"___________________________\n\n";

                cout<<"P2 current Position is: "<<p2<<endl<<endl<<endl;
                cout<<"||||||SCORE BOARD||||||||||"<<endl;
                cout<<"P1 Score: "<<p1<<"    "<<"P2 Score: "<<p2<<endl;

                //WINNER Code P2:
                if(p2>=100){
               cout<<"<-----------P2 WINS----------->\n\n";
               return 0;
                    }
                cout<<"\n\n\n";}
                    }
                return 0;
                    }
		
              

            
                    //END of Code

























