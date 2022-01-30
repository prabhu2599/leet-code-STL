class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea =0;
        int minIndex = 0;
        int maxIndex = height.size()-1;
     
        while(minIndex!=maxIndex)
        {
            if(height[minIndex]>height[maxIndex])
                swap(minIndex,maxIndex);
            int newarea = height[minIndex] * (abs(minIndex-maxIndex));
            if(newarea>maxarea)
                maxarea = newarea;
            
            if(minIndex > maxIndex)
                minIndex--;
            else
                minIndex++;
        }
        return maxarea;
    }
};
