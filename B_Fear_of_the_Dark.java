import java.util.*;
public class B_Fear_of_the_Dark
{
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        while(t>0){
            int px,py,ax,ay,bx,by;
            px=in.nextInt();
            py=in.nextInt();
            ax=in.nextInt();
            ay=in.nextInt();
            bx=in.nextInt();
            by=in.nextInt();
            double d1=Math.sqrt((px*px) + (py*py));
            double d2=(Math.sqrt(Math.pow(ax-bx,2)+Math.pow(ay-by,2)))/2.0;
            double d3=Math.sqrt(Math.pow(ax-px,2)+Math.pow(ay-py,2));
            System.out.println(Math.min(d1,Math.min(d2,d3)));
            t--;
        }
    }
}