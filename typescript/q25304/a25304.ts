const a25304 = () => {
  // helper
  const readStdinAndSplit = (divider: string) =>
    require("fs")
      .readFileSync("/dev/stdin")
      .toString()
      .trim()
      .split(divider) as string[];
  const toInt = (s: string) => parseInt(s);

  // solve
  const [totalString, _, ...itemStrings] = readStdinAndSplit("\n");
  const total = toInt(totalString);
  const items = itemStrings
    .map((itemString) => itemString.split(" "))
    .map((itemWords) => itemWords.map(toInt));

  console.log(
    total ===
      items.reduce((acc: number, [price, count]) => acc + price * count, 0)
      ? "Yes"
      : "No"
  );
};

export { a25304 };
