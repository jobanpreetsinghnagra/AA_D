class Even{
    public static void main(String[] args)
    {
        int evens_n = 4;
        int sum =0;
        while(evens_n >= 0)
        {
            sum +=2;
            evens_n -= 1;
        }
        System.out.println("The Sum is: "+sum);
    }
}