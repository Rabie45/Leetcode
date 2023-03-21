int maxArea(int* height, int heightSize){
int head=0,tail=heightSize-1,maxVal=0;
while(head<tail){
int width=tail-head;
int heig=height[head]<height[tail]?height[head]:height[tail];
int area=width*heig;
maxVal=maxVal>area?maxVal:area;
if(height[head]>height[tail]{
    tail--;
}
else{
    head++;
}
}
return maxVal;
}