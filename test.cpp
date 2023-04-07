/*

通过处理每个二进制数中的1来打印输出所有子集

*/


#include <iostream> 

using namespace std; //使用std命名空间

void print_subset(int n) { //定义名为print_subset的函数，它接收一个整数n作为参数，n为元素
	for (int i = 0; i < (1 << n); i++) { //使用循环遍历所有可能的子集
		for (int j = 0; j < n; j++) { //使用循环遍历当前子集中的每个元素
			if (i & (1 << j)) { //使用位运算判断当前元素是否在子集中
				cout << j << " "; //如果当前元素在子集中，则输出它的下标
			}
		}
		cout << endl; //在每个子集输出后换行
	}
}

int main() { 
	int n; //定义一个整型变量n
	cin >> n; //从标准输入读取n的值
	print_subset(n); //调用print_subset函数，输出所有可能的子集
	return 0; 
}
