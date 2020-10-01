
import java.util.*;
public class unequal {

	public static void main(String[] args) {
		
        Scanner sc=new Scanner(System.in);
        String s1="",s2="";
        s1=sc.next();
        s2=sc.next();
        int i;
        int a[]=new int[256];
        int b[]=new int[256];
        int d[]=new int[256];
        for(char c: s1.toCharArray()) {
        	int index=(int)c;
        	a[index]+=1;
        	
        }
        for(char c: s2.toCharArray()) {
        	int index=(int)c;
        	b[index]+=1;
         }
        String s3="",s4="";
        for(i=0;i<256;i++)
        {
        	if(a[i]!=0)
        		s3=s3+(char)i;
        	
        	if(b[i]!=0)
        		s4=s4+(char)i;
        }
        for(char c:s1.toCharArray()) {
        	int index=(int)c;
        	d[index]+=1;
        }
        for(char c:s2.toCharArray()) {
        	int index=(int)c;
        	d[index]-=1;
        }
        for(i=0;i<256;i++)
        {
        	if(d[i]!=0)
        		System.out.print((char)i);
        }
        
        
	}

}
