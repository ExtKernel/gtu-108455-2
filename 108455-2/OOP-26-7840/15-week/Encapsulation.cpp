class BankAccount {
    private:
        double balance;
    public:
        void deposit(double amount) { balance += amount; }
        double getBalance() { return balance; }
};
