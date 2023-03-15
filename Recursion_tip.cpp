//  The below piece of code takes every condition of taking or not taking of element
if(arr[ind]<=target) {
  ds.push_back(arr[ind]);
  solve(arr,ans,target-arr[ind],ds,ind+1);
  ds.pop_back();
}
solve(arr,ans,target,ds,ind+1);

/*Instead of above coding which takes a lot of time(2 raise to n) and many a times do not pass the time
constraints given by the probelem we will use the below code which reduces the complexity (just less 
than 2 raise to n) but is able to pass time constraint most of time.*/

// The below piece of code takes every condition of taking or not taking of element
// due to the help of loop
for(int i=ind;i<arr.size();i++){
  if(arr[i]<target){
    ds.push_back(arr[i]);
    solve(arr,ans,target-arr[i],ds,i+1);
    ds.pop_back();
  }
}
