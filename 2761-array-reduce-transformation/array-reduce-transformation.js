/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(arr, fn, init) {
    let val = init;
    for (let i = 0; i < arr.length ; i++)
        val = fn(val,arr[i]);
    return val;
};