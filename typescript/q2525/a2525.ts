const MIN_60 = 60;
const HOURS_24 = 24;

const a2525 = () => {
  // Helpers
  const inputTwoLines = () =>
    require("fs").readFileSync("/dev/stdin").toString().trim().split("\n") as [
      string,
      string
    ];
  const splitStringBySpace = (s: string) => s.split(" ") as [string, string];
  const floor = (n: number) => Math.floor(n);
  const toString = (s: number) => s.toString();
  const toInt = (s: string) => parseInt(s);
  const getConvertedHourOnly = (mins: number) =>
    floor(floor(mins / MIN_60) / HOURS_24);

  // input
  const [startTimeStr, cookMinsStr] = inputTwoLines();
  const [startHourStr, startMinsStr] = splitStringBySpace(startTimeStr);
  const [startHours, startMins, cookMins] = [
    startHourStr,
    startMinsStr,
    cookMinsStr,
  ].map(toInt);

  // calc
  const increasedHours = floor((cookMins + startMins) / MIN_60);

  const printableMins = (startMins + cookMins) % MIN_60;
  const printableHours =
    (startHours + increasedHours + getConvertedHourOnly(startMins + cookMins)) %
    HOURS_24;

  // result
  console.log([printableHours, printableMins].map(toString).join(" "));
};

export { a2525 };
