#include<bits/stdc++.h>
using namespace std;
void print1(int n) {
    for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
			cout << "* ";
		}
		cout << endl;
	}
}
void print2(int n) {
    for(int i=0;i<n;i++) {
		for(int j=0;j<i+1;j++) {
			cout << "* ";
		}
		cout << endl;
	}
}
void print3(int n) {
    for(int i=0;i<n;i++) {
		for(int j=0;j<i+1;j++) {
			cout << j+1 << " ";
		}
		cout << endl;
	}
}
void print4(int n) {
    for(int i=0;i<n;i++) {
		for(int j=0;j<i+1;j++) {
			cout << i+1 << " ";
		}
		cout << endl;
	}
}
void print5(int n) {
    for(int i=0;i<n;i++) {
		for(int j=0;j<n-i;j++) {
			cout << "* ";
		}
		cout << endl;
	}
}
void print6(int n) {
    for(int i=0;i<n;i++) {
		for(int j=0;j<n-i;j++) {
			cout << j+1 << " ";
		}
		cout << endl;
	}
}
void print7(int n) {
    for(int i=0;i<n+1;i++) {
		for(int j=0;j<n-i;j++) {
			cout << " ";
		}
        for(int j=0;j<2*i-1;j++) {
			cout << "*";
		}
        for(int j=0;j<n-i;j++) {
			cout << " ";
		}
		cout << endl;
	}
}
void print8(int n) {
    for(int i=0;i<n+1;i++) {
		for(int j=0;j<i;j++) {
			cout << " ";
		}
        for(int j=0;j<2*(n-i)-1;j++) {
			cout << "*";
		}
        for(int j=0;j<i;j++) {
			cout << " ";
		}
		cout << endl;
	}
}
void print10(int n) {
    for(int i=0;i<=2*n-1;i++) {
        int stars = i;
        if(i>n) stars = 2*n-i;
		for(int j=0;j<stars;j++) {
			cout << "*";
		}
		cout << endl;
	}
}
void print11(int n) {
	int start = 1;
    for(int i=0;i<n;i++) {
		if (i%2==0) start = 1;
		else start = 0;
		for(int j=0;j<i+1;j++) {
			cout << start;
			start = 1 - start;
		}
		cout << endl;
	}
}
void print12(int n) {
	for(int i=1;i<n+1;i++) {
        for(int j=0;j<i;j++) {
            cout << j+1;
        }
        for(int j=0;j<2*(n-i);j++) {
            cout << " ";
        }
        for(int j=i;j>0;j--) {
            cout << j;
        }
        cout << endl;
    }
}
void print13(int n) {
	int num = 1;
    for(int i=0;i<n;i++) {
		for(int j=0;j<i+1;j++) {
			cout << num << " ";
			num++;
		}
		cout << endl;
	}
}
void print14(int n) {
    for(int i=0;i<n;i++) {
		for(char j='A';j<='A'+i;j++) {
			cout << j ;
		}
		cout << endl;
	}
}
void print15(int n) {
    for(int i=0;i<n;i++) {
		for(char j='A';j<'A'+n-i;j++) {
			cout << j ;
		}
		cout << endl;
	}
}
void print16(int n) {
    for(int i=0;i<n;i++) {
		char ch = 'A'+i;
		for(int j=0;j<=i;j++) {
			cout << ch;
		}
		cout << endl;
	}
}
void print17(int n) {
    for(int i=0;i < n;i++) {
		char ch = 'A';
		for(int j=0;j < (n-i-1);j++) {
			cout << " ";
		}
		for(int j=0;j < 2*i+1;j++) {
			cout << ch;
			if(j >= i) ch--;
			else ch++;
		}
		for(int j=0;j < (n-i-1);j++) {
			cout << " ";
		}
		cout << endl;
	}
}
void print18(int n) {
    for(int i=0; i<n; i++) {
		char ch = 'A'+(n-i-1);
		for(int j=0; j<=i; j++) {
			cout << ch << " ";
			ch++;
		}
		cout << endl;
	}
}
void print19(int n) {
	for(int i=0; i<n; i++) {
        for(int j=0; j<n-i; j++) {
            cout << "* ";
        }
        for(int j=0; j<4*i; j++) {
            cout << " ";
        }
        for(int j=0; j<n-i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            cout << "* ";
        }
        for(int j=0; j<4*(n-i-1); j++) {
            cout << " ";
        }
        for(int j=0; j<=i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}
void print20(int n) {
	int spaces = 2*(n-1);
    for(int i=0; i<2*n; i++) {
        int stars = i;
		if(i>n-1) stars= 2*n-i-2;
        for(int j=0; j<=stars; j++) {
           cout << "*"; 
        }

        for(int j=0; j<spaces; j++) {
           cout << " ";
        }
		if(i<n-1) spaces -=2;
        else spaces += 2;
        for(int j=0; j<=stars; j++) {
           cout << "*"; 
        }
        cout << endl;
    }
}
void print21(int n) {
	for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i==0 || j==0 || i==n-1 || j==n-1) {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << endl;
    }
}
void print22b(int n) {
	for(int i=0; i<=2*n-2; i++) {
        for(int j=0; j<=2*n-2; j++) {
			int top = i;
			int left = j;
			int bottom = (2*n-2)-i;
			int right = (2*n-2)-j;
			cout << n - min(min(top,bottom),min(left,right));
        }
        cout << endl;
    }
}
void print22(int n) {
	for(int i=0; i<=2*n-2; i++) {
        int k=0;
		int penetration = i;
		if(i>n-1) penetration = 2*n-i-2;
        for(int j=0; j<=2*n-2; j++) {
            cout << n-k<<" ";
            if(j<penetration) k++;
            else if(j>=2*n-2-penetration) k--;
        }
        cout << endl;
    }
}
int main(){
    int times,rows;
    cin >> times;
    for(int k=0;k<times;k++) {
        cin >> rows;

        print20(rows);
    }
}
