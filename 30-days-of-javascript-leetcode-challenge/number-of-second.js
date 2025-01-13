// Find out the numbers of seconds elapsed from January 1,6:00pm, 1970 to now.


// Solution 1
const now = new Date();
const past = new Date(1970, 0, 1, 18, 0); // January 1, 6:00 PM, 1970
const elapsedMilliseconds = now - past;

console.log(`Elapsed time: ${elapsedMilliseconds / 1000} seconds`);