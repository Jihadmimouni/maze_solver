#include <iostream>

using namespace std;

int main()
{   //edit both 10s to change the size of the maze
	int t[10][10][4];
    int direction=0,a,b,c,x=1,y=1,q,end=0;
    for (int w=0; w<=9; w++)
    {
        for (int l=0; l<=9; l++)
        {
            t[l][w][1]=0;
            t[l][w][2]=0;
            t[l][w][3]=0;
            t[l][w][4]=0;
        };

    };
    while (true)
    {
        t[x][y][3]++;
        q=0;
        cout<<"("<<x<<";"<<y<<")"<<"\n";
        cout<<"direction : "<<direction<<"\n";
        cout<<"left";
        cin>>a;
        cout<<"front";
        cin>>b;
        cout<<"right";
        cin>>c;
        if (a==1&&direction==0)
        {
            q+=1000;

        }
        else if (a==1&&direction==90)
        {
            q+=100;
        }
        else if (a==1&&direction==180)
        {
            q+=10;
        }
        else if (a==1&&direction==270)
        {
            q+=1;
        };

        if (b==1&&direction==0)
        {
            q+=100;

        }
        else if (b==1&&direction==90)
        {
            q+=10;
        }
        else if (b==1&&direction==180)
        {
            q+=1;
        }
        else if (b==1&&direction==270)
        {
            q+=1000;
        };
        if (c==1&&direction==0)
        {
            q+=10;

        }
        else if (c==1&&direction==90)
        {
            q+=1;
        }
        else if (c==1&&direction==180)
        {
            q+=1000;
        }
        else if (c==1&&direction==270)
        {
            q+=100;
        };
        t[x][y][1]=q;
        if (end!=0&&x==1&&y==1)
        {
            break;
        };
        if(x==5&&y==5)
        {
            end++;
        };

        if (a==0&&c==1&&b==1)
        {
            //turn_left 90 degree
            if (direction>0)
            {
                direction-=90;
            }
            else if (direction==0)
            {
                direction=270;
            };
            if (direction==0)
            {
                y++;
            }
            else if (direction==90)
            {

                x++;
            }
            else if (direction==180)
            {
                y--;
            }
            else if (direction==270)
            {
                x--;
            }
        }
        if (a==0&&c==1&&b==0)
        {
            if (direction==0)
            {
                if (t[x-1][y][3]<=t[x][y+1][3])
                {
                    //turn_left 90 degree
                    direction=270;
                    x--;
                }
                else
                {
            
                    y++;
                }
            }

            else if (direction==90)
            {
                if (t[x][y+1][3]<=t[x+1][y][3])
                {
                    //turn_left 90 degree
                    
                    direction=0;
                    y++;
                }
                else
                {
                    
                    x++;
                }
            }

            else if (direction==180)
            {
                if (t[x+1][y][3]<=t[x][y-1][3])
                {
                    //turn_left 90 degree
                    
                    direction=90;
                    x++;
                }
                else
                {
                    
                    y--;
                }
            }

            else if (direction==270)
            {
                if (t[x][y-1][3]<=t[x][y+1][3])
                {
                    //turn_left 90 degree
                    
                    direction=180;
                    y--;
                }
                else
                {
                    
                    x--;
                }
            }
        }
        else if (a==0&&c==0&&b==0)
        {
            if (direction==0)
            {
                if (t[x-1][y][3]<=t[x][y+1][3]&&t[x-1][y][3]<=t[x+1][y][3])
                {
                    //turn_left 90 degree
                    
                    direction=270;
                    x--;
                }
                else if (t[x+1][y][3]<=t[x][y+1][3]&&t[x+1][y][3]<=t[x-1][y][3])
                {
                    //turn_right 90 degree
                    
                    direction=90;
                    x++;
                }
                else
                {
                
                    x++;
                }
            }

            else if (direction==90)
            {
                if (t[x][y+1][3]<=t[x+1][y][3]&&t[x][y+1][3]<=t[x][y-1][3])
                {
                    //turn_left 90 degree
                    
                    direction=0;
                    y++;
                }
                else if (t[x][y-1][3]<=t[x+1][y][3]&&t[x][y-1][3]<=t[x][y+1][3])
                {
                    //turn_right 90 degree
                    
                    direction=180;
                    y--;
                }
                else
                {
                    
                    x++;
                }
            }

            else if (direction==180)
            {
                if (t[x+1][y][3]<=t[x][y-1][3]&&t[x+1][y][3]<=t[x-1][y][3])
                {
                    //turn_left 90 degree
                    
                    direction=90;
                    x++;
                }
                else if (t[x-1][y][3]<=t[x][y-1][3]&&t[x-1][y][3]<=t[x+1][y][3])
                {
                    //turn_right 90 degree
                    
                    direction=270;
                    x--;
                }
                else
                {
                    
                    y--;
                }
            }

            if (direction==270)
            {
                if (t[x][y-1][3]<=t[x-1][y][3]&&t[x][y-1][3]<=t[x][y+1][3])
                {
                    //turn_left 90 degree
                    
                    direction=180;
                    y--;
                }
                else if (t[x][y+1][3]<=t[x-1][y][3]&&t[x][y+1][3]<=t[x][y-1][3])
                {
                    //turn_right 90 degree
                    
                    direction=0;
                    y++;
                }
                else
                {
                    
                    x--;
                }
            }

        }
        else if (a==1&&c==0&&b==1)
        {
            //turn_right 90degree
            
            if (direction<270)
            {
                direction+=90;
            }
            else if (direction==270)
            {
                direction=0;
            };
            if (direction==0)
            {
                y++;
            }
            else if (direction==90)
            {

                x++;
            }
            else if (direction==180)
            {
                y--;
            }
            else if (direction==270)
            {
                x--;
            }
        }
        else if (a==1&&c==0&&b==0)
        {

            if (direction==0)
            {
                if (t[x+1][y][3]<=t[x][y+1][3])
                {
                    //turn_right 90 degree
                    
                    direction=90;
                    x++;
                }
                else
                {
                
                    y++;
                }
            }

            else if (direction==90)
            {
                if (t[x][y-1][3]<=t[x+1][y][3])
                {
                    //turn_right 90 degree
                    
                    direction=180;
                    y--;
                }
                else
                {
                    
                    x++;
                }
            }

            else if (direction==180)
            {
                if (t[x-1][y][3]<=t[x][y-1][3])
                {
                    //turn_right 90 degree
                    
                    direction=270;
                    x--;
                }
                else
                {
                    
                    y--;
                }
            }

            else if (direction==270)
            {
                if (t[x][y+1][3]<=t[x-1][y][3])
                {
                    //turn_right 90 degree
                    
                    direction=0;
                    y++;
                }
                else
                {
                    
                    x--;
                }
            }


        }
        else if (a==1&&c==1&&b==0)
        {
            
            if (direction==0)
            {
                y++;
            }
            else if (direction==90)
            {

                x++;
            }
            else if (direction==180)
            {
                y--;
            }
            else if (direction==270)
            {
                x--;
            }
        }
        else if (a==1&&c==1&&b==1)
        {

            //180degree
            

            if (direction==0)
            {
                direction=180;
            }

            else if (direction==180)
            {
                direction=0;
            }
            else if (direction==90)
            {
                direction=270;
            }
            else if (direction==270)
            {
                direction=90;

            };
            if (direction==0)
            {
                y++;
            }
            else if (direction==90)
            {

                x++;
            }
            else if (direction==180)
            {
                y--;
            }
            else if (direction==270)
            {
                x--;
            }

        }
        else if (a==0&&c==0&&b==1)
        {
            if (direction==0)
            {
                if (t[x-1][y][3]<=t[x+1][y][3])
                {
                    //turn_left 90 degree
                    
                    direction=270;
                    x--;
                }
                else if (t[x+1][y][3]<t[x-1][y][3])
                {
                    //turn_right 90 degree
                    
                    direction=90;
                    x++;
                }
            }

            else if (direction==90)
            {
                if (t[x][y+1][3]<=t[x][y-1][3])
                {
                    //turn_left 90 degree
                    
                    direction=0;
                    y++;
                }
                else if (t[x][y+1][3]<t[x][y-1][3])
                {
                    //turn_right 90 degree
                
                    direction=180;
                    y--;
                }
            }

            else if (direction==180)
            {
                if (t[x+1][y][3]<=t[x-1][y][3])
                {
                    //turn_left 90 degree
                    
                    direction=90;
                    x++;
                }
                else if (t[x-1][y][3]<t[x+1][y][3])
                {
                    //turn_right 90 degree
                    
                    direction=270;
                    x--;
                }
            }

            else if (direction==270)
            {
                if (t[x][y-1][3]<=t[x][y+1][3])
                {
                    //turn_left 90 degree
                    
                    direction=180;
                    y--;
                }
                else if (t[x][y+1][3]<t[x][y-1][3])
                {
                    //turn_right 90 degree
                    
                    direction=0;
                    y++;
                }
            }


        }

    };
    int x1,y1,x2,y2,j=1,n=0,k=0;
    x1=5;
    y1=5;
    t[x1][y1][2]=j;
    j++;
    k=n%10;
    n=n/10;
    if (k==0)
    {
        x2=x1;
        y2=y1-1;
        t[x2][y2][2]=j;

    };
    k=n%10;
    n=n/10;
    if (k==0)
    {
        x2=x1+1;
        y2=y1;
        t[x2][y2][2]=j;
    }
    k=n%10;
    n=n/10;
    if(k==0)
    {
        x2=x1;
        y2=y1+1;
        t[x2][y2][2]=j;
    }
    k=n%10;
    n=n/10;
    if(k==0)
    {
        x2=x1-1;
        y2=y1;
        t[x2][y2][2]=j;
    };
    while (true)
    {
        j++;
        for (int e=0; e<=9; e++)
        {
            for (int r=0; r<=9; r++)
            {
                if (t[r][e][1]==j-1&&r!=1&&e!=1)
                {
                    n=t[r][e][1];
                    k=n%10;
                    n=n/10;
                    if (k==0)
                    {
                        x2=r;
                        y2=e-1;
                        t[x2][y2][2]=j;

                    };
                    k=n%10;
                    n=n/10;
                    if (k==0)
                    {
                        x2=r+1;
                        y2=e;
                        t[x2][y2][2]=j;
                    }
                    k=n%10;
                    n=n/10;
                    if(k==0)
                    {
                        x2=r;
                        y2=e+1;
                        t[x2][y2][2]=j;
                    }
                    k=n%10;
                    n=n/10;
                    if(k==0)
                    {
                        x2=r-1;
                        y2=e;
                        t[x2][y2][2]=j;
                    };

                }
                else
                {
                    break;
                }

            }
        }

    }
    //THE END OF EXPLORING THE MAZE FAZE
    x=1;
    y=1;
    int o=0;
    while (true)
    {
        o++;
        if (t[x][y][2]==t[x][y+1][2]+1)
        {
            if (direction==0)
            {
				//forward
            }
            else if (direction==90)
            {
                //turn_left 90 degree
				//forward
                
            }
            else if (direction==180)
            {
                //turn_left 180 degree
                //forward
            }
            else if (direction==270)
            {
                //turn_right 90 degree
                //forward
            }
            t[x][y+1][4]=o;
            y++;
        }
        else if (t[x][y][2]==t[x+1][y][2]+1)
        {
            if (direction==0)
            {
                //turn_right 90 degree
                //forward
            }
            else if (direction==90)
            {
                //forward
            }
            else if (direction==180)
            {
                //turn_left 90 degree
                //forward
            }
            else if (direction==270)
            {
                //turn_right 180 degree
                //forward
            }
            t[x+1][y][4]=o;
            x++;
        }
        else if (t[x][y][2]==t[x][y-1][2]+1)
        {
            if (direction==0)
            {
                //turn_right 180 degree
                //forward
            }
            else if (direction==90)
            {
                //turn_right 90 degree
                //forward
            }
            else if (direction==180)
            {
                //forward
            }
            else if (direction==270)
            {
                //turn_left 90 degree
                //forward
            };
            t[x][y-1][4]=o;
            y--;
        }
        else if (t[x][y][2]==t[x-1][y][2]+1)
        {
            if (direction==0)
            {
                //turn_left 90 degree
                //forward
            }
            else if (direction==90)
            {
                //turn_right 180 degree
                //forward
            }
            else if (direction==180)
            {
                //turn_right 90 degree
                //forward
            }
            else if (direction==270)
            {
                //forward
            };
            t[x-1][y][4]=o;
            x--;
        }
        if (x==5&&y==5)
        {
            break;
        }
    }
    while (true)
    {
        if (t[x][y][4]==t[x][y+1][4]+1)
        {
            if (direction==0)
            {
                //forward
            }
            else if (direction==90)
            {
                //turn_left 90 degree
                //forward
            }
            else if (direction==180)
            {
                //turn_left 180 degree
                //forward
            }
            else if (direction==270)
            {
                //turn_right 90 degree
                //forward
            }
            y++;
        }
        else if (t[x][y][4]==t[x+1][y][4]+1)
        {
            if (direction==0)
            {
                //turn_right 90 degree
                //forward
            }
            else if (direction==90)
            {
                //forward
            }
            else if (direction==180)
            {
                //turn_left 90 degree
                //forward
            }
            else if (direction==270)
            {
                //turn_right 180 degree
                //forward
            }
            x++;
        }
        else if (t[x][y][4]==t[x][y-1][4]+1)
        {
            if (direction==0)
            {
                //turn_right 180 degree
                //forward
            }
            else if (direction==90)
            {
                //turn_right 90 degree
                //forward
            }
            else if (direction==180)
            {
                //forward
            }
            else if (direction==270)
            {
                //turn_left 90 degree
                //forward
            };
            y--;
        }
        else if (t[x][y][4]==t[x-1][y][4]+1)
        {
            if (direction==0)
            {
                //turn_left 90 degree
                //forward
            }
            else if (direction==90)
            {
                //turn_right 180 degree
                //forward
			}
            
            else if (direction==180)
            {
                //turn_right 90 degree
                //forward
            }
            else if (direction==270)
            {
                //forward
            };
            x--;
        }
        if (x==1&&y==1)
        {
            break;
        }

    }
        for (int w=0; w<=9; w++)
    {
        for (int l=0; l<=9; l++)
        {
            cout<<t[l][w][1]<<":"<<t[l][w][2]<<":"<<t[l][w][3]<<":"<<t[l][w][4]<<"  ";
        };
           cout<<"\n";
    };

}
