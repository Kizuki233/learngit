#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &numbers, int target)
{
    //Key is the number and value is its index in the vector.
	unordered_map<int, int> hash;
	vector<int> result;
	for (int i = 0; i < numbers.size(); i++) {
		int numberToFind = target - numbers[i];

            //if numberToFind is found in map, return them
		if (hash.find(numberToFind) != hash.end()) {
                    //+1 because indices are NOT zero based
			result.push_back(hash[numberToFind] + 1);
			result.push_back(i + 1);			
			// return result;
		}

            //number was not found. Put it in the map.
		hash[numbers[i]] = i;
	}
	return result;
}

int main(){
   cout<<"hello world"<<endl;
   //git remote add origin git@server-name:path/repo-name.git  远程库的声明
   //git remote add origin git@github.com:Kizuki233/learngit.git
   //git push -u origin master
   //git clone git@github.com:Kizuki233/Sort.git
   //git clone git@github.com:Kizuki233/learngit.git

   //git remote -v 远程库
   //git push origin branch-name       git pull
   //git reset --hard HEAD^ 会退版本
   //git reflog 版本信息
   //git add-> commit -m
   int a=1,b=2;
   a^=b;
   b^=a;
   a^=b;
   cout<<a<<' '<<b<<endl;
   int arr[10]={1,9,2,8,3,7,4,6,5,5};
   vector<int> v(arr,arr+10);
   vector<int> ans=twoSum(v,10);
   cout<<ans.size()<<endl;
   return 0;
}

