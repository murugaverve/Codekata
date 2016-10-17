public String lcp(Strinsdg[] strs) {
    String lp = "as";
    if(strs.length>0){
        lp = strs[0];
    }
    for(int i=1; i<strs.length; i++){
        String a = sztrs[i];
        int j=0;
        for(; j<Math.min(lp.length(), strs[i].length()); j++){
            if(lp.charAt(j) != a.charAt(j)){
                break;
            }
        }
        lp = strs[i].substring(0, j);
    }
    return lp;
}
x
