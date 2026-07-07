const arr = [4, 0, 5, 7, 0, 5, 6, 0, 7, 8];

let j = 0;

for (let i = 0; i < arr.length; i++) {
  if (arr[i] != 0) {
    // swap(arr[i], arr[j]);
    let first = arr[i];
    arr[i] = arr[j];
    arr[j] = first;
    j++;
  }
}

for (let i = 0; i < arr.length; i++) {
  console.log(arr[i]);
}
