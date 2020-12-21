#include<time.h>
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
void menu()
{
	printf("o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o\n");
	printf("|                                       |\n");
	printf("|     输入1、2、3选择游戏 or输入0退出   |\n");
	printf("|                                       |\n");
	printf("o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o\n");
	printf("|                                       |\n");
	printf("|             *1、运气小游戏            |\n");
	printf("|             *2、脑力小游戏            |\n");
	printf("|             *3、眼力小游戏            |\n");
	printf("|                                       |\n");
	printf("o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o-o\n");
	printf("请输入您要选择的进程：\n"); 

 }  
void first()//第一个游戏 
{
	char gamer;//玩家出拳
	int computer;//电脑出拳
	int result;//比赛结果
	
	//为了避免玩一次游戏就退出程序，可以将代码放入循环中
	while(1){
		printf("这是一个猜拳的小游戏，请输入你要出的拳头:\n");
		printf("A:剪刀\nB:石头\nC:布\nD:不玩了\n");
		scanf("%c%*c",&gamer);
		switch(gamer){
			case 65: //A
			case 97: //a
			   gamer=4;
			   break;
			case 66: //B
			case 98: //b
			   gamer=7;
			   break;
			case 67: //C
			case 99: //c
			   gamer=10;
			   break;
			case 68: //D
			case 100: //d
			   return 0;
			   
			default:
			   printf("你的选择为%c选择错误，退出...\n",gamer);
			   getchar();
			   system("cls");//清屏
			   return 0;
			   break;          
		}
		
		srand((unsigned)time(NULL)); //随机数种子
		computer=rand()%3; //产生随机数并取余，得到电脑出拳
		result=(int)gamer+computer; //gamer 为 char类型，数学运算时要强制转换类型
		printf("电脑出了");
		switch(computer)
		{
			case 0:printf("剪刀\n");break;//4  1
			case 1:printf("石头\n");break;//7 2
			case 2:printf("布\n");break;//10 3
		}
		printf("你出了");
		switch(gamer)
		{
			case 4:printf("剪刀\n");break;
			case 7:printf("石头\n");break;
			case 10:printf("布\n");break; 
		}
		if(result==6||result==7||result==11)
printf("你赢了！");
      else if(result==5||result==9||result==10)
printf("电脑赢了！");
      else printf("平手");
	  system("pause>nul&&cls"); //暂停并清屏 
   }
 } 
void second() //第二个游戏 
{
	int i=3;
    int s=0; 
    int a=0;
	for(i=3;i>0;i--)
{
	printf("                              请做好准备集中注意力\n"); 
	printf("                       游戏要开始了!\n"); 
	printf("倒计时");
	Sleep(1000);
	printf("       %d",i);
	system("cls");
}
printf("            ####################\n");
printf("            |你有三秒的时间观察|\n");
printf("            ####################\n");
	Sleep(1000);
printf("                      ---------\n");
printf("                      |201$%&4|\n");
printf("                      ---------\n");
Sleep(3000);
	system("cls");
printf("                           *********************************************\n");
printf("                           *********************************************\n");
printf("                                          请输入里面的数字："); 
scanf("%d",&s);
if(s==2014)
{
	printf("                     开始新的挑战，难度升级了呀！\n");
	Sleep(1000); 
	system("cls") ;
printf("                            ####################\n");
printf("                            |你有五秒的时间观察|\n");
printf("                            ####################\n");
    Sleep(1000);
    printf("                    -----------\n");
    printf("                    |*q-g1*6%^|\n");
     printf("                   -----------\n");
     Sleep(5000);
     system("cls");
     printf("请输入字符串中的数字："); 
     scanf("%d",&s);
     if(s==16){
     	
		printf("很厉害了，玩了几次？下一关游戏可没这么简单了！\n"); 
     	Sleep(1000);
     	system("cls");
     	printf("|------------------------------|\n");
		printf("|这次你有七秒的时间记忆，珍惜吧|\n"); 
		printf("|------------------------------|\n");
		Sleep(1000);
		printf("$%%a^g*f^$g");
		Sleep(3000);
		system("cls");
		printf("慌不慌？还剩四秒，快动脑！\n");
		Sleep(1000); 
		printf("$%%a^g*f^$g");
		Sleep(4000);
		system("cls");
		printf("                           *********************************************\n");
        printf("                           *********************************************\n");
        printf("                                          请输入里面有几个英文：");  
        scanf("%d",&s);
        } 
        else 
{
	 
       	printf("                -- ----------------------------------------------------------------------\n");
		printf("                -------------------------------------------------------------------------\n");
        printf("                            答案错误！要不要重来？通过这关，后面还有哦\n");
        printf("                            【输入任意数字重来】or【输入0退出】");
        scanf("%d",&a);
        system("cls");
        if(a==0) menu();
        if(a!=0) second(); 
}
		    if(s==4){ 
		printf("                     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n") ;
		printf("                                      恭喜过关\n");
		printf("                      【输入任意数字即可进入到最后一关or输入0退出挑战】\n");
		printf("                     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n") ;
		Sleep(1000);
		system("cls");
		printf("                      还想玩那，写代码命都快没了，即将结束"); 
		 
		
		 } 
		 else 
{
	 
       	printf("                -- ----------------------------------------------------------------------\n");
		printf("                -------------------------------------------------------------------------\n");
        printf("                            答案错误！要不要重来？通过这关，后面还有哦\n");
        printf("                            【输入任意数字重来】or【输入0退出】");
         scanf("%d",&a);
          system("cls");
        if(a==0) menu();
        if(a!=0) second(); 
     
}

}else 
{
	 
       	printf("                -- ----------------------------------------------------------------------\n");
		printf("                -------------------------------------------------------------------------\n");
        printf("                            答案错误！要不要重来？通过这关，后面还有哦\n");
        printf("                            【输入任意数字重来】or【输入0退出】");
         scanf("%d",&a);
          system("cls");
        if(a==0) menu();
        if(a!=0) second(); 
}
}
void third()
{
	int x=0,y=0;
	printf("                  *************************************************\n");
	printf("                  *************************************************\n");
	printf("                                 看图猜数字(第一关)\n"); 
	printf("                         0000000000000000000000000000000\n");
	printf("                         0000000000000000000000000000000\n");
	printf("                         00000000ooo000000000000oo000000\n");
	printf("                         00000oo00oo0000000000oo00000000\n");
	printf("                         00000oo00oo0000000000oo00000000\n");
	printf("                         0000oo000oo000000000oooo0000000\n");
	printf("                         00oooooooooooo00000oo000o000000\n");
	printf("                         000000000oo0000000oo00000oo0000\n");
	printf("                         000000000oo000000oo0000000oo000\n");
	printf("                         000000000oo00000oo0000000ooo000\n");
	printf("                         000000000oo000000ooooooooo00000\n");
	printf("                         0000000000000000000000000000000\n");
	printf("                         请问上图数字是几？\n");
	printf("                         答案为：");
	scanf("%d",&x);
	while(x!=46)
	{
		printf("这么简单都能错吗？再给你一次机会！仔细一看，答案是：");
		scanf("%d",&x);
	}
		if(x==46){
	printf("                正确！这都能看出来，看来这种程度的眼力小考验难不倒你呀！\n ");
	printf( "                                【   继续or退出？   】\n");
	printf("                    如果继续下一关卡请任意输入一个数字，若返回主界面输入0\n");
	printf("                    您的选择为："); 
    scanf("%d",&y);
	}
	if(y==0){
		system("cls");
	menu();
	}
	else if(y!=0){
		system("cls");
	printf("                  *************************************************\n");
	printf("                  *************************************************\n");
	printf("                                 看图猜数字(第二关)\n"); 
	printf("                                 00000000000000000\n");
	printf("                                 00000000000000000\n");	
	printf("                                 0000ooooooooo0000\n");
	printf("                                 000000000oo000000\n");
	printf("                                 000000000oo000000\n");
	printf("                                 0000000oo00000000\n");
	printf("                                 000000oo000000000\n");
	printf("                                 00000oo0000000000\n");
	printf("                                 00000000000000000\n");
	printf("                         --------我--是--分--割--线--------\n");
	printf("                                 00000000000000000\n");
	printf("                                 00000ooooooo00000\n");
	printf("                                 000000o00000o0000\n");
	printf("                                 00000o00000o00000\n");
	printf("                                 00000ooooooo00000\n");
	printf("                                 00000o00000o00000\n");
	printf("                                 00000o00000o00000\n");
	printf("                                 00000ooooooo00000\n");
	printf("                                 00000000000000000\n");
	printf("上下两个数字之和：");
	scanf("%d",&y);
	while(y!=15)
	{
		printf(" 再瞅瞅，别是加法算错了哦！再试一次：");
			scanf("%d",&y);
	}
	}
	else if(y==15)
{
		printf("                  您完成所有关卡\n");
Sleep(1000);
system("cls");
menu();
}
	

}

  void test()
 {
 		menu();
 		int input=0;
 	do
 	{
 		
 		scanf("%d",&input); 
 		system("cls"); 
 		switch(input)
 		{
		    
 			case 1:first();
		    printf("\n");
 			break;
 			case 2: second();
	        printf("\n");
 			break;
 			case 3: third();
			printf("\n");
 			break;
 			case 0:
 				break;
 			default:
 			printf("选择错误，请重新选择！\n");
			 test();
      	}
	 }while(input); 
 }
 int main()
 {
 
 	test();
 	return 0;
 }
