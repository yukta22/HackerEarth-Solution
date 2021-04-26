bool check(int cows , long long pos[] , int n , int distance){
      
      int count = 1;

      long long Last_position = pos[0];

      for(int i = 1 ; i < n ; i++){
          
          if(pos[i] - Last_position >= distance){
               Last_position = pos[i];
               count++;
          }
          if(count == cows){
            return true;
          }

      }
      return false;

}

void solve(){
     
    int n , c ;
    cin >> n >> c ;

    long long pos[n];

    rep(i,0,n){
        cin >> pos[i];
    }
    
    sort(pos,pos+n);
    long long start = pos[0];
    long long end = pos[n-1] - pos[0];

    long long ans = -1;

    while(start <= end){
        
        long long mid = start + (end - start)/2;
        
        if(check(c,pos,n,mid)){
            ans = mid;
            start = mid+1;
        }else{
            end = mid-1;
        }

    }

    cout << ans << endl; 

   }
