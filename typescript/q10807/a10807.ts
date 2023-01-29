const a10807 = () => {
  // helper
  const readStdinAndSplit = (divider: string) =>
    require("fs")
      .readFileSync("/dev/stdin")
      .toString()
      .trim()
      .split(divider) as string[];
  const toInt = (s: string) => parseInt(s);

  // solve
  const [_, itemsString, target] = readStdinAndSplit("\n");
  const items = itemsString.split(" ");

  const answer = items.reduce(
    (acc: number, item) => (item === target ? acc + 1 : acc),
    0
  );

  console.log(answer);
};

export { a10807 };
