# Programming Note

## 輸出控制
### setw()
保留多少寬度
``` C++
#include <iomanip>
cout << setw(x) 
	<< temp << endl;
// [   1]
```

### setfill()
利用字元填滿剩餘寬度
``` C++
#include <iomanip>
cout << setw(x) << setfill('0')
	<< temp << endl;
// [0001]
```

### setprecision()
控制有效浮點數精度
``` C++
#include <iomanip>
double a = 21.1234;
cout << setprecision(4) << a << endl;
// [21.12]
double b = 0.00045;
cout << defaultfloat << setprecision(2) << b << endl;
// [0.00045]
```

### fixed
``` C++
#include <iomanip>
double a = 21.1234;
cout << setprecision(10) << fixed << a << endl;
// [21.1234000000]
```

## 二進制處理
以 *UVA10343 Base64 Decoding* 為例。
### 左移
``` C++
store << 6;
store <<= 6; // 等效 store = store << 6;
```
### 右移
``` C++
store >> 6;
store >>= 6; // 等效 store = store >> 6;
```
### AND
``` C++
int mask = pow(2, 8) - 1;
store >> (i * 8) & mask
```

## 英文字元轉換大小寫
``` C++
#include <cctype>
toupper(char c);
tolower(char c);
```

## 浮點數輸出控制
``` C++
#include <iomanip>
fixed
setprecision(n)
```

## 數值取上下界
``` C++
#include <cmath>
ceil(double number)
floor(double number)
round(double number)
```

## 反轉容器內容 reverse
``` C++
#include <algorithm>
string a;
reverse(a.begin(),a.end());
```

## 歷遍容器方法
``` C++
array<int, 500> ans = {0};
for(int x:ans){
}
```

## 大數相乘
以 *UVA10220 I Love Big Numbers!* 為例。  
先同乘，再處理進位。
``` C++
array<int, 3000> largeNumber = {0};
largeNumber[0] = 1;
for(int i =1; i <= 1000; i++){
	// Product
	for(int j=0; j<3000; j++){
		largeNumber[j] *= i;
	}
	// Carry
	for(int j=0; j<3000; j++){
		largeNumber[j+1] += largeNumber[j] / 10;
		largeNumber[j] %= 10;
	}
}
```

## 輾轉相除法
以 *UVA11417 GCD* 為例。  
最大公因數
``` C++
int fgcd(int a, int b){
	while(a %= b){
		swap(a,b);
	}
	return b;
}
```

## Extended Euclidean Algorithm
``` C++
struct Ans {
	int r; int s; int t;
};

// Extended Euclidean Algorithm
Ans EEA(int a, int b){
	int r1 = a, r2 = b, r,
		s1 = 1, s2 = 0, s,
		t1 = 0, t2 = 1, t,
		q;
		
	while(r2){
		q = r1 / r2;
		r = r1 % r2;
		s = s1 - s2 * q;
		t = t1 - t2 * q;
		
		r1 = r2; r2 = r;
		s1 = s2; s2 = s;
		t1 = t2; t2 = t;
	}
	
	Ans ans;
	ans.r = r1; ans.s = s1; ans.t = t1;
	return ans;
}
```

## string
### length
長度
``` C++
for(int i = 0; i < input.length(); i++)
```
### substr
以 *UVA10298 Power Strings* 為例。  
`substr(a, b)` a: 起始位置，b: 要多少字元。
``` C++
string b = input.substr(0,i+1);
```

## pair
### 建立
以 *UVA118 Mutant Flatworld Explorers* 為例。
``` C++
pair<int, int> tpair(current_x, current_y);
```
### 讀取
``` C++
cout << tpair.first << ' ' << tpair.second << endl;
```

## stack
### 建立
``` C++
stack<char> stackA;
```
### 加入
``` C++
char c = 'a';
stackA.push(c);
```
### 頂端
``` C++
stackA.top();
```
### 移除頂端
``` C++
stackA.pop();
```
### 是否為空
``` C++
stackA.empty();
```
### 容量
``` C++
stackA.size();
```

## map
以 *UVA10226 Hardwood Species* 為例。
### 建立
以 string 對 int 為例子，key: string，value: int。
``` C++
#include <map>
map<string, int> mapTree;
```
以 *UVA118 Mutant Flatworld Explorers* 為例。
``` C++
map<char, pair<int, int>> mapTable = {
	{'N', {0, 1}},
	{'E', {1, 0}},
	{'S', {0, -1}},
	{'W', {-1, 0}}
};
```

### 輸入
``` C++
string treeName = "key";
mapTree[treeName] = 1;
```

### 尋找
找不到時會回傳 ```*.end()``` ，因此可以比較是否相同。
``` C++
map<string, int>::iterator it;
it = mapTree.find(treeName);
if(it == mapTree.end())
```

### 輸出
迭代器先指向 ```begin()``` 。  
```it->fist``` ```it->second``` 分別對應 key 跟 value。
``` C++
for(it = mapTree.begin(); it != mapTree.end(); it++){
    cout << it->first << ' ';
    cout << fixed << setprecision(4) << (double)it->second * 100 / count << endl;
}
```

### 清除
``` C++
mapTree.clear();
```

## set
以 *UVA10050 Hartals* 為例。  
### 建立
``` C++
#include <set>
set<int> hartalDays;
```
### 輸入
``` C++
hartalDays.insert(j * freq);
```
### 刪除
``` C++
hartalDays.erase(6 + 7 * i);
```
### 容量
``` C++
hartalDays.size()
```

## array
### 初始化
``` C++
array<int, 500> ans = {0};
```
* `int` 資料型態
* `500` 容量
* `{0}` 初始化數值