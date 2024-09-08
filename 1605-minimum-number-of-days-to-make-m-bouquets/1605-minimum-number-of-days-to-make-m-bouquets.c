int canMake(int* days, int size, int m, int k, int mid) {
    int bqts = 0;
    int flws = 0;
    for (int i = 0; i < size; i++) {
        if (days[i] <= mid) {
            flws++;
            if (flws == k) {
                bqts++;
                flws = 0;
            }
        } else {
            flws = 0;
        }
    }
    return bqts >= m;
}

int minDays(int* bloomDay, int bloomDaySize, int m, int k) {
    if ((long long)m * k > bloomDaySize)
        return -1;

    int left = INT_MAX;
    int right = INT_MIN;

    for (int i = 0; i < bloomDaySize; i++) {
        if (bloomDay[i] < left)
            left = bloomDay[i];
        if (bloomDay[i] > right)
            right = bloomDay[i];
    }

    while (left < right) {
        int mid = left + (right - left) / 2;
        if (canMake(bloomDay, bloomDaySize, m, k, mid)) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }

    return left;
}