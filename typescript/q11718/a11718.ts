const a11718 = () => {
  const putStdin = () =>
    require("fs").readFileSync("/dev/stdin").toString();

  console.log(putStdin());
};

export default a11718;
