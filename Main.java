abstract class BankAccount{
    private String accountNumber;
    private double balance;
    
    public BankAccount (String acc, double bal) {
        accountNumber = acc;
        balance = bal;
    }
    
    public String getAccountNumber() {
        return accountNumber;
    // 讀取帳號
    }
    // 2.
    public double getBalance() {
        return balance;
    // 讀取餘額
    }
    // 3.
    public void deposit(double m) {
        balance += m;
    // 存款
    }
    // 4.
    public void showInfo() {
        System.out.printf("Account: %s", accountNumber);
        System.out.printf(", Balance: %.2f", balance);
        System.out.println("");
    // Account: accountNumber, Balance: balance
    // 範例，Account: A1234, Balance: 6666
    }
    // 5.
    public abstract double calculateInterest();
    }
    
class SavingsAccount extends BankAccount {
    public SavingsAccount(String acc, double bal) {
        super(acc, bal);
    // 呼叫父類別建構子初始化資料。
    }
    @Override
    public double calculateInterest() {
        deposit(getBalance()*0.03);
        return getBalance()*0.03;
    // 計算利息並加入到餘額
    // 回傳有多少利息，不是餘額喔
    }
}
class CheckingAccount extends BankAccount {
    public CheckingAccount(String acc, double bal) {
        super(acc, bal);
    // 呼叫父類別建構子初始化資料。
    }
    @Override
    public double calculateInterest() {
        deposit(getBalance()*0.01);
        return getBalance()*0.01;
    // 計算利息並加入到餘額
    // 回傳有多少利息，不是餘額喔
    }
}
class FixedDepositAccount extends BankAccount {
    public FixedDepositAccount(String acc, double bal) {
        super(acc, bal);
    // 呼叫父類別建構子初始化資料。
    }
    @Override
    public double calculateInterest() {
        deposit(getBalance()*0.06);
        return getBalance()*0.06;
    // 計算利息並加入到餘額
    // 回傳有多少利息，不是餘額喔
    }
}
    
public class Main{
	public static void main(String[] args) {
		System.out.println("Hello World");
		// 建立物件
         BankAccount acc1 = new SavingsAccount("A001", 1000);
         BankAccount acc2 = new CheckingAccount("A002", 2000);
         BankAccount acc3 = new FixedDepositAccount("A003", 2000);
         // 顯示帳戶資訊
         acc1.showInfo();
         acc2.showInfo();
         acc3.showInfo();
         // 存款
         acc1.deposit(1000);
         acc2.deposit(2000);
         acc3.deposit(3000);
         // 計算利息
         acc1.calculateInterest();
         acc2.calculateInterest();
         acc3.calculateInterest();
         // 顯示帳戶資訊
         acc1.showInfo();
         acc2.showInfo();
         acc3.showInfo();
	}
}