#include<iostream>
using namespace std;
void printmenu();
void calculateAggregate1(string,float,float,float);
void calculateAggregate2(string,float,float,float);
void compareMarks(string,string,float,float);
main()
{
 system("cls");
 printmenu();
 float ecat1,ecat2;
 cout <<" Enter the student's name:";
 string name1;
 cin >> name1;
 cout <<"Enter matriculation marks(out of 1100) :";
 float mark11;
 cin >> mark11;
 cout <<"Enter intermediate marks(out of 550):";
 float mark12;
 cin >> mark12;
 cout <<"Enter ECAT marks(out of 400):";
 float mark13;
 cin >> mark13;
 calculateAggregate1(name1,mark11,mark12,mark13);

 cout <<" Enter the student's name:";
 string name2;
 cin >> name2;
 cout <<"Enter matriculation marks(out of 1100) :";
 float mark15;
 cin >> mark15;
 cout <<"Enter intermediate marks(out of 550):";
 float mark16;
 cin >> mark16;
 cout <<"Enter ECAT marks(out of 400):";
 float mark14;
 cin >> mark14;
 calculateAggregate2(name2,mark15,mark16,mark14);
 compareMarks(name1,name2,mark13,mark14);
}
void printmenu()
{
cout <<" ##################################################################################################### "<<endl;
cout <<" #  #  # #### ### #   # #### ####    ## ### ### # #        #   ##   # # ###   ##   ##  ###  #   #### # "<<endl;
cout <<" #  #  # #  #  #  #   # #    #  #   #    #   #  # #       # #  # #  ###  #   #    #     #  # #  #  # # "<<endl;
cout <<" #  #  # #  #  #  #   # ###  ###    #    #   #   #        # #  #  # ###  #    #    #    #  # #  #  # # "<<endl;
cout <<" #  #  # #  #  #  #   # #    #  #    #   #   #   #        ###  #  # # #  #     #    #   #  # #  #  # # "<<endl;
cout <<" #  #  # #  #  #  #   # #    #  #     #  #   #   #        # #  # #  # #  #      #    #  #  # #  #  # # "<<endl;
cout <<" #  #### #  # ###   #   #### #  #   ##  ###  #   #        # #  ##   # # ###   ##   ##  ###  #   #  # # "<<endl;
cout <<" #___________________________________________________________________________________________________# "<<endl;
cout <<" #___________________________________________________________________________________________________# "<<endl;      
cout <<" #  # #  #  ####  #    ##   #### # # #### #### ###          ## # #  ## ### #### # #                  # "<<endl;
cout <<" #  ### # # #  # # #  #     #    ### #    #  #  #          #   # # #    #  #    ###                  # "<<endl;
cout <<" #  ### # # #  # # #  #     ###  ### ###  #  #  #           #   #   #   #  ###  ###                  # "<<endl;
cout <<" #  # # ### #  # ###  #  ## #    # # #    #  #  #            #  #    #  #  #    # #                  # "<<endl;
cout <<" #  # # # # #  # # #  #   # #    # # #    #  #  #             # #     # #  #    # #                  # "<<endl;
cout <<" #  # # # # #  # # #   ###  #### # # #### #  #  #           ##  #   ##  #  #### # #                  # "<<endl;
cout <<" # ################################################################################################### "<<endl;
}
void calculateAggregate1(string name1,float mark11,float mark12,float mark13)
{
float mmark;
float imark;
float ecat1;
float aggregate ;
mmark=(mark11/1100)*0.10;
imark=(mark12/550)*0.40;
ecat1=(mark13/400)*0.50;
aggregate=(mmark+imark+ecat1)*100;
cout <<"Score for "<<name1<<"  in UET is: "<<aggregate <<endl;
}
void calculateAggregate2(string name2,float mark15,float mark16,float mark14)
{
float mmark;
float imark;
float ecat2;
float aggregate ;
mmark=(mark15/1100)*0.10;
imark=(mark16/550)*0.40;
ecat2=(mark14/400)*0.50;
aggregate=(mmark+imark+ecat2)*100;
cout <<"Score for "<<name2<<"  in UET is: "<<aggregate <<endl;
}


void compareMarks(string name1,string name2,float ecat1,float ecat2)
{
 if(ecat1 > ecat2)
{
 cout<<"Roll number 1 is assigned to "<<name1;
}
if(ecat1 < ecat2)
{
 cout<<"Roll number 1 is assigned to "<<name2;
}
}
   

 
 
