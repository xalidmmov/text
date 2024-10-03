#include<iostream>
#include<string>
#include<vector>
using namespace std;
class BakAccount{
	private:
		int number;
		double balance;
		string acctype;
	public:
		void setbankacc(int num,double bal,string type)
		{
			number=num;
			balance=bal;
			acctype=type;
		}
		void deposit(double amount){
			balance+=amount;
			cout<<"your deposited:"<<amount<<endl<<"your account num:"<<number<<endl;
		}
		void withdraw(double amount)
		{
			if(amount<=balance)
			{
			balance-=amount;
			cout<<"withdraw your acoount:"<<amount<<endl;
			}
			else 
			{
				cout<<"your account have not enouhg money:"<<endl;
			}
		}
		void checkabalance()
		{
			cout<<"your balance just now:"<<balance<<endl;
		}
		void showbankacc()
		{
			cout<<"your account number:"<<number<<endl;
			cout<<"your balance :"<<balance<<endl;
			cout<<"your account type:"<<acctype<<endl;
		}
		
};
int main()
{
	BakAccount bankaccount;
	bankaccount.setbankacc(14,2000,"xalid");
	bankaccount.deposit(100);
	bankaccount.withdraw(1500);
	bankaccount.checkabalance();
	bankaccount.showbankacc();
	return 0;
}
