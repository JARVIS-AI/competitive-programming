// author: Rodrigo Alves
// judge: URI
// problem: Salary
// url: https://www.urionlinejudge.com.br/judge/en/problems/view/1008
// status: AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int employee, hours;
  double hourRate;

  scanf("%d\n%d", &employee, &hours);
  scanf("%lf", &hourRate);

  printf("%s = %d\n", "NUMBER", employee);
  printf("%s = U$ %.2lf\n", "SALARY", hours * hourRate);

  return 0;
}
