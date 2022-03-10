#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
//creating database for gtbank customers.

struct Gtbank_users{
    string Account_Name;
    int Account_Number;
    char Sex;
    string DOB;
    int Age;
    string Address;
    string Occupation;
    string Account_Balance;
    int Bvn;
    string Phone_Number;
    string Next_of_kin;
    int PIN_NO;


};
int main()
{
    Gtbank_users Kemisola,Iyinoluwa,Adetutu,Ayoola,Emmanuel;

    //initializing data for Kemisola
    Kemisola.Account_Name = "kemisola Afolabi";
    Kemisola.Account_Number = 999999999;
    Kemisola.Sex = 'F';
    Kemisola.DOB = "28th of October";
    Kemisola.Age = 21;
    Kemisola.Address = "Ondo state";
    Kemisola.Occupation = "Computer Technologist";
    Kemisola.Account_Balance = "900,000 US-DOLLARS";
    Kemisola.Bvn = 12345;
    Kemisola.Phone_Number = "+2348145800491" ;
    Kemisola.Next_of_kin = "Toluwaniope Afolabi";
    Kemisola.PIN_NO = 2020;

        //initializing data for Iyinoluwa
    Iyinoluwa.Account_Name = "Iyinoluwa Adeniyi";
    Iyinoluwa.Account_Number = 11111111;
    Iyinoluwa.Sex = 'F';
    Iyinoluwa.DOB = "29th of June" ;
    Iyinoluwa.Age = 19;
    Iyinoluwa.Address = "Iyanapaja lagos ";
    Iyinoluwa.Occupation = "English Lecturer";
    Iyinoluwa.Account_Balance = "510,000 US-DOLLARS";
    Iyinoluwa.Bvn = 32456;
    Iyinoluwa.Phone_Number = "+2348021294224";
    Iyinoluwa.Next_of_kin = "Ogooluwa Adeniyi";
    Iyinoluwa.PIN_NO = 3030;


            //initializing data for Adetutu.
    Adetutu.Account_Name = "Adetutu Cole";
    Adetutu.Account_Number = 22222222;
    Adetutu.Sex = 'F';
    Adetutu.DOB ="1st of June" ;
    Adetutu.Age = 23;
    Adetutu.Address = "Surulere Lagos ";
    Adetutu.Occupation = " Makeup Artist";
    Adetutu.Account_Balance = "360,000 US-DOLLARS";
    Adetutu.Bvn = 32256;
    Adetutu.Phone_Number = "+2348185806795" ;
    Adetutu.Next_of_kin = "Elizabeth cole";
    Adetutu.PIN_NO = 4040;


    //initializing data for Ayoola.
    Ayoola.Account_Name = "Peter Ayoola";
    Ayoola.Account_Number = 99999999;
    Ayoola.Sex = 'M';
    Ayoola.DOB = "26th of June" ;
    Ayoola.Age = 26;
    Ayoola.Address = " Ikoyi Lagos ";
    Ayoola.Occupation = "Hotel Manager";
    Ayoola.Account_Balance = "9,600,000 US-DOLLARS";
    Ayoola.Bvn = 99976;
    Ayoola.Phone_Number = "+2348106180260";
    Ayoola.Next_of_kin = "Femi Peter";
    Ayoola.PIN_NO = 5050;




    //initializing data for Emmanuel.
    Emmanuel.Account_Name = "Peter Ayoola";
    Emmanuel.Account_Number = 444444444;
    Emmanuel.Sex = 'M';
    Emmanuel.DOB = "4th of March" ;
    Emmanuel.Age = 27;
    Emmanuel.Address = " Ibadan Oyo state ";
    Emmanuel.Occupation = "Evangelist / zoolpgist";
    Emmanuel.Account_Balance = "780,000 US-DOLLARS";
    Emmanuel.Bvn = 55523;
    Emmanuel.Phone_Number = "+2349038750995";
    Emmanuel.Next_of_kin = "Temioluwa Adewara";
    Emmanuel.PIN_NO = 6060;


//DECLARING PASSWORD ,SO CUSTOMERS CAN LOGIN TO THEIR PROFILE.


    cout << "Dear customer,you are welcomed to Gtbank " << endl;
    cout << endl;
    cout <<endl;

int PIN_NO;
    cout << "To view your profile, input your PIN_No" << endl;
                    cin>>PIN_NO;
                    cout<<endl;
                    cout<<endl;
                if (PIN_NO == Kemisola.PIN_NO){
            cout << "Dear Ms Kemisola Afolabi,you are welcome " << endl;


                cout <<endl;
                cout<<endl;

                int a;
                cout << "Ms Kemisola Afolabi would you like to view your profile,if yes press one" << endl;
                cin>>a;
                cout<<endl;
                if (a == 1){

                cout << "ACCOUNT NAME" <<setw(29)<< "ACCOUNT NUMBER" <<setw(13)<< "SEX" <<endl;
                cout<<endl;

                cout<<Kemisola.Account_Name<<setw(20)<<Kemisola.Account_Number<<setw(18)<<Kemisola.Sex<<endl;
                cout <<endl;
                cout <<endl;
                cout<<endl;

                cout<< "DOB"<<setw(32)<< "ADDRESS"<<setw(19)<< "AGE"<<endl;
                cout<<endl;

                cout<<Kemisola.DOB<<setw(23)<<Kemisola.Address<<setw(16)<<Kemisola.Age<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;

                cout<< "OCCUPATION"<<setw(32)<< "ACCOUNT BALANCE"<<setw(12)<< "BVN"<<endl;
                cout<<endl;

                cout<<Kemisola.Occupation<<setw(22)<<Kemisola.Account_Balance<<setw(13)<<Kemisola.Bvn<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;

                cout<< "PHONE NUMBER"<<setw(25)<< "NEXT OF KIN" <<endl;
                cout<<endl;

                cout<<Kemisola.Phone_Number<<setw(28)<<Kemisola.Next_of_kin<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;

                }
                else{
                    cout << "input right number" <<endl;
                }

}
else if(PIN_NO == Iyinoluwa.PIN_NO){

cout << "Dear Ms Iyinoluwa Adeniji,you are welcome " << endl;


                cout <<endl;
                cout<<endl;

                int a;
                cout << "Ms Iyinoluwa Adeniji would you like to view your profile,if yes press one" << endl;
                cin>>a;
                cout<<endl;
                if (a == 1){

                cout << "ACCOUNT NAME" <<setw(29)<< "ACCOUNT NUMBER" <<setw(14)<< "SEX" <<endl;
                cout<<endl;

                cout<<Iyinoluwa.Account_Name<<setw(18)<<Iyinoluwa.Account_Number<<setw(18)<<Iyinoluwa.Sex<<endl;
                cout <<endl;
                cout <<endl;
                cout<<endl;

                cout<< "DOB"<<setw(32)<< "ADDRESS"<<setw(19)<< "AGE"<<endl;
                cout<<endl;

                cout<<Iyinoluwa.DOB<<setw(28)<<Iyinoluwa.Address<<setw(13)<<Iyinoluwa.Age<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;

                cout<< "OCCUPATION"<<setw(32)<< "ACCOUNT BALANCE"<<setw(12)<< "BVN"<<endl;
                cout<<endl;

                cout<<Iyinoluwa.Occupation<<setw(25)<<Iyinoluwa.Account_Balance<<setw(16)<<Iyinoluwa.Bvn<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;

                cout<< "PHONE NUMBER"<<setw(25)<< "NEXT OF KIN" <<endl;
                cout<<endl;

                cout<<Iyinoluwa.Phone_Number<<setw(28)<<Iyinoluwa.Next_of_kin<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;

                }
                else{
                    cout << "input right number" <<endl;
                }


}
else if (PIN_NO  == Adetutu.PIN_NO){

        cout << "Dear Ms Adetutu Cole,you are welcome " << endl;


                cout <<endl;
                cout<<endl;

                int a;
                cout << "Ms Adetutu Cole would you like to view your profile,if yes press one" << endl;
                cin>>a;
                cout<<endl;
                if (a == 1){

                cout << "ACCOUNT NAME" <<setw(29)<< "ACCOUNT NUMBER" <<setw(14)<< "SEX" <<endl;
                cout<<endl;

                cout<<Adetutu.Account_Name<<setw(24)<<Adetutu.Account_Number<<setw(17)<<Adetutu.Sex<<endl;
                cout <<endl;
                cout <<endl;
                cout<<endl;

                cout<< "DOB"<<setw(32)<< "ADDRESS"<<setw(19)<< "AGE"<<endl;
                cout<<endl;

                cout<<Adetutu.DOB<<setw(28)<<Adetutu.Address<<setw(15)<<Adetutu.Age<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;

                cout<< "OCCUPATION"<<setw(31)<< "ACCOUNT BALANCE"<<setw(12)<< "BVN"<<endl;
                cout<<endl;

                cout<<Adetutu.Occupation<<setw(28)<<Adetutu.Account_Balance<<setw(12)<<Adetutu.Bvn<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;

                cout<< "PHONE NUMBER"<<setw(25)<< "NEXT OF KIN" <<endl;
                cout<<endl;

                cout<<Adetutu.Phone_Number<<setw(25)<<Adetutu.Next_of_kin<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;

                }
                else{
                    cout << "input right number" <<endl;
                }

}
else if (PIN_NO == Ayoola.PIN_NO){

                    cout << "Dear Mr Ayoola Peter,you are welcome " << endl;


                cout <<endl;
                cout<<endl;

                int a;
                cout << "Mr Ayoola Peter would you like to view your profile,if yes press one" << endl;
                cin>>a;
                cout<<endl;
                if (a == 1){

                cout << "ACCOUNT NAME" <<setw(29)<< "ACCOUNT NUMBER" <<setw(14)<< "SEX" <<endl;
                cout<<endl;

                cout<<Ayoola .Account_Name<<setw(24)<<Ayoola.Account_Number<<setw(17)<<Ayoola.Sex<<endl;
                cout <<endl;
                cout <<endl;
                cout<<endl;

                cout<< "DOB"<<setw(32)<< "ADDRESS"<<setw(19)<< "AGE"<<endl;
                cout<<endl;

                cout<<Ayoola.DOB<<setw(28)<<Ayoola.Address<<setw(13)<<Ayoola.Age<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;

                cout<< "OCCUPATION"<<setw(31)<< "ACCOUNT BALANCE"<<setw(12)<< "BVN"<<endl;
                cout<<endl;

                cout<<Ayoola.Occupation<<setw(30)<<Ayoola.Account_Balance<<setw(12)<<Ayoola.Bvn<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;

                cout<< "PHONE NUMBER"<<setw(25)<< "NEXT OF KIN" <<endl;
                cout<<endl;

                cout<<Ayoola.Phone_Number<<setw(23)<<Ayoola.Next_of_kin<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;

                }
                else{
                    cout << "input right number" <<endl;
                }
}
else if (PIN_NO == Emmanuel.PIN_NO){

                            cout << "Dear Mr Emmanuel Adewara,you are welcome " << endl;


                cout <<endl;
                cout<<endl;

                int a;
                cout << "Mr Emmanuel Adewara would you like to view your profile,if yes press one" << endl;
                cin>>a;
                cout<<endl;
                if (a == 1){

                cout << "ACCOUNT NAME" <<setw(29)<< "ACCOUNT NUMBER" <<setw(14)<< "SEX" <<endl;
                cout<<endl;

                cout<<Emmanuel.Account_Name<<setw(24)<<Emmanuel.Account_Number<<setw(17)<<Emmanuel.Sex<<endl;
                cout <<endl;
                cout <<endl;
                cout<<endl;

                cout<< "DOB"<<setw(32)<< "ADDRESS"<<setw(19)<< "AGE"<<endl;
                cout<<endl;

                cout<<Emmanuel.DOB<<setw(28)<<Emmanuel.Address<<setw(13)<<Emmanuel.Age<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;

                cout<< "OCCUPATION"<<setw(31)<< "ACCOUNT BALANCE"<<setw(12)<< "BVN"<<endl;
                cout<<endl;

                cout<<Emmanuel.Occupation<<setw(21)<<Emmanuel.Account_Balance<<setw(12)<<Emmanuel.Bvn<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;

                cout<< "PHONE NUMBER"<<setw(25)<< "NEXT OF KIN" <<endl;
                cout<<endl;

                cout<<Emmanuel.Phone_Number<<setw(23)<<Emmanuel.Next_of_kin<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;

                }
                else{
                    cout << "input right number" <<endl;
                }

}
                //END OF THE PROGRAMM.
 else{
    cout << "input the right PIN_NO" << endl;
 }




return 0;
}
