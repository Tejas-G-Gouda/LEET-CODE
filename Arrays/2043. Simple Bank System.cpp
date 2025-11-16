typedef struct {
    long long *balance; 
    int balanceSize; 
} Bank;


Bank* bankCreate(long long* balance, int balanceSize) {
    Bank* bank = (Bank*)malloc(sizeof(Bank));
    bank->balance = balance;
    bank->balanceSize = balanceSize;
    return bank;
}

bool bankTransfer(Bank* obj, int account1, int account2, long long money) {
    if (account1 < 1 || account1 > obj->balanceSize || 
    account2 < 1 || account2 > obj->balanceSize)
        return false;
    if(obj->balance[account1-1] < money)
        return false;
    obj->balance[account2-1]  += money;
    obj->balance[account1-1]  -= money;
    return true;
}

bool bankDeposit(Bank* obj, int account, long long money) {
    if (account < 1 || account > obj->balanceSize)
        return false;
    obj->balance[account-1] += money;
    return true;
}

bool bankWithdraw(Bank* obj, int account, long long money) {
    if (account < 1 || account > obj->balanceSize)
        return false;
    if(obj->balance[account-1] < money)
        return false;
    obj->balance[account-1] -= money;
    return true;
}

void bankFree(Bank* obj) {
    free(obj); 
}

/**
 * Your Bank struct will be instantiated and called as such:
 * Bank* obj = bankCreate(balance, balanceSize);
 * bool param_1 = bankTransfer(obj, account1, account2, money);
 
 * bool param_2 = bankDeposit(obj, account, money);
 
 * bool param_3 = bankWithdraw(obj, account, money);
 
 * bankFree(obj);
*/