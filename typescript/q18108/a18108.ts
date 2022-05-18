const a18108 = () => {
  const DIFF_NUMBER = 2541 - 1998;

  const buddhistYearString = require("fs")
    .readFileSync("/dev/stdin")
    .toString()
    .trim();
  console.log(Number(buddhistYearString) - DIFF_NUMBER);
};

export { a18108 };
