import java.util.*;
public class B_YetnotherrokenKeoard
{
    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        while(t-->0)
        {
            String s=in.next();
            Stack<Integer> up=new Stack<>();
            Stack<Integer> lw=new Stack<>();
            Map<Integer,Character> map=new HashMap<>();
            int n=s.length();
            int ind;
            for(int i=0;i<n;i++)
            {
                char ch=s.charAt(i);
                if(ch=='B')
                {
                    if(!up.isEmpty())
                    {
                        ind=up.peek();
                        map.put(ind,'$');
                        up.pop();
                    }
                }
                else if(ch=='b')
                {
                    if(!lw.isEmpty())
                    {
                        ind=lw.peek();
                        map.put(ind,'$');
                        lw.pop();
                    }
                }
                else
                {
                    map.put(i,ch);
                    if(Character.isUpperCase(ch))
                    up.push(i);
                    else 
                    lw.push(i);
                }
            }
            StringBuilder ans = new StringBuilder();
            for(int i=0;i<n;i++)
            {
                if(map.containsKey(i) && map.get(i)!='$')
                ans.append(map.get(i));
            }
            System.out.println(ans);
        }
    }
}