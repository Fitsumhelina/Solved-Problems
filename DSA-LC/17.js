// prime and composite numbers

const prime = (num) => {

    for(let i = 0; i <num; i++) {
      if (i <2){
        console.log( `nether prime nor composite`);
      }
      else {
        let x = true;
        for (let j=2; j<Math.sqrt(i)+1; j++) {
          if (i%j === 0){
            x = false;
          }
          }
          if (x === true) {
            console.log(`${i} is prime`);
        }
        else {
          console.log(`${i} is composite`);
        }
  
    }
  }}
  
  prime (10)