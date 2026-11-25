const fs = require("fs");
const input = fs.readFileSync(0, "utf8").trim();
const score = Number(input);
let scoreGrade;
if (score === 100) {
    scoreGrade = 0;
} else if (score >= 90) {
    scoreGrade = 1;
} else if (score >= 80) {
    scoreGrade = 2;
} else if (score >= 70) {
    scoreGrade = 3;
} else if (score >= 60) {
    scoreGrade = 4;
} else if (score >= 50) {
    scoreGrade = 5;
} else if (score >= 40) {
    scoreGrade = 6;
} else if (score >= 30) {
    scoreGrade = 7;
} else if (score >= 20) {
    scoreGrade = 8;
} else {
    scoreGrade = 1;
}
console.log(scoreGrade === 0 ? "pass" : "failure");