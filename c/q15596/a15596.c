/* https://www.acmicpc.net/problem/15596 */

long long sum(int *a, int n) {
	long long   ans = 0;
    int         i;

    i = 0;
    while (i < n)
    {
        ans += (long long)a[i++];
    }
	return ans;
}