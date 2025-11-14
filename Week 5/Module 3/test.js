// Node.js এ ইনপুট নেওয়ার জন্য এই কোডটি ব্যবহার করা হয়
import readline from "readline";

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

let inputLines = [];
rl.on('line', (line) => {
  // সমস্ত ইনপুট লাইন একটি অ্যারেতে জমা করি
  inputLines.push(line);
});

// ইনপুট নেওয়া শেষ হলে এই ফাংশনটি কল হবে
rl.on('close', () => {
  processInput(inputLines);
});

/**
 * মূল সমাধান ফাংশন
 * @param {number} A
 * @param {number} B
 * @param {number} C
 * @param {number} K
 * @returns {string} "Peaceful" or "Fight"
 */
function solve(A, B, C, K) {
  const total = A + B + C;

  // শর্ত ১: মোট জুস ৩ দ্বারা বিভাজ্য?
  if (total % 3 !== 0) {
    return "Fight";
  }

  const target = total / 3;

  // শর্ত ২: মডুলো শর্ত
  // জাভাস্ক্রিপ্টে বড় সংখ্যার জন্য BigInt ব্যবহার করা ভালো,
  // তবে এখানে সর্বোচ্চ যোগফল 6,000,000, যা Number টাইপের জন্য নিরাপদ।
  // K % K = 0 হয়, তাই টার্গেটের মডুলো আলাদাভাবে বের করতে হবে।
  const targetModK = target % K;
  
  if (A % K !== targetModK || B % K !== targetModK || C % K !== targetModK) {
    return "Fight";
  }

  // শর্ত ৩: অচলাবস্থা (Stuck State) শর্ত
  let lessThanKCount = 0;
  if (A < K) lessThanKCount++;
  if (B < K) lessThanKCount++;
  if (C < K) lessThanKCount++;

  if (lessThanKCount >= 2) {
    // আমরা আটকে গেছি। আমরা কি লক্ষ্যে আছি?
    if (A === target && B === target && C === target) {
      return "Peaceful";
    } else {
      // লক্ষ্যে পৌঁছানোর আগেই আটকে গেছি
      return "Fight";
    }
  } else {
    // আমরা শুরুতে আটকা পড়িনি, এবং শর্ত ১ ও ২ পাস করেছি।
    // তাই লক্ষ্যে পৌঁছানো সম্ভব।
    return "Peaceful";
  }
}

/**
 * ইনপুট লাইনগুলো প্রসেস করে এবং আউটপুট প্রিন্ট করে
 * @param {string[]} lines 
 */
function processInput(lines) {
  // প্রথম লাইন হলো T (টেস্ট কেসের সংখ্যা)
  const T = parseInt(lines[0], 10);
  let lineIndex = 1; // 1-based index, কারণ 0-তে T আছে

  for (let i = 1; i <= T; i++) {
    // বর্তমান লাইনের ইনপুট (A, B, C, K) পড়ুন
    const [A, B, C, K] = lines[lineIndex].split(' ').map(Number);
    
    // সমাধান পান
    const result = solve(A, B, C, K);
    
    // কেস অনুযায়ী আউটপুট প্রিন্ট করুন
    console.log(`Case ${i}: ${result}`);
    
    // পরবর্তী লাইনে যান
    lineIndex++;
  }
}