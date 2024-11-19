#include<iostream>
#include<stdlib.h>
#include<windows.h>
using namespace std;

class chess
{
	int knight_num1, knight_num2;
	int pawn_num1,pawn_num2;
	int pawn_numx1, pawn_numy1;
	int pawn_numx2, pawn_numy2;
	int pawn_numx3, pawn_numy3;
	int pawn_numx4, pawn_numy4;
	int pawn_numx5, pawn_numy5;
	int pawn_numx6, pawn_numy6;
	int pawn_numx7, pawn_numy7;
	int pawn_numx8, pawn_numy8;
	int enemy_pawn_num1, enemy_pawn_num2;
    public:
	int is_safe(int x, int y)
	{
		if (x >= 0 && x < 8 && y >= 0 && y < 8)
			return true;
		else
			return false;
	}
	//int enemy blocked
	//int 
//	int is_blocked(int arr[8][8],int x,int y)
//	{
//		
//		if(arr[x][y]==0)
//			return true;
//		else
//			return false;
//	}
	void initialize()
	{
		int board[8][8] = { {0,0,0,0,0,0,0,0}
					,{0,0,0,0,0,0,0,0}
					,{0,0,0,0,0,0,0,0}
					,{0,0,0,0,0,0,0,0}
					,{0,0,0,0,0,0,0,0}
					,{0,0,0,0,0,0,0,0}
					,{0,0,0,0,0,0,0,0}
					,{0,0,0,0,0,0,0,0} };
		solve(board
		, 0, 1, 1, 1, 2, 1, 3, 1, 4, 1, 5, 1, 6, 1, 7, 1
		, 0, 6, 1, 6, 2, 6, 3, 6, 4, 6, 5, 6, 6, 6, 7, 6
		, 1, 0, 6, 0, 1, 7, 6, 7);
	}
	void solve(int board[8][8]
	,int px1,int py1,int px2,int py2,int px3,int py3,int px4,int py4
	,int px5,int py5,int px6,int py6,int px7,int py7,int px8,int py8
	,int epx1,int epy1,int epx2,int epy2,int epx3,int epy3,int epx4,int epy4
	,int epx5,int epy5,int epx6,int epy6,int epx7,int epy7,int epx8,int epy8
	,int kx1,int ky1,int kx2,int ky2,int kx3,int ky3,int kx4,int ky4)
	{
		static int i = 0;
		int _kx1,_ky1,_kx2,_ky2,_kx3,_ky3,_kx4,_ky4;
		int _px1,_py1,_px2,_py2,_px3,_py3,_px4,_py4;
		int _px5,_py5,_px6,_py6,_px7,_py7,_px8,_py8;
		int _epx1,_epy1,_epx2,_epy2,_epx3,_epy3,_epx4,_epy4;
		int _epx5,_epy5,_epx6,_epy6,_epx7,_epy7,_epx8,_epy8;
		
		_kx1 = kx1;
		_ky1 = ky1;
		_kx2 = kx2;
		_ky2 = ky2;
		_kx3 = kx3;
		_ky3 = ky3;
		_kx4 = kx4;
		_ky4 = ky4;
		
		_px1 = px1;
		_py1 = py1;
		_px2 = px2;
		_py2 = py2;
		_px3 = px3;
		_py3 = py3;
		_px4 = px4;
		_py4 = py4;
		_px5 = px5;
		_py5 = py5;
		_px6 = px6;
		_py6 = py6;
		_px7 = px7;
		_py7 = py7;
		_px8 = px8;
		_py8 = py8;
		
		_epx1 = epx1;
		_epy1 = epy1;
		_epx2 = epx2;
		_epy2 = epy2;
		_epx3 = epx3;
		_epy3 = epy3;
		_epx4 = epx4;
		_epy4 = epy4;
		_epx5 = epx5;
		_epy5 = epy5;
		_epx6 = epx6;
		_epy6 = epy6;
		_epx7 = epx7;
		_epy7 = epy7;
		_epx8 = epx8;
		_epy8 = epy8;
		if (i != 0)
		{
			int c,input;
			cout<<"1. Team blue\n";
			cout<<"2. Team red\n";
			cout<<"Enter choice: ";
			cin>>input;
			if(input==1)
			{
				cout<<"\n";
				cout << "1. Move blue pawn [y: "<<px1+1<<" x: "<<py1+1<<"]\n";
				cout << "2. Move blue pawn [y: "<<px2+1<<" x: "<<py2+1<<"]\n";
				cout << "3. Move blue pawn [y: "<<px3+1<<" x: "<<py3+1<<"]\n";
				cout << "4. Move blue pawn [y: "<<px4+1<<" x: "<<py4+1<<"]\n";
				cout << "5. Move blue pawn [y: "<<px5+1<<" x: "<<py5+1<<"]\n";
				cout << "6. Move blue pawn [y: "<<px6+1<<" x: "<<py6+1<<"]\n";
				cout << "7. Move blue pawn [y: "<<px7+1<<" x: "<<py7+1<<"]\n";
				cout << "8. Move blue pawn [y: "<<px8+1<<" x: "<<py8+1<<"]\n";
				cout << "9. Move blue knight [y: "<<kx1+1<<" x: "<<ky1+1<<"]\n";
				cout << "10. Move blue knight [y: "<<kx2+1<<" x: "<<ky2+1<<"]\n";
				cout << "Enter choice: ";
				cin >> c;
				if (c==1)
				{
					solve_pawn(px1, py1,board);
					px1 = pawn_num1;
					py1 = pawn_num2;
				}
				else if(c==2)
				{
					solve_pawn(px2, py2,board);
					px2 = pawn_num1;
					py2 = pawn_num2;
				}
				else if(c==3)
				{
					solve_pawn(px3, py3,board);
					px3 = pawn_num1;
					py3 = pawn_num2;
				}
				else if(c==4)
				{
					solve_pawn(px4, py4,board);
					px4 = pawn_num1;
					py4 = pawn_num2;
				}
				else if(c==5)
				{
					solve_pawn(px5, py5,board);
					px5 = pawn_num1;
					py5 = pawn_num2;
				}
				else if(c==6)
				{
					solve_pawn(px6, py6,board);
					px6 = pawn_num1;
					py6 = pawn_num2;
				}
				else if(c==7)
				{
					solve_pawn(px7, py7,board);
					px7 = pawn_num1;
					py7 = pawn_num2;
				}
				else if(c==8)
				{
					solve_pawn(px8, py8,board);
					px8 = pawn_num1;
					py8 = pawn_num2;
				}
				else if (c==9)
				{
					solve_knight(kx1, ky1,board);
					kx1 = knight_num1;
					ky1 = knight_num2;
				}
				else if (c==10)
				{
					solve_knight(kx2, ky2,board);
					kx2 = knight_num1;
					ky2 = knight_num2;
				}
				else
				{
					cout << "Invalid Input\n";
				}
			}
			else if(input==2)
			{
				cout<<"\n";
				cout << "1. Move red pawn [y: "<<epx1+1<<" x: "<<epy1+1<<"]\n";
				cout << "2. Move red pawn [y: "<<epx2+1<<" x: "<<epy2+1<<"]\n";
				cout << "3. Move red pawn [y: "<<epx3+1<<" x: "<<epy3+1<<"]\n";
				cout << "4. Move red pawn [y: "<<epx4+1<<" x: "<<epy4+1<<"]\n";
				cout << "5. Move red pawn [y: "<<epx5+1<<" x: "<<epy5+1<<"]\n";
				cout << "6. Move red pawn [y: "<<epx6+1<<" x: "<<epy6+1<<"]\n";
				cout << "7. Move red pawn [y: "<<epx7+1<<" x: "<<epy7+1<<"]\n";
				cout << "8. Move red pawn [y: "<<epx8+1<<" x: "<<epy8+1<<"]\n";
				cout << "9. Move red knight [y: "<<kx3+1<<" x: "<<ky3+1<<"]\n";
				cout << "10. Move red knight [y: "<<kx4+1<<" x: "<<ky4+1<<"]\n";
				cout << "Enter choice: ";
				cin >> c;
				if (c == 1)
				{
					solve_enemy_pawn(epx1, epy1,board);
					epx1 = enemy_pawn_num1;
					epy1 = enemy_pawn_num2;
				}
				else if (c == 2)
				{
					solve_enemy_pawn(epx2, epy2,board);
					epx2 = enemy_pawn_num1;
					epy2 = enemy_pawn_num2;
				}
				else if (c == 3)
				{
					solve_enemy_pawn(epx3, epy3,board);
					epx3 = enemy_pawn_num1;
					epy3 = enemy_pawn_num2;
				}
				else if (c == 4)
				{
					solve_enemy_pawn(epx4, epy4,board);
					epx4 = enemy_pawn_num1;
					epy4 = enemy_pawn_num2;
				}
				else if (c == 5)
				{
					solve_enemy_pawn(epx5, epy5,board);
					epx5 = enemy_pawn_num1;
					epy5 = enemy_pawn_num2;
				}
				else if (c == 6)
				{
					solve_enemy_pawn(epx6, epy6,board);
					epx6 = enemy_pawn_num1;
					epy6 = enemy_pawn_num2;
				}
				else if (c == 7)
				{
					solve_enemy_pawn(epx7, epy7,board);
					epx7 = enemy_pawn_num1;
					epy7 = enemy_pawn_num2;
				}
				else if (c == 8)
				{
					solve_enemy_pawn(epx8, epy8,board);
					epx8 = enemy_pawn_num1;
					epy8 = enemy_pawn_num2;
				}
				else if (c==9)
				{
					solve_enemy_knight(kx3, ky3,board);
					kx3 = knight_num1;
					ky3 = knight_num2;
				}
				else if (c==10)
				{
					solve_enemy_knight(kx4, ky4,board);
					kx4 = knight_num1;
					ky4 = knight_num2;
				}
				else
				{
					cout << "Invalid Input\n";
				}
			}
			else
			{
				cout << "Invalid Input\n";
			}
		}
		i = i + 1;
		board[_ky1][_kx1] = 0;
		board[ky1][kx1] = 1;
		board[_ky2][_kx2] = 0;
		board[ky2][kx2] = 1;
		
		board[_ky3][_kx3] = 0;
		board[ky3][kx3] = -1;
		board[_ky4][_kx4] = 0;
		board[ky4][kx4] = -1;
		
		board[_py1][_px1] = 0;
		board[py1][px1] = 2;
		board[_py2][_px2] = 0;
		board[py2][px2] = 2;
		board[_py3][_px3] = 0;
		board[py3][px3] = 2;
		board[_py4][_px4] = 0;
		board[py4][px4] = 2;
		board[_py5][_px5] = 0;
		board[py5][px5] = 2;
		board[_py6][_px6] = 0;
		board[py6][px6] = 2;
		board[_py7][_px7] = 0;
		board[py7][px7] = 2;
		board[_py8][_px8] = 0;
		board[py8][px8] = 2;
		
		board[_epy1][_epx1] = 0;
		board[epy1][epx1] = -2;
		board[_epy2][_epx2] = 0;
		board[epy2][epx2] = -2;
		board[_epy3][_epx3] = 0;
		board[epy3][epx3] = -2;
		board[_epy4][_epx4] = 0;
		board[epy4][epx4] = -2;
		board[_epy5][_epx5] = 0;
		board[epy5][epx5] = -2;
		board[_epy6][_epx6] = 0;
		board[epy6][epx6] = -2;
		board[_epy7][_epx7] = 0;
		board[epy7][epx7] = -2;
		board[_epy8][_epx8] = 0;
		board[epy8][epx8] = -2;
		
		display(board);
		solve(board
		,px1,py1,px2,py2,px3,py3,px4,py4
		,px5,py5,px6,py6,px7,py7,px8,py8
		,epx1,epy1,epx2,epy2,epx3,epy3,epx4,epy4
		,epx5,epy5,epx6,epy6,epx7,epy7,epx8,epy8
		,kx1,ky1,kx2,ky2,kx3,ky3,kx4,ky4);
	}
	void solve_enemy_pawn(int x, int y,int board[8][8])
	{
		int order = 0;
		int x1, x2, y1, y2;
		system("cls");
		cout << "\n\n------------------------------------Red pawn moves----------------------------------\n\n";
		if (is_safe(x, y - 1)&&board[y-1][x]==0)
		{
			cout << order + 1 << ". Move to position y: " << x + 1 << " & x: " << y - 1 + 1 << endl;
			order++;
			if (order == 1)
			{
				x1 = x;
				y1 = y - 1;
			}
		}
		if (is_safe(x, y - 2)&&y>5&&board[y-2][x]==0)
		{
			cout << order + 1 << ". Move to position y: " << x + 1 << " & x: " << y - 2 + 1 << endl;
			order++;
			if (order == 1)
			{
				x1 = x;
				y1 = y - 2;
			}
			else if (order == 2)
			{
				x2 = x;
				y2 = y - 2;
			}
		}
        if(is_safe(x + 1, y - 1)&&board[y-1][x+1]>0)
		{
			cout << order + 1 << ". Move to position y: " << x + 1 + 1<< " & x: " << y - 1 + 1 << endl;
			order++;
			if (order == 1)
			{
				x1 = x + 1;
				y1 = y - 1;
			}
			else if (order == 2)
			{
				x2 = x + 1;
				y2 = y - 1;
			}
			else if (order == 3)
			{
				x2 = x + 1;
				y2 = y - 1;
			}
		}
		if(is_safe(x - 1, y - 1)&&board[y-1][x-1]>0)
		{
			cout << order + 1 << ". Move to position y: " << x - 1 + 1<< " & x: " << y - 1 + 1 << endl;
			order++;
			if (order == 1)
			{
				x1 = x - 1;
				y1 = y - 1;
			}
			else if (order == 2)
			{
				x2 = x - 1;
				y2 = y - 1;
			}
			else if (order == 3)
			{
				x2 = x - 1;
				y2 = y - 1;
			}
			else if (order == 4)
			{
				x2 = x - 1;
				y2 = y - 1;
			}
		}
		print_pawn(board,x1,y1,x2,y2);
		int c,bili;
		if(order==0)
		{
			cout<<"No where to go \npress any key to return to menu: ";
			cin>>bili;
			c=3;
		}
		else
		{
			cout << "Enter choice: ";
		    cin >> c;
		}
		if (c == 1)
		{
			enemy_pawn_num1 = x1;
			enemy_pawn_num2 = y1;
		}
		else if (c == 2)
		{
			enemy_pawn_num1 = x2;
			enemy_pawn_num2 = y2;
		}
		else
		{
			cout << "Invalid Input\n";
		}
	}
	void solve_pawn(int x, int y,int board[8][8])
	{
		int order = 0;
		int x1, x2, y1, y2;
		system("cls");
		cout << "\n\n------------------------------------Blue pawn moves----------------------------\n\n";
		if (is_safe(x, y + 1)&&board[y+1][x]==0)
		{
			cout << order + 1 << ". Move to position y: " << x + 1 << " & x: " << y + 1 + 1 << endl;
			order++;
			if (order == 1)
			{
				x1 = x;
				y1 = y + 1;
			}
		}
		if (is_safe(x, y + 2)&&board[y+2][x]==0&&y<2)
		{
			cout << order + 1 << ". Move to position y: " << x + 1 << " & x: " << y + 2 + 1 << endl;
			order++;
			if (order == 1)
			{
				x1 = x;
				y1 = y + 2;
			}
			else if (order == 2)
			{
				x2 = x;
				y2 = y + 2;
			}
		}
		if(is_safe(x + 1, y + 1)&&board[y+1][x+1]<0)
		{
			cout << order + 1 << ". Move to position y: " << x + 1 + 1<< " & x: " << y + 1 + 1 << endl;
			order++;
			if (order == 1)
			{
				x1 = x + 1;
				y1 = y + 1;
			}
			else if (order == 2)
			{
				x2 = x + 1;
				y2 = y + 1;
			}
			else if (order == 3)
			{
				x2 = x + 1;
				y2 = y + 1;
			}
		}
		if(is_safe(x - 1, y + 1)&&board[y+1][x-1]<0)
		{
			cout << order + 1 << ". Move to position y: " << x - 1 + 1<< " & x: " << y + 1 + 1 << endl;
			order++;
			if (order == 1)
			{
				x1 = x - 1;
				y1 = y + 1;
			}
			else if (order == 2)
			{
				x2 = x - 1;
				y2 = y + 1;
			}
			else if (order == 3)
			{
				x2 = x - 1;
				y2 = y + 1;
			}
			else if (order == 4)
			{
				x2 = x - 1;
				y2 = y + 1;
			}
		}
		print_pawn(board,x1,y1,x2,y2);
		int c,bili;
		if(order==0)
		{
			cout<<"No where to go \npress any key to return to menu: ";
			cin>>bili;
			c=3;
		}
		else
		{
			cout << "Enter choice: ";
		    cin >> c;
		}
		
		if (c == 1)
		{
			pawn_num1 = x1;
			pawn_num2 = y1;
		}
		else if (c == 2)
		{
			pawn_num1 = x2;
			pawn_num2 = y2;
		}
		else
		{
			pawn_num1 = x;
			pawn_num2 = y;
		}
	}
	void print_pawn(int board[8][8],int x1,int y1,int x2,int y2)
	{
		char arr[8][8];
		for(int i=0;i<8;i++)
		{
			for(int j=0;j<8;j++)
			{
				if(board[i][j]==0)
				{
					arr[i][j]=' ';
				}
				else if(board[i][j]==1||board[i][j]==-1)
				{
					arr[i][j]='K';
				}
				else if(board[i][j]==2||board[i][j]==-2)
				{
					arr[i][j]='P';
				}
				if(is_safe(x1,y1))
				{
					arr[y1][x1]='x';
				}
				if(is_safe(x2,y2))
				{
					arr[y2][x2]='x';
				}
			}
		}
		cout << "\t\t\t\t              Y\n\n";
		cout<<"\t\t\t       1   2   3   4   5   6   7   8\n";
		for (int i = 0; i < 8; i++)
		{
			cout<<"\t\t\t     ---------------------------------"<<"\n";
			if (i == 3)
				cout << "\t\t     X    "<<i+1<<"  "<<"|";
			else
				cout << "\t\t          "<<i+1<<"  "<<"|";
			for (int j = 0; j < 8; j++)
			{				
				if(j==0)
				{
					cout<<" ";
				}
				cout << arr[i][j] <<" "<<"|"<< " ";
			}
			cout << endl;
		}
		cout<<"\t\t\t     ---------------------------------"<<"\n\n";
		
	}
	void solve_knight(int x, int y,int board[8][8])
	{
		int order = 0;
		int x1, x2, x3, x4, x5, x6, x7, x8;
		int y1, y2, y3, y4, y5, y6, y7, y8;
		system("cls");
		cout << "\n\n------------------------------------Blue knight moves----------------------------\n\n";
		cout << "\nEnter the position you want to move\n";
		if (is_safe(x + 2, y + 1) == 1&&board[y+1][x]<=0)
		{
			cout << order + 1 << ". Move to position y: " << x + 2 + 1 << " & x: " << y + 1 + 1 << endl;
			order++;
			if (order == 1)
			{
				x1 = x + 2;
				y1 = y + 1;
			}
		}
		if (is_safe(x + 1, y + 2) == 1&&board[y+2][x+1]<=0)
		{
			cout << order + 1 << ". Move to position y: " << x + 1 + 1 << " & x: " << y + 2 + 1 << endl;
			order++;
			if (order == 1)
			{
				x1 = x + 1;
				y1 = y + 2;
			}
			else if (order == 2)
			{
				x2 = x + 1;
				y2 = y + 2;
			}
		}
		if (is_safe(x + 1, y - 2) == 1&&board[y-2][x+1]<=0)
		{
			cout << order + 1 << ". Move to position y: " << x + 1 + 1 << " & x: " << y - 2 + 1 << endl;
			order++;
			if (order == 1)
			{
				x1 = x + 1;
				y1 = y - 2;
			}
			else if (order == 2)
			{
				x2 = x + 1;
				y2 = y - 2;
			}
			else if (order == 3)
			{
				x3 = x + 1;
				y3 = y - 2;
			}
		}
		if (is_safe(x + 2, y - 1) == 1&&board[y-1][x+2]<=0)
		{
			cout << order + 1 << ". Move to position y: " << x + 2 + 1 << " & x: " << y - 1 + 1 << endl;
			order++;
			if (order == 1)
			{
				x1 = x + 2;
				y1 = y - 1;
			}
			else if (order == 2)
			{
				x2 = x + 2;
				y2 = y - 1;
			}
			else if (order == 3)
			{
				x3 = x + 2;
				y3 = y - 1;
			}
			else if (order == 4)
			{
				x4 = x + 2;
				y4 = y - 1;
			}
		}
		if (is_safe(x - 2, y - 1) == 1&&board[y-1][x-2]<=0)
		{
			cout << order + 1 << ". Move to position y: " << x - 2 + 1 << " & x: " << y - 1 + 1 << endl;
			order++;
			if (order == 1)
			{
				x1 = x - 2;
				y1 = y - 1;
			}
			else if (order == 2)
			{
				x2 = x - 2;
				y2 = y - 1;
			}
			else if (order == 3)
			{
				x3 = x - 2;
				y3 = y - 1;
			}
			else if (order == 4)
			{
				x4 = x - 2;
				y4 = y - 1;
			}
			else if (order == 5)
			{
				x5 = x - 2;
				y5 = y - 1;
			}
		}
		if (is_safe(x - 1, y - 2) == 1&&board[y-2][x-1]<=0)
		{
			cout << order + 1 << ". Move to position y: " << x - 1 + 1 << " & x: " << y - 2 + 1 << endl;
			order++;
			if (order == 1)
			{
				x1 = x - 1;
				y1 = y - 2;
			}
			else if (order == 2)
			{
				x2 = x - 1;
				y2 = y - 2;
			}
			else if (order == 3)
			{
				x3 = x - 1;
				y3 = y - 2;
			}
			else if (order == 4)
			{
				x4 = x - 1;
				y4 = y - 2;
			}
			else if (order == 5)
			{
				x5 = x - 1;
				y5 = y - 2;
			}
			else if (order == 6)
			{
				x6 = x - 1;
				y6 = y - 2;
			}
		}
		if (is_safe(x - 2, y + 1) == 1&&board[y+1][x-2]<=0)
		{
			cout << order + 1 << ". Move to position y: " << x - 2 + 1 << " & x: " << y + 1 + 1 << endl;
			order++;
			if (order == 1)
			{
				x1 = x - 2;
				y1 = y + 1;
			}
			else if (order == 2)
			{
				x2 = x - 2;
				y2 = y + 1;
			}
			else if (order == 3)
			{
				x3 = x - 2;
				y3 = y + 1;
			}
			else if (order == 4)
			{
				x4 = x - 2;
				y4 = y + 1;
			}
			else if (order == 5)
			{
				x5 = x - 2;
				y5 = y + 1;
			}
			else if (order == 6)
			{
				x6 = x - 2;
				y6 = y + 1;
			}
			else if (order == 7)
			{
				x7 = x - 2;
				y7 = y + 1;
			}
		}
		if (is_safe(x - 1, y + 2) == 1&&board[y+2][x-1]<=0)
		{
			cout << order + 1 << ". Move to position y: " << x - 1 + 1 << " & x: " << y + 2 + 1 << endl;
			order++;
			if (order == 1)
			{
				x1 = x - 1;
				y1 = y + 2;
			}
			else if (order == 2)
			{
				x2 = x - 1;
				y2 = y + 2;
			}
			else if (order == 3)
			{
				x3 = x - 1;
				y3 = y + 2;
			}
			else if (order == 4)
			{
				x4 = x - 1;
				y4 = y + 2;
			}
			else if (order == 5)
			{
				x5 = x - 1;
				y5 = y + 2;
			}
			else if (order == 6)
			{
				x6 = x - 1;
				y6 = y + 2;
			}
			else if (order == 7)
			{
				x7 = x - 1;
				y7 = y + 2;
			}
			else if (order == 8)
			{
				x8 = x - 1;
				y8 = y + 2;
			}
		}
		print_knight(board,x1,y1,x2,y2,x3,y3,x4,y4,x5,y5,x6,y6,x7,y7,x8,y8);
		int bili,input;
		if(order==0)
		{
			cout<<"No where to go \npress any key to return to menu: ";
			cin>>bili;
			input=9;
		}
		else
		{
			cout << "Enter choice: ";
		    cin >> input;
		}
		
		if (input == 1)
		{
			knight_num1 = x1;
			knight_num2 = y1;
		}
		else if (input == 2)
		{
			knight_num1 = x2;
			knight_num2 = y2;
		}
		else if (input == 3)
		{
			knight_num1 = x3;
			knight_num2 = y3;
		}
		else if (input == 4)
		{
			knight_num1 = x4;
			knight_num2 = y4;
		}
		else if (input == 5)
		{
			knight_num1 = x5;
			knight_num2 = y5;
		}
		else if (input == 6)
		{
			knight_num1 = x6;
			knight_num2 = y6;
		}
		else if (input == 7)
		{
			knight_num1 = x7;
			knight_num2 = y7;
		}
		else if (input == 8)
		{
			knight_num1 = x8;
			knight_num2 = y8;
		}
		else
		{
			knight_num1=x;
			knight_num2=y;
			cout << "Invalid Input\n";
		}
	}
	void solve_enemy_knight(int x, int y,int board[8][8])
	{
		int order = 0;
		int x1, x2, x3, x4, x5, x6, x7, x8;
		int y1, y2, y3, y4, y5, y6, y7, y8;
		system("cls");
		cout << "\n\n------------------------------------Red knight moves----------------------------\n\n";
		cout << "\nEnter the position you want to move\n";
		if (is_safe(x + 2, y + 1) == 1&&board[y+1][x]>=0)
		{
			cout << order + 1 << ". Move to position y: " << x + 2 + 1 << " & x: " << y + 1 + 1 << endl;
			order++;
			if (order == 1)
			{
				x1 = x + 2;
				y1 = y + 1;
			}
		}
		if (is_safe(x + 1, y + 2) == 1&&board[y+2][x+1]>=0)
		{
			cout << order + 1 << ". Move to position y: " << x + 1 + 1 << " & x: " << y + 2 + 1 << endl;
			order++;
			if (order == 1)
			{
				x1 = x + 1;
				y1 = y + 2;
			}
			else if (order == 2)
			{
				x2 = x + 1;
				y2 = y + 2;
			}
		}
		if (is_safe(x + 1, y - 2) == 1&&board[y-2][x+1]>=0)
		{
			cout << order + 1 << ". Move to position y: " << x + 1 + 1 << " & x: " << y - 2 + 1 << endl;
			order++;
			if (order == 1)
			{
				x1 = x + 1;
				y1 = y - 2;
			}
			else if (order == 2)
			{
				x2 = x + 1;
				y2 = y - 2;
			}
			else if (order == 3)
			{
				x3 = x + 1;
				y3 = y - 2;
			}
		}
		if (is_safe(x + 2, y - 1) == 1&&board[y-1][x+2]>=0)
		{
			cout << order + 1 << ". Move to position y: " << x + 2 + 1 << " & x: " << y - 1 + 1 << endl;
			order++;
			if (order == 1)
			{
				x1 = x + 2;
				y1 = y - 1;
			}
			else if (order == 2)
			{
				x2 = x + 2;
				y2 = y - 1;
			}
			else if (order == 3)
			{
				x3 = x + 2;
				y3 = y - 1;
			}
			else if (order == 4)
			{
				x4 = x + 2;
				y4 = y - 1;
			}
		}
		if (is_safe(x - 2, y - 1) == 1&&board[y-1][x-2]>=0)
		{
			cout << order + 1 << ". Move to position y: " << x - 2 + 1 << " & x: " << y - 1 + 1 << endl;
			order++;
			if (order == 1)
			{
				x1 = x - 2;
				y1 = y - 1;
			}
			else if (order == 2)
			{
				x2 = x - 2;
				y2 = y - 1;
			}
			else if (order == 3)
			{
				x3 = x - 2;
				y3 = y - 1;
			}
			else if (order == 4)
			{
				x4 = x - 2;
				y4 = y - 1;
			}
			else if (order == 5)
			{
				x5 = x - 2;
				y5 = y - 1;
			}
		}
		if (is_safe(x - 1, y - 2) == 1&&board[y-2][x-1]>=0)
		{
			cout << order + 1 << ". Move to position y: " << x - 1 + 1 << " & x: " << y - 2 + 1 << endl;
			order++;
			if (order == 1)
			{
				x1 = x - 1;
				y1 = y - 2;
			}
			else if (order == 2)
			{
				x2 = x - 1;
				y2 = y - 2;
			}
			else if (order == 3)
			{
				x3 = x - 1;
				y3 = y - 2;
			}
			else if (order == 4)
			{
				x4 = x - 1;
				y4 = y - 2;
			}
			else if (order == 5)
			{
				x5 = x - 1;
				y5 = y - 2;
			}
			else if (order == 6)
			{
				x6 = x - 1;
				y6 = y - 2;
			}
		}
		if (is_safe(x - 2, y + 1) == 1&&board[y+1][x-2]>=0)
		{
			cout << order + 1 << ". Move to position y: " << x - 2 + 1 << " & x: " << y + 1 + 1 << endl;
			order++;
			if (order == 1)
			{
				x1 = x - 2;
				y1 = y + 1;
			}
			else if (order == 2)
			{
				x2 = x - 2;
				y2 = y + 1;
			}
			else if (order == 3)
			{
				x3 = x - 2;
				y3 = y + 1;
			}
			else if (order == 4)
			{
				x4 = x - 2;
				y4 = y + 1;
			}
			else if (order == 5)
			{
				x5 = x - 2;
				y5 = y + 1;
			}
			else if (order == 6)
			{
				x6 = x - 2;
				y6 = y + 1;
			}
			else if (order == 7)
			{
				x7 = x - 2;
				y7 = y + 1;
			}
		}
		if (is_safe(x - 1, y + 2) == 1&&board[y+2][x-1]>=0)
		{
			cout << order + 1 << ". Move to position y: " << x - 1 + 1 << " & x: " << y + 2 + 1 << endl;
			order++;
			if (order == 1)
			{
				x1 = x - 1;
				y1 = y + 2;
			}
			else if (order == 2)
			{
				x2 = x - 1;
				y2 = y + 2;
			}
			else if (order == 3)
			{
				x3 = x - 1;
				y3 = y + 2;
			}
			else if (order == 4)
			{
				x4 = x - 1;
				y4 = y + 2;
			}
			else if (order == 5)
			{
				x5 = x - 1;
				y5 = y + 2;
			}
			else if (order == 6)
			{
				x6 = x - 1;
				y6 = y + 2;
			}
			else if (order == 7)
			{
				x7 = x - 1;
				y7 = y + 2;
			}
			else if (order == 8)
			{
				x8 = x - 1;
				y8 = y + 2;
			}
		}
		print_knight(board,x1,y1,x2,y2,x3,y3,x4,y4,x5,y5,x6,y6,x7,y7,x8,y8);
		int bili,input;
		if(order==0)
		{
			cout<<"No where to go \npress any key to return to menu: ";
			cin>>bili;
			input=9;
		}
		else
		{
			cout << "Enter choice: ";
		    cin >> input;
		}
		
		if (input == 1)
		{
			knight_num1 = x1;
			knight_num2 = y1;
		}
		else if (input == 2)
		{
			knight_num1 = x2;
			knight_num2 = y2;
		}
		else if (input == 3)
		{
			knight_num1 = x3;
			knight_num2 = y3;
		}
		else if (input == 4)
		{
			knight_num1 = x4;
			knight_num2 = y4;
		}
		else if (input == 5)
		{
			knight_num1 = x5;
			knight_num2 = y5;
		}
		else if (input == 6)
		{
			knight_num1 = x6;
			knight_num2 = y6;
		}
		else if (input == 7)
		{
			knight_num1 = x7;
			knight_num2 = y7;
		}
		else if (input == 8)
		{
			knight_num1 = x8;
			knight_num2 = y8;
		}
		else
		{
			knight_num1=x;
			knight_num2=y;
			cout << "Invalid Input\n";
		}
	}
	void print_knight(int board[8][8],int x1,int y1,int x2,int y2,int x3,int y3
	,int x4,int y4,int x5,int y5,int x6,int y6,int x7,int y7,int x8,int y8)
	{
		char arr[8][8];
		for(int i=0;i<8;i++)
		{
			for(int j=0;j<8;j++)
			{
				if(board[i][j]==0)
				{
					arr[i][j]=' ';
				}
				else if(board[i][j]==1||board[i][j]==-1)
				{
					arr[i][j]='K';
				}
				else if(board[i][j]==2||board[i][j]==-2)
				{
					arr[i][j]='P';
				}
				if(is_safe(x1,y1)&&board[y1][x1]>=0)
				{
					arr[y1][x1]='x';
				}
				if(is_safe(x2,y2)&&board[y2][x2]>=0)
				{
					arr[y2][x2]='x';
				}
				if(is_safe(x3,y3)&&board[y3][x3]>=0)
				{
					arr[y3][x3]='x';
				}
				if(is_safe(x4,y4)&&board[y4][x4]>=0)
				{
					arr[y4][x4]='x';
				}
				if(is_safe(x5,y5)&&board[y5][x5]>=0)
				{
					arr[y5][x5]='x';
				}
				if(is_safe(x6,y6)&&board[y6][x6]>=0)
				{
					arr[y6][x6]='x';
				}
				if(is_safe(x7,y7)&&board[y7][x7]>=0)
				{
					arr[y7][x7]='x';
				}
				if(is_safe(x8,y8)&&board[y8][x8]>=0)
				{
					arr[y8][x8]='x';
				}
			}
		}
		cout << "\t\t\t\t              Y\n\n";
		cout<<"\t\t\t       1   2   3   4   5   6   7   8\n";
		for (int i = 0; i < 8; i++)
		{
			cout<<"\t\t\t     ---------------------------------"<<"\n";
			if (i == 3)
				cout << "\t\t     X    "<<i+1<<"  "<<"|";
			else
				cout << "\t\t          "<<i+1<<"  "<<"|";
			for (int j = 0; j < 8; j++)
			{				
				
				if(j==0)
				{
					cout<<" ";
				}
				if(i==0&&j==0)
					cout << " " <<" "<<"|"<< " ";
				else
					cout << arr[i][j] <<" "<<"|"<< " ";	
			}
			cout << endl;
		}
		cout<<"\t\t\t     ---------------------------------"<<"\n\n";
	}

	void display(int board[8][8])
	{
		char c=186;
		cout << endl;
		system("cls");
		cout << "------------------------------------Chess Game----------------------------------\n\n";
		cout << "\t\t\t\t              Y\n\n";
		cout<<"\t\t\t       1   2   3   4   5   6   7   8\n";
		for (int i = 0; i < 8; i++)
		{
			cout<<"\t\t\t     ---------------------------------"<<"\n";
			
			if (i == 3)
				cout << "\t\t     X    "<<i+1<<"  "<<"|";
			else
				cout << "\t\t          "<<i+1<<"  "<<"|";

			for (int j = 0; j < 8; j++)
			{
				if(j==0)
				{
					cout<<" ";
				}
				if(board[i][j]==0)
				{
					cout << " " <<" "<<"|"<< " ";
				}
				else
				{
					cout << board[i][j] <<" "<<"|"<< " ";
				}
			}
			cout << endl;
		}
		cout<<"\t\t\t     ---------------------------------"<<"\n\n";
	}
};
int main()
{
	chess c;
	c.initialize();
}
