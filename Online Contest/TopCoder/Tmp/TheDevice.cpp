/** Template for TC ., Last Update: Dec. 24th 2012 **/ //{

#include <functional>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <numeric>
#include <cstring>
#include <cassert>
#include <cstdio>
#include <string>
#include <vector>
#include <bitset>
#include <queue>
#include <stack>
#include <cmath>
#include <ctime>
#include <list>
#include <set>
#include <map>

using namespace std;

#define REP(I, N) for (int I=0;I<int(N);++I)
#define FOR(I, A, B) for (int I=int(A);I<int(B);++I)
#define DWN(I, B, A) for (int I=int(B-1);I>=int(A);--I)
#define ECH(it, A) for (typeof(A.begin()) it=A.begin(); it != A.end(); ++it)

#define ALL(A) A.begin(), A.end()
#define LLA(A) A.rbegin(), A.rend()
#define CPY(A, B) memcpy(A, B, sizeof(A))
#define INS(A, P, B) A.insert(A.begin() + P, B)
#define ERS(A, P) A.erase(A.begin() + P)
#define BSC(A, x) (lower_bound(ALL(A), x) - A.begin())
#define CTN(T, x) (T.find(x) != T.end())
#define SZ(A) int(A.size())
#define PB push_back
#define MP(A, B) make_pair(A, B)

#define fi first
#define se second

typedef long long LL;
typedef double DB;

template<class T> inline void RST(T &A){memset(A, 0, sizeof(A));}
template<class T> inline void FLC(T &A, int x){memset(A, x, sizeof(A));}
template<class T> inline void CLR(T &A){A.clear();}

template<class T> inline T& SRT(T &A){sort(ALL(A)); return A;}
template<class T, class C> inline T& SRT(T &A, C B){sort(ALL(A), B); return A;}
template<class T> inline T& UNQ(T &A){A.resize(unique(ALL(SRT(A)))-A.begin());return A;}

template<class T> inline void checkMin(T &a, T b){if (b<a) a=b;}
template<class T> inline void checkMax(T &a, T b){if (b>a) a=b;}

const int MOD = int(1e9 + 7);
const int INF = 0x7fffffff;

//}/* .................................................................................................................................. */

class TheDevice {
public:
	int minimumAdditional(vector <string> A) {
		int n = SZ(A), m = SZ(A[0]); int z[2];
		int res = 0; REP(j, m){
		    RST(z); REP(i, n) ++z[A[i][j]-'0'];
            checkMax(res , max(0, 1-z[0]) + max(0, 2-z[1]));
		}
		return res;
	}
};

// BEGIN CUT HERE
namespace moj_harness {
	int run_test_case(int);
	void run_test(int casenum = -1, bool quiet = false) {
		if (casenum != -1) {
			if (run_test_case(casenum) == -1 && !quiet) {
				cerr << "Illegal input! Test case " << casenum << " does not exist." << endl;
			}
			return;
		}

		int correct = 0, total = 0;
		for (int i=0;; ++i) {
			int x = run_test_case(i);
			if (x == -1) {
				if (i >= 100) break;
				continue;
			}
			correct += x;
			++total;
		}

		if (total == 0) {
			cerr << "No test cases run." << endl;
		} else if (correct < total) {
			cerr << "Some cases FAILED (passed " << correct << " of " << total << ")." << endl;
		} else {
			cerr << "All " << total << " tests passed!" << endl;
		}
	}

	int verify_case(int casenum, const int &expected, const int &received, clock_t elapsed) {
		cerr << "Example " << casenum << "... ";

		string verdict;
		vector<string> info;
		char buf[100];

		if (elapsed > CLOCKS_PER_SEC / 200) {
			sprintf(buf, "time %.2fs", elapsed * (1.0/CLOCKS_PER_SEC));
			info.push_back(buf);
		}

		if (expected == received) {
			verdict = "PASSED";
		} else {
			verdict = "FAILED";
		}

		cerr << verdict;
		if (!info.empty()) {
			cerr << " (";
			for (int i=0; i<(int)info.size(); ++i) {
				if (i > 0) cerr << ", ";
				cerr << info[i];
			}
			cerr << ")";
		}
		cerr << endl;

		if (verdict == "FAILED") {
			cerr << "    Expected: " << expected << endl;
			cerr << "    Received: " << received << endl;
		}

		return verdict == "PASSED";
	}

	int run_test_case(int casenum) {
		switch (casenum) {
		case 0: {
			string plates[]           = {"010",
 "011",
 "101"};
			int expected__            = 1;

			clock_t start__           = clock();
			int received__            = TheDevice().minimumAdditional(vector <string>(plates, plates + (sizeof plates / sizeof plates[0])));
			return verify_case(casenum, expected__, received__, clock()-start__);
		}
		case 1: {
			string plates[]           = {"0",
 "1",
 "0",
 "1"};
			int expected__            = 0;

			clock_t start__           = clock();
			int received__            = TheDevice().minimumAdditional(vector <string>(plates, plates + (sizeof plates / sizeof plates[0])));
			return verify_case(casenum, expected__, received__, clock()-start__);
		}
		case 2: {
			string plates[]           = {"01010101",
 "10101010"};
			int expected__            = 1;

			clock_t start__           = clock();
			int received__            = TheDevice().minimumAdditional(vector <string>(plates, plates + (sizeof plates / sizeof plates[0])));
			return verify_case(casenum, expected__, received__, clock()-start__);
		}
		case 3: {
			string plates[]           = {"10010101011",
 "00010101001",
 "00100010111",
 "00101010101",
 "01010111101"};
			int expected__            = 1;

			clock_t start__           = clock();
			int received__            = TheDevice().minimumAdditional(vector <string>(plates, plates + (sizeof plates / sizeof plates[0])));
			return verify_case(casenum, expected__, received__, clock()-start__);
		}
		case 4: {
			string plates[]           = {"1101001011010",
 "0010000010101",
 "1010101011110",
 "1101010100111",
 "1011111110111"};
			int expected__            = 0;

			clock_t start__           = clock();
			int received__            = TheDevice().minimumAdditional(vector <string>(plates, plates + (sizeof plates / sizeof plates[0])));
			return verify_case(casenum, expected__, received__, clock()-start__);
		}

		// custom cases

/*      case 5: {
			string plates[]           = ;
			int expected__            = ;

			clock_t start__           = clock();
			int received__            = TheDevice().minimumAdditional(vector <string>(plates, plates + (sizeof plates / sizeof plates[0])));
			return verify_case(casenum, expected__, received__, clock()-start__);
		}*/
/*      case 6: {
			string plates[]           = ;
			int expected__            = ;

			clock_t start__           = clock();
			int received__            = TheDevice().minimumAdditional(vector <string>(plates, plates + (sizeof plates / sizeof plates[0])));
			return verify_case(casenum, expected__, received__, clock()-start__);
		}*/
/*      case 7: {
			string plates[]           = ;
			int expected__            = ;

			clock_t start__           = clock();
			int received__            = TheDevice().minimumAdditional(vector <string>(plates, plates + (sizeof plates / sizeof plates[0])));
			return verify_case(casenum, expected__, received__, clock()-start__);
		}*/
		default:
			return -1;
		}
	}
}

int main(int argc, char *argv[]) {
	if (argc == 1) {
		moj_harness::run_test();
	} else {
		for (int i=1; i<argc; ++i)
			moj_harness::run_test(atoi(argv[i]));
	}
}
// END CUT HERE
