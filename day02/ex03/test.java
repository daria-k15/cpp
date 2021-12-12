public static void main(void){
    int a = 1;
    int b= 1;
     while (b > 0) {
        int c = a % b;
        a = b;
        b = c;
    }
    System.out.printf(a);
}