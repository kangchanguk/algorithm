#include <string>
#include <iostream>
#include <vector>

/*���α׷��ӽ� ū�� ����� 
6�ڸ� ���� �ִ밪�� ���� �� �� ���ڸ� ���� ���� */

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
