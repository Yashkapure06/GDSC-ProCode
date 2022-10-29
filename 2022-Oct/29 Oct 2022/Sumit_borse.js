var findPeakElement = function(nums) {
    return x(nums,0,nums.length-1)
};
var x=function (nums,begin,end){
    if((end-begin)===0)return end;
    if((end-begin)===1)return nums[begin]>nums[end]? begin:end;
    
    var max1=x(nums,begin,Math.floor((begin+end)/2));
    var max2=x(nums,Math.floor((begin+end)/2)+1,end);
    return nums[max1]>nums[max2]? max1:max2;
}
