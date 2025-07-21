import java.util.*;

public class SubString
{
    public static List<String> ss(String s){

        List<String> li = new ArrayList<>();
        int count=0;
        
        for(int i=0; i<s.length(); i++){
            
            String str = "";
            
            for (int j = i; j < s.length(); j++) {
                
                str = str+s.charAt(j);
                
                int a=0, b=str.length()-1, flag=0;
                
                if(b==0){
                    count++;
                }
                
                else{
                    while(a<b){
                        if(str.charAt(a)!=str.charAt(b)){
                            flag=0;
                            break;
                        }
                        
                        flag = 1;
                    }
                    
                    if(flag==1){
                        count++;
                    }
                }
                
                li.add(str);
            }
            
        }
        
        System.out.println(count);
        return li;
    }
    
	public static void main(String[] args) {
		List<String> li = new ArrayList<>();
		
		li = ss("ABCD");
		System.out.println(li);
	}
}