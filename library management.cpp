#include<iostream>
#include<cstdlib>
using namespace std;
int n,n1;
int i;
int inc=0;
int inc1=0;
class DATE{
	public:
	int day;
	int month;
	int year;
};
class book{
   public:
   int bookcode;
   char bookname[20];
   char authorname[20];
   int kind;
   int pub_year;
   int status;
       void addbook(void){
            cout<<"\t\t\t   YOU HAVE CHOSEN TO ADD BOOK DETAILS"<<endl;
            cout<<"\t\t\t************************************"<<endl;
            cout<<endl;
            inc++;
            bookcode=100+inc;
            cout<<"\n\tBook code                :"<<bookcode<<endl;
            cout<<"\n\tEnter book name          :";
            cin>>bookname;
            cout<<"\n\tEnter author name        :";
            cin>>authorname;
            cout<<"\n\tEnter publish year :";
            cin>>pub_year;
            cout<<"\n\tEnter kind of book(1:history,2:story,3:science) :";
            cin>>kind;
            cout<<"\n\tEnter status(1:amanat,2:tahvil,3:tamdid) :";
            cin>>status;

       }
       void dispbook(void){
       cout<<bookcode<<"\t\t"<<bookname<<"\t\t"<<authorname<<"\t\t"<<pub_year<<"\t\t"<<endl;
       if(status==1)cout<<"amanat";
       if(status==2)cout<<"tahvil";
       if(status==4)cout<<"tamdid";
       if(kind==1)cout<<"history";
       if(kind==2)cout<<"story";
       if(kind==3)cout<<"science";
       }
void liststat()
{
  if(status==1)
  {
     cout<<"\t\tBookcode:"<<bookcode<<"\t\tStatus: amanat dade shode ast "<<endl;
     cout<<endl;
  }
  if(status==2){
  	cout<<"\t\tBookcode:"<<bookcode<<"\t\tStatus:tahvil dade shod v ghabel amanat gereftan ast"<<endl;
     cout<<endl;
  }
  if(status==3)
  {
     cout<<"\t\tBookcode:"<<bookcode<<"\t\tStatus:ketab be modat 2 hafte ghabel tamdid ast"<<endl;
     cout<<endl;
   }

}
};book b[10];
class MEMBER:public DATE{
public:
char firstname[20];
char lastname[20];
int countnumber;
int bookcount;
int id;
public:
void addmember()
{
    cout<<"\t\tYOU HAVE CHOSEN TO ADD BOOK MEMBER DETAILS"<<endl;
    cout<<"\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
    cout<<endl;
    cout<<endl;
    inc1++;
    countnumber=100+inc1;
    cout<<"\t\ Id            :"<<id;
    cout<<endl;
    cout<<"\t\tEnter first Name    :";
    cin>>firstname;
    cout<<endl;
    cout<<"\t\tEnter last Name :";
    cin>>lastname;
    cout<<endl;
    cout<<"\t\tEnter day of birth :";
    cin>>day;
    cout<<"\t\tEnter month of birth :";
    cin>>month;
    cout<<"\t\tEnter year of birth :";
    cin>>year;
    bookcount=3;
    cout<<endl;
    cout<<"\t\tMaximum books allowed for a member:"<<bookcount<<endl;
    cout<<endl;

 }
 void dismember()
 {
     cout<<"\t"<<id<<"\t\t"<<firstname<<"\t\t"<<lastname<<"\t\t"<<year<<","<<month<<","<<day<<endl;
    cout<<endl;
 }
};MEMBER s[10];
class issue
{
   public:
   int day,month,year;
   int day2,month2,year2;
   int iday,imon,iyear;
   int rday,rmon,ryear;
   int eday,emon,eyear;
   int yr1,yr2,m1,m2,d1,d2,mons1,mons2,mons,days,yrs,sum,j;
   int  loop;
   int fine;

   public:
   void isdatecalc()
   {
		    cout<<"\t\tEnter day:";
		    cin>>day;
		    cout<<"\t\tEnter month:";
		    cin>>month;
		    cout<<"\t\tEnter year:";
		    cin>>year;
		    day2=day;
		    month2=month;
		    year2=year;
		    day2=day2+20;

			   if(((month2==1)||(month2==3)||(month2==5)||(month2==7)||(month2==8)||(month2==10)||(month2==12))&&((day2>31)))
			    {
				day2=day2-31;
				month2=month2+1;
				if(month2==13)
				 {
				   year2++;
				   month2=1;
				 }
			      }
			   else if(((month2==4)||(month2==6)||(month2==9)||(month2==11))&&((day2>30)))
				 {
				     day2-=30;
				     month2++;
				    }
			    else if(((year2%4==0)||(year2%400==0))&&(day2>29)&&(month==2))
			      {
				day2-=29;
				month2++;
			    }
			    else if(((year2%4!=0)||(year2%100!=0)||(year2%400!=0))&&(day2>28)&&(month2==2))
			    {
			      day2-=28;
			      month2++;
			     }
			     cout<<endl;
 }
 void isdate()
 {
   iday=day;
   imon=month;
   iyear=year;

   cout<<"\t\tIssued date:"<<iday<<"/"<<imon<<"/"<<iyear;
   cout<<endl;
 }
 void retdate()
 {
 rday=day2;
 rmon=month2;
 ryear=year2;
 cout<<"\t\tReturn Date:"<<rday<<"/"<<rmon<<"/"<<ryear<<endl;
  cout<<endl;
 }
 void edatecalc()
 {
   eday=rday;
   emon=rmon;
   eyear=ryear;
		 eday=eday+20;
		 if(((emon==1)||(emon==3)||(emon==5)||(emon==7)||(emon==8)||(emon==10)||(emon==12))&&((eday>31)))
			    {
				eday=eday-31;
				emon=emon+1;
				if(emon==13)
				 {
				   eyear++;
				   emon=1;
				 }
			      }
			   else if(((emon==4)||(emon==6)||(emon==9)||(emon==11))&&((eday>30)))
				 {
				    eday-=30;
				    emon++;
				    }
			    else if(((eyear%4==0)||(eyear%100==0)||(eyear%400==0))&&(eday>29)&&(emon==2))
			      {
				eday-=29;
			       emon++;
			    }
			    else if(((eyear%4!=0)||(eyear%100!=0)||(eyear%400!=0))&&(eday>28)&&(emon==2))
			    {
			      eday-=28;
			      emon++;
			     }
			     cout<<endl;
			     cout<<endl;

		 cout<<"\t\tYour extended due date is:"<<eday<<"/"<<emon<<"/"<<eyear<<endl;
}
 void finecalc();
 }; issue is;
 void issue::finecalc()
{
  int mon[]={31,28,31,30,31,30,31,31,30,31,30,31};
				 loop=365;
				 sum=0;
				  d1=rday;
				 m1=rmon;
				yr1=ryear;
				cout<<endl;
			       cout<<"\t\tYour actual return Date Is: "<<d1<<"/"<<m1<<"/"<<yr1<<endl;
			      cout<<endl;
			      cout<<"\t\tEnter the date of return below.."<<endl;
			      cout<<endl;
			     cout<<"\t\tEnter day:";
			     cin>>d2;
			     cout<<endl;
			      cout<<"\t\tEnter month:";
			     cin>>m2;
			     cout<<endl;
			      cout<<"\t\tEnter year:";
			cin>>yr2;
			cout<<endl;
			days=d2-d1;

			yrs=yr2-yr1;
		   if(m2>=m1)
		   {
		      mons=m1-m2;
		      mons2=abs(mons);
		  }
		  else
		  {
		    mons=m2-m1;
		    mons2=abs(mons);
		  }
		  sum=yrs*loop+mons+days+mons2;
		  if(m2>m1)
		  {
		     j=m1;
		  }
		  else
		  {
		     j=m2;
		  }
		  if(mons2!=0)
		  {


		     for(i=0;i<mons2;i++)
		     {
			sum=sum+mon[j];
			j++;
		      }
		  }
		  cout<<endl;
		  cout<<"\t\tYour date of return:"<<d2<<"/"<<m2<<"/"<<yr2<<endl;
		  cout<<endl;
		  fine=(sum+mons)*1;

		  if((yr1%4==0)||(yr1%400==0)&&(m1==2))
		  {
		     fine=fine+1;
		  }
		 /* if((m1==2)&&(yr1%4!=0)||(yr1%400!=0))

		  {
		    fine=fine-1;
		  }*/

		  cout<<"\t\t\tFine amount:Rs."<<fine<<endl;
		  cout<<"\t\t\t*****************"<<endl;
}
int main()
{
int ch,i;
char ch2,ch3,ch4;
int sbookcode,sstudid;
int flag,flag1,pos,spos,ipos;
int sflag,stpos;
int ibookcode,istudid;
int rbookcode,rstudid;
int rflag1,rflag2;
int rpos1,rpos2,l;

do
{
cout<<"\t\t\t********%%%%%%%%%%********"<<endl;
cout<<"\t\t\tLIBRARY MANAGEMENT SYSTEM"<<endl;
cout<<"\t\t\t********%%%%%%%%%%********"<<endl;
cout<<endl;

cout<<"\t\t\t\tMAINMENU"<<endl;
cout<<"\t\t\t\t^^^^^^^^"<<endl;
cout<<endl;
cout<<"\t\t  ##############################################"<<endl;
cout<<endl;
cout<<"\t\t$ \ THE PROJECT BY NILOOFAR ETEHADI,FAEZE SALEHI,ZAHRA NIKBAKHT   \t$"<<endl;
cout<<"\t\t$ \t1. ADD  NEW BOOK.               \t$"<<endl;
cout<<"\t\t$ \t2. VIEW ALL BOOK DETAILS.       \t$"<<endl;
cout<<"\t\t$ \t3. SEARCH A BOOK.               \t$"<<endl;
cout<<"\t\t$ \t4. ADD NEW STUDENT.             \t$"<<endl;
cout<<"\t\t$ \t5. DISPLAY ALL MEMBER DETAILS. \t$"<<endl;
cout<<"\t\t$ \t6. VIEW A MEMBER.              \t$"<<endl;
cout<<"\t\t$ \t7. ISSUE  BOOK.                 \t$"<<endl;
cout<<"\t\t$ \t8. RETURN BOOK.                 \t$"<<endl;
cout<<"\t\t$ \t0. EXIT.                        \t$"<<endl;
cout<<endl;
cout<<"\t\t  ##############################################"<<endl;
cout<<endl;
cout<<"\t\t\t\tHit your choice:";
cin>>ch;
switch(ch)
{
	case 1:
	cout<<"\t\tYOU HAVE CHOSEN TO ADD BOOK DETAILS"<<endl;
	cout<<"\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"\t\tEnter number of books to be added:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
	   cout<<"Enter book code:"<<100+i;
	    b[i].addbook();

	 }

	 cout<<endl;
	 cout<<endl;
	cout<<"\t\t<<-----Back To Main Menu-----"<<endl;
	cin.get();
	main();
	break;

	 case 2:
	 cout<<"\t\t\tLIST OF ALL ADDED BOOKS"<<endl;
	 cout<<"\t\t\t^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
	 cout<<endl;
	 cout<<"**********************************************************************"<<endl;
	 cout<<"BOOKCODE\tBOOKNAME\tAUTHORNAME\tPUB_BOOK\t"<<endl;
	 cout<<"**********************************************************************"<<endl;
	 for(i=1;i<=n;i++)
	 {
	   b[i].dispbook();
	 }
	 cout<<endl;
	 cout<<endl;
	 for(i=1;i<=n;i++)
	 {
	    b[i].liststat();
	 }
	 cout<<endl;
	 cout<<"\t\t<<-----Back To Main Menu-----"<<endl;
	 cin.get();
	main();
	break;

	case 3:
	       cout<<"\t\t\tSEARCH  A BOOK"<<endl;
	       cout<<"\t\t\t^^^^^^^^^^^^^^"<<endl;
	       cout<<endl;
	       cout<<"\t\tEnter book code to search:";
	       cin>>sbookcode;
	       for(i=1;i<=n;i++)
	       {
		   if(sbookcode==b[i].bookcode)
		   {
		       flag=1;
		       pos=i;
		    }
		}
		   if(flag==1)
		   {
		       cout<<endl;
		       cout<<"\t\tBook is available!!"<<endl;
		       cout<<endl;
		       cout<<"\t\tTHE BOOK DETAILS ARE..."<<endl;
		       cout<<endl;
		       cout<<"\t\tBook code          :"<<b[pos].bookcode<<endl;
		       cout<<"\t\tBook name          :"<<b[pos].bookname<<endl;
		       cout<<"\t\tAuthor name        :"<<b[pos].authorname<<endl;
		       cout<<"\t\tPublish year :"<<b[pos].pub_year<<endl;
		   }
	       else
	       {
		    cout<<endl;
		    cout<<"\t\tSorry!..No Book Exists With Code:"<<sbookcode<<endl;
		}
		cout<<endl;
		cout<<endl;
		cout<<"\t\t"<<"<<-----Back To Main Menu-----"<<endl;
		cin.get();
		main();
	       break;

	case 4:
	       cout<<"\t\tYOU HAVE CHOSEN TO ADD STUDENT DETAILS"<<endl;
	       cout<<"\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;

	       cout<<endl;
	       cout<<"\t\tEnter number of students to be added:";
	       cin>>n1;
	       for(i=1;i<=n1;i++)
		{
		   s[i].addmember();

		}
	 cout<<endl;
	 cout<<"\t\tNumber of newly added students:"<<n1<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"\t\t<<-----Back To Main Menu-----"<<endl;
	cin.get();
	main();
	break;

	case 5:
	       cout<<"\t\tLIST OF ALL ADDED STUDENTS"<<endl;
	       cout<<"\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
	 cout<<endl;
	 cout<<"\t******************************************"<<endl;
	 cout<<"\tSTUDENT ID\tSTUDENT NAME\tDEPT NAME"<<endl;
	 cout<<"\t******************************************"<<endl;

	 for(i=1;i<=n1;i++)
	 {
	   s[i].dismember();

	 }
	 cout<<endl;

	 cout<<"\t<<-----Back To Main Menu-----"<<endl;
	 cin.get();
	main();
	break;

	case 6:
	       cout<<"\t\t\tVIEW A STUDENT"<<endl;
	       cout<<"\t\t\t^^^^^^^^^^^^^^"<<endl;
	       cout<<endl;
	       cout<<"\t\tEnter member id to view:";
	       cin>>sstudid;
	       for(i=1;i<=n1;i++)
	       {
		   if(sstudid==s[i].id)
		   {
		       sflag=1;
		       stpos=i;
		    }
		}
		   if(sflag==1)
		   {
		       cout<<endl;
		       cout<<"\t\tStudent found!!"<<endl;
		       cout<<endl;
		       cout<<"\t\tTHE STUDENT DETAILS ARE..."<<endl;
		       cout<<endl;
		       cout<<"\t\tfirst name             :"<<s[stpos].firstname<<endl;
		       cout<<"\t\tlast name          :"<<s[stpos].lastname<<endl;

		   }
	       else
	       {
		    cout<<endl;
		    cout<<"\t\tSorry!..No Student found with this id:"<<sstudid<<endl;
		}
		cout<<endl;
		cout<<endl;
		cout<<"\t\t"<<"<<-----Back To Main Menu-----"<<endl;
		cin.get();
		main();
	       break;


	case 7:
	       cout<<"\t\t YOU HAVE CHOSEN TO ISSUE A BOOK"<<endl;
	       cout<<"\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
	       cout<<endl;
		cout<<"\t\tEnter student id:";
		    cin>>istudid;
		    for(i=1;i<=n1;i++)
		  {
		     if(istudid==s[i].id)
		     {
		       flag=1;
		       spos=i;

		    }
		}

		   if(flag==1)
		   {
		     cout<<"\t\tEnter book code to issue book:";
		     cin>>ibookcode;
		     for(i=1;i<=n;i++)
		     {
		       if(ibookcode==b[i].bookcode)
		       {
			  flag1=1;
			  ipos=i;
		       }
		     }
		   }

		    cout<<endl;


		   if(flag==1)
		     {
		      if(flag1==1)
		      {

		       if(s[spos].bookcount!=0)
		       {
		       if(b[ipos].status==1)
			{

			  s[spos].bookcount--;

			  b[ipos].status=0;
			  cout<<"\t\tDate of issue"<<endl;
			  cout<<"\t\t~~~~~~~~~~~~~"<<endl;
			    is.isdatecalc();
			    is.isdate();
			    is.retdate();
			   cout<<"\t\tThis book is now issued...."<<endl;
			   cout<<endl;
			   cout<<"\t\tBooks allowed now:"<<s[spos].bookcount<<endl;
			   cout<<endl;
			    cout<<"\t Student Id\t Student Name\t BookCode"<<endl;
			    cout<<"\t ----------\t ------------\t --------"<<endl;
		   cout<<"\t "<<s[spos].id<<"\t\t "<<s[spos].firstname<<"\t\t "<<b[ipos].bookcode<<endl;


		 }

			  else
			  {
			  cout<<"\t\tSorry!Book already issued.."<<endl;
			  }

		    }
		     else
		      {
		      cout<<"\t\tSorry!.You cannot take more than two books.."<<endl;
		     }

	       }
		 else
		 {
		 cout<<"\t\tSorry!..No Book Exists With Code:"<<ibookcode<<endl;
		}
	      }
	      else

	      {
		cout<<"\t\tSorry!..No Student Exists with Id:"<<istudid<<endl;
	      }

		cout<<endl;
		cout<<"\t\t<<-----Back To Main Menu-----"<<endl;
		cin.get();
		main();
	       break;

	       case 8:
		      cout<<"\t\tYOU HAVE CHOSEN TO RETURN A BOOK"<<endl;
		      cout<<"\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
		      cout<<endl;
		      cout<<"\t\tEnter student id:";
			     cin>>rstudid;
			     cout<<endl;
			     for(i=1;i<=n1;i++)
			   {
			   if(rstudid==s[i].id)
			   {
			     rflag1=1;
			     rpos1=i;
			   }
			 }




		   if(rflag1==1)
		   {

		     cout<<"\t\tEnter book code to return book:";
		     cin>>rbookcode;
		     cout<<endl;
		     for(i=1;i<=n;i++)
		     {
		       if(rbookcode==b[i].bookcode)
		       {
			  rflag2=1;
			  rpos2=i;
			}
		     }
		   }
		   if(rflag1==1)
		   {
		     if(rflag2==1)
		     {
			cout<<"\tIs the bookcode:"<<b[rpos2].bookcode<<" issued to student id:"<<s[rpos1].id<<" ?y/n:";
			cin>>ch4;
			if(ch4=='y')
			{
			if(b[rpos2].status==0)
			 {
			    cout<<endl;
			    cout<<"\t\tYou can Return the Book..."<<endl;
			    cout<<endl;
			    is.retdate();
			    cout<<"\t\tAre you sure you want to return this book ?y/n:";
			    cin>>ch2;
			     cout<<endl;
			     if(ch2=='y')
			      {
				 cout<<"\t\t Is the book returned before due date?y/n:";
				 cin>>ch3;
				 cout<<endl;
				  if(ch3=='y')
				  {
				  //   is.retdate();
				    //cout<<endl;
				    cout<<"\t\tBook returned before due date"<<endl;
				    cout<<endl;
				    cout<<"\t\t\tFine - NIL"<<endl;
				   cout<<endl;
				   cout<<"\t\t\t THANK YOU"<<endl;
				   b[rpos2].status=1;
				   s[rpos1].bookcount++;
				   cout<<endl;
				   cout<<"\t\t<<-----Back To Main Menu-----"<<endl;
				   cin.get();
				   main();
				 }
				 else{
				
				   cout<<endl;
				  cout<<"\t\tYOU HAVE TO PAY FINE !!!"<<endl;

		  is.finecalc();
		  cout<<endl;
		  b[rpos2].status=1;
		  s[rpos1].bookcount++;
		  cout<<"\t\t<<-----Back To Main Menu-----"<<endl;
		  cin.get();
		  main();
		}
	      }

		  else
		 {
		is.retdate();
		 cout<<endl;
		 cout<<"\t\tYou can extend the book for another twenty days.."<<endl;
		 is.edatecalc();

		}

		  }
		  else
		  {
		   cout<<endl;
		   cout<<"\t\tThis Book is not yet issued from library.. "<<endl;
		  }
		}
		else
		{
		  cout<<endl;
		  cout<<"\t\t This book is not issued to you..Sorry!!!"<<endl;
		}



			}
			  else
			  {
			  cout<<endl;
			  cout<<"\t\tSorry!..No Book Exists With Code:"<<rbookcode<<endl;
			  }

		    }

		     else
		      {
		      cout<<endl;
		      cout<<"\t\tSorry!..No Student Exists With Id:"<<rstudid<<endl;
		     }

		cout<<endl;



		cout<<"\t\t<<-----Back To Main Menu-----"<<endl;
		cin.get();
		main();
		break;








	case 0:exit(0);
	default:
		 cout<<"\t\tYou have entered a wrong choice.."<<endl;
		 cout<<"\t\tPlease Re-enter your choice...."<<endl;
		 cout<<endl;
		 cout<<"\t\t\t<<---Go Back---"<<endl;
		 cin.get();
		 main();
		 break;


}
}while(ch==0);
cin.get();

return 0;
}
