# Programming Note

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
```

## 輾轉相除法
以 *UVA11417 GCD* 為例。  
最大公因數
``` C++
int gcd(int i, int j){
	int large = max(i, j);
	int small = min(i, j);

	while(1){
		int remainder = large % small;	
		if(remainder){
			large = small;
			small = remainder;
		}
		else{
			return small;
		}
	}	
}
```

## map
以 *UVA10226 Hardwood Species* 為例。
### 建立
以 string 對 int 為例子，key: string，value: int。
``` C++
#include <map>
map<string, int> mapTree;
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