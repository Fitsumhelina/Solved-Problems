
class Main {
    public static void main(String[] args) {
        int num =1142;
        String number = String.valueOf(num);
        int length =number.length();
        int sum =0;
        int product = 1;
        for (int i =0; i<length; i++){
            int j = Character.getNumericValue(number.charAt(i));
            sum+=j;
            product*=j;
        }
        if (sum==product){
            System.out.println("yes it's spy num");
        }
        else{
        System.out.println("no it's not ");
            
        }
        
    }
}