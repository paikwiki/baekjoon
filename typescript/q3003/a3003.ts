const a3003 = () => {
  // helper
  const inputSpaceIncludedString = () =>
    require("fs")
      .readFileSync("/dev/stdin")
      .toString()
      .trim()
      .split(" ") as string[];
  const toInt = (s: string) => parseInt(s);

  // solve
  const corrects = [
    1, // kingCount
    1, // queenCount
    2, // lookCount
    2, // bishopCount
    2, // knightCount
    8, // pawnCount
  ];
  const counts = inputSpaceIncludedString();

  const answer = counts
    .map(toInt)
    .map((count, index) => {
      const correct = corrects[index];
      return correct - count;
    })
    .join(" ");
  console.log(answer);
};
export { a3003 };
