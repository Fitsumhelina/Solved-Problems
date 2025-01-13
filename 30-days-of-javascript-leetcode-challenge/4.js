/*
Write a function createCounter. It should accept an initial integer init. It should return an object with three functions.

The three functions are:

increment() increases the current value by 1 and then returns it.
decrement() reduces the current value by 1 and then returns it.
reset() sets the current value to init and then returns it.
 

Example 1:

Input: init = 5, calls = ["increment","reset","decrement"]
Output: [6,5,4]
Explanation:
const counter = createCounter(5);
counter.increment(); // 6
counter.reset(); // 5
counter.decrement(); // 4
Example 2:

Input: init = 0, calls = ["increment","increment","decrement","reset","reset"]
Output: [1,2,1,0,0]
Explanation:
const counter = createCounter(0);
counter.increment(); // 1
counter.increment(); // 2
counter.decrement(); // 1
counter.reset(); // 0
counter.reset(); // 0
*/


//solution 1
var createCounter = function(init) {
    let num = init;

    function increment () {
        return ++num;
    }
    function decrement (){
        return --num;  
    }
    function reset (){
        return (num = init) ;
    }

    return { increment, decrement, reset };

};

//solution 2

var createCounter = function (init) {
    let count = init;

    return {
        increment() {
            return ++count;
        },
        decrement() {
            return --count;
        },
        reset() {
            count = init;
            return count;
        }
    }

};