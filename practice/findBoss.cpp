#include<bits/stdc++.h>
using namespace std;

vector<string> findBoss(vector<pair<string,string>> adoptions){
    unordered_map<string,int> mappings;

    vector<string> nodes;

    int ct=0;

    vector<int> indegree;

    vector<vector<int>> adj;

    for(pair<string,string> bacha:adoptions){
        string parent=bacha.first;
        string child=bacha.second;

         if(mappings.find(parent)==mappings.end()){
             mappings.insert({parent,ct++});
             nodes.push_back(parent);
             adj.push_back({});
             indegree.push_back(0);
         }

         if(mappings.find(child)==mappings.end()){
             mappings.insert({child,ct++});
             nodes.push_back(child);
             adj.push_back({});
             indegree.push_back(0);
         }

         adj[mappings[parent]].push_back(mappings[child]);
         indegree[mappings[child]]++;
    }

    vector<string> rootnodes;

    int n=adj.size();

    for(int i=0;i<n;i++){
        if(indegree[i]==0)
        rootnodes.push_back(nodes[i]);
    } 

    return rootnodes;
}