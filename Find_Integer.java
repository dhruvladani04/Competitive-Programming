import java.util.HashSet;
import java.util.Scanner;

public class Find_Integer
{
    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);
		int t=in.nextInt();
		while(t>0)
		{
		    int x=in.nextInt();
		    x++;
		    
		    while( !isDistinct( String.valueOf( x ) ) ){
		        
		        x++;
		        
		    }
		    
		    System.out.println( x );
		    t--;
		}
    }
    static boolean isDistinct( String s ){
        
        HashSet<Character> set = new HashSet<>();
        
        for( int i = 0 ; i < s.length() ; i++ ){
            
            if( set.contains(s.charAt(i)) ) return false;
            else set.add( s.charAt(i) );
        }
        
        return true;
        
    }
}