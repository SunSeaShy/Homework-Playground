#include <iostream>
using namespace std;

//����ȫ�ֱ���userInput
char userInput[6];

//������������Ϊint�ĺ���reverse
void reverse(int n);

int main() {

	//���û�������ַ�����userInput����
	cin >> userInput;

	//����reverse����
	reverse(5);

}

void reverse(int n) {
	if (n) {//ֻ�е�n����0��ʱ���Ϊ�棬������ִ��

		//���userInput���±�Ϊn-1���ַ�
		cout << userInput[n - 1] << endl;

		//�ݹ���ã���n��С
		reverse(n - 1);
	}
}