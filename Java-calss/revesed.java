
class Main {
    public static void main(String[] args) {
        int num =1142;
        String number = String.valueOf(num);
        int length =number.length();
        int reversed = 0;    
        for (int k=length-1; k>=0; k--){
            int  x= Character.getNumericValue(number.charAt(k));
            reversed =reversed * 10 + x;
        }
        System.out.println("reversed: " +reversed);
        
        
    }
}