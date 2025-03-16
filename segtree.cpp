class SegTree {
  public:
    int n;
    vector<int> a;
    vector<int> seg;
    SegTree(int &n) {
        this->n = n;
        a.resize(n, 0);
        seg.resize(4 * n, 0);
    }

    int query(int idx, int low, int high, int r) {
        if (high <= r) {
            return seg[idx];
        }

        // to be changed accordingly
        if (low > r) {
            return 0;
        }

        int mid = low + (high - low) / 2;
        // to be changed accorgingly
        return query(2 * idx + 1, low, mid, r) + query(2 * idx + 2, mid + 1, high, r);
    }

    void update(int idx, int low, int high, int &pos) {
        if (low == high && low == pos) {
            a[pos] = 1;
            seg[idx] = 1;
            return;
        }
        if (low > pos || high < pos) {
            return;
        }
        int mid = low + (high - low) / 2;
        update(2 * idx + 1, low, mid, pos);
        update(2 * idx + 2, mid + 1, high, pos);
        // to be changed
        seg[idx] = seg[2 * idx + 1] + seg[2 * idx + 2];
        return;
    }
    int query(int num) {
        return query(0, 0, n - 1, num);
    }
    void update(int num) {
        update(0, 0, n - 1, num);
    }
};