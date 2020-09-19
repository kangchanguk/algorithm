#include <string>
#include <iostream>
#include <vector>

/*프로그래머스 큰수 만들기 
6자리 수의 최대값을 구할 때 맨 앞자리 부터 결정 */

using namespace std;

string solution(string number, int k) {
    string answer = "";
    int many = number.length() - k;
    int index = 0;
    for(int i = 1; i <= many;i++)
    {
        char max = 0;
        int maxindex = 0;
        for(int j = index; j<=number.length() - 1 - many + i;j++)
        {
            if(max < number[j])
            {
                max = number[j];
                maxindex = j;
            }
        }
        answer = answer + number[maxindex];
        index = maxindex + 1;
    }
    return answer;
}
