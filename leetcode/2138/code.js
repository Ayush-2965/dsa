/**
 * @param {string} s
 * @param {number} k
 * @param {character} fill
 * @return {string[]}
 */
var divideString = function(s, k, fill) {
    const string=[];
    for (let i = 0; i < s.length; i+=k) {
        let s3=s.substring(i,k+i);
        
        if(s.length-i<k){
            s3 += fill.repeat(k-(s.length-i));
        }
        
        string.push(s3)
    }
    return string;
};

console.log(divideString("jhejejejjj",3,"x"));
console.log(String("e")*2)
