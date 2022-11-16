void solve() {
    int n;
    string s;
    cin >> n >> s;
    set<string> se;
    rep(i, 0, n) {
        string ss;
        for(int k = 0; k < 5 && i + k < n; k++) {
            ss.push_back(s[i + k]);
            se.insert(ss);
        }
    }
    rep(len, 1, 6) {
        string t(len, 'a');
        while(true) {
            if(se.count(t) == 0) {
                cout << t << '\n';
                return;
            }
            int idx = len - 1;
            while(idx >= 0 && t[idx] == 'z') {
                t[idx] = 'a';
                idx--;
            }
            if(idx < 0) break;
            t[idx]++;//
        }
    }
}
