#include<iostream>
#include<string>
#include<unordered_set>
#include<algorithm>
using namespace std;

/*无重复的最长字串长度
输入: s = "abcabcbb"
输出: 3 
解释: 因为无重复字符的最长子串是 "abc"，所以其长度为 3。
*/
int main(){

    string str;
    cin>>str;
    unordered_set<char>char_set;
    int left=0,right=0;
    int res=0;
    int count_left=0,count_right=0;
    for(;left<str.length();left++){
        //当右指针小于字符串的长度，并且字符set中没有出行这个字符时，进入循环
        while(right<str.length()&&char_set.count(str[right])==0){
            char_set.insert(str[right]);
            res=max(res,right-left+1);
            right++;
        }
        char_set.erase(str[left]);
    }
    cout<<res;
    return 0;
}

