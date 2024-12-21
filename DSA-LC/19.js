const reverse = (n) =>{
    let reversed=0
    y =n.toString()
    console.log(`b4 reverse ${n}`)
    for (let i = y.length ; i > 0; i--){
        let x = n%10
        reversed = reversed * 10 + x
        n = Math.floor(n/10)
    }
    console.log(`after reverse ${reversed}`)
}
reverse (1124456783)