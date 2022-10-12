#include <iostream>
using namespace std;

//定义全局变量userInput
char userInput[6];

//声明参数类型为int的函数reverse
void reverse(int n);

int main() {

	//将用户输入的字符读入userInput变量
	cin >> userInput;

	//调用reverse函数
	reverse(5);

}

void reverse(int n) {
	if (n) {//只有当n大于0的时候才为真，并往下执行

		//输出userInput的下标为n-1的字符
		cout << userInput[n - 1] << endl;

		//递归调用，让n减小
		reverse(n - 1);
	}
}
