const a5597 = () => {
  // helper
  const readStdinAndSplit = (divider: string) =>
    require("fs")
      .readFileSync("/dev/stdin")
      .toString()
      .trim()
      .split(divider) as string[];
  const toInt = (s: string) => parseInt(s);

  // solve
  const students = readStdinAndSplit("\n").map(toInt);
  const check: boolean[] = Array(30).fill(false);
  students.forEach((item) => {
    check[item - 1] = true;
  });

  const answer = check
    .reduce(
      (acc: number[], student, index) => (student ? acc : [...acc, index + 1]),
      []
    )
    .sort((a, b) => a - b)
    .join("\n");

  console.log(answer);
};

export { a5597 };
