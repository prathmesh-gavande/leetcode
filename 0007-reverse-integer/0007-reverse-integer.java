class Solution {
    public int reverse(int x) {
        String s=x+"";
        long ans=0;
        int flag=0;
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s.charAt(i)=='-')
            {
                flag=1;
                continue;
            }
            ans=ans*10+(s.charAt(i)-'0');
        }
        if(ans>=Integer.MAX_VALUE)
            return 0;
        if(flag==1)
            ans=ans*-1;
        return (int)ans;
    }
}