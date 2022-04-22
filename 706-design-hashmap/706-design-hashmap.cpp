class MyHashMap {
public:
vector<int> v; //initializing vector
MyHashMap() {
int n=1e6+1;
v.resize(n);
fill(v.begin(),v.end(),-1); //initializing with -1 so we can return -1 in 3rd condition
}
void put(int key, int value) {
v[key]=value;
}
int get(int key) {
return v[key];
}

void remove(int key) {
   v[key]=-1;
}
};