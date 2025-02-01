public int[] span(int[] prices){
    int[] spans = new int[prices.length];
    spans[0]=1;

    for(int i= 1 ; i<prices.length;i++){
        spans[i] = 1;
        int j = i-1;
        while(j>=0&&prices[i]>=prices[j])
            
    }
}