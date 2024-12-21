const spynumber = (n) => {
    const y = n
    let sum=0  
    let product=1
    while(n>0) {
        let x = n%10
        sum+=x
        product*=x
        n=Math.floor(n/10)
    }
    console.log (`sum = ${sum}`)
    console.log (`product = ${product}`)
    if (sum==product){
        console.log(`${y} is spy num`)
    }
    else {
        console.log(`${y} is not spy num`)
    }
}
spynumber(1124)