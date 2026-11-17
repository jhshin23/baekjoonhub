const fs = require("fs");
const input = fs.readFileSync(0, "utf8").trim().split(" ");
const [a, b] = input.map(Number);
let prod = 1;
for (let i = 1; i <= b; i++) {
    if (i % a == 0) {
        prod = prod * i;
    }
}
console.log(prod)