 static bool compare(Job job1, Job job2){
      return job1.profit>job2.profit;   
   }

   vector<int> JobScheduling(Job arr[], int n) 
   { 
       
       sort(arr,arr+n,compare); 
       vector<int>v(n+1,-1);
       int profit = 0; 
       int totalJobs = 0;
       
       for(int i=0;i<n;i++){
           
           int jobId = arr[i].id;
           int deadLine = arr[i].dead;
           int pf = arr[i].profit;
           
           while(deadLine){           
               if(v[deadLine]==-1){
                   v[deadLine]=jobId;
                   profit+=pf;
                   totalJobs++;
                   break;
               }
               deadLine--;
           }
       }
       
       return {totalJobs,profit};

   }
