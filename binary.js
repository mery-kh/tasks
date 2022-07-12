function binarySearch(arr, data){
    let start = 0;
    let end = arr.length - 1;
    while(start <= end) {
        let mid = Math.floor((start+end)/2);
        if (data === arr[mid]) return true;
        else if (data < arr[mid]) end = mid - 1;
        else start = mid + 1;
    }
    return false;
}
console.log(binarySearch([1,3,4,7,9,11],7))

function binarySearchRecursive(arr, data, start, end){
    if(start > end) return false;
        let mid = Math.floor((start+end)/2);
        if (data === arr[mid]) return true;
        else if (data < arr[mid]) return binarySearchRecursive(arr, data, start, mid - 1);
        else return binarySearchRecursive(arr, data, mid + 1, end);
}
let arr = [1,3,4,7,9,11];
console.log(binarySearchRecursive(arr,5,0,arr.length-1))
