const fs = require("fs");
const input = fs.readFileSync(0, "utf8").trim();
let n = Number(input);
let cnt = 0;
while (n <= 1000) {
    if (n % 2 == 0) {
        cnt++;
        n = n * 3 + 1;
    }
    else {
        cnt++;
        n = n * 2 + 2;
    }
}
console.log(cnt);