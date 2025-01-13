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


  let count  = 0;
  for(let i = 0; i <num; i++) {
        if (num <2){
          console.log( `nether prime nor composite`);
        }
        else {
          if (num % i === 0){
            count++;
          }
        }
      }
        if (count >2){
          console.log( `it is compo `)
        }
        else{
          console.log( `it is prime `)
        }   
      }
    }

prime (5)