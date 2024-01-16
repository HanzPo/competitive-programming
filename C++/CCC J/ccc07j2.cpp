#include <bits/stdc++.h>

using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  string input;

  map<string, string> translations {{"CU", "see you"}, {":-)", "I'm happy"}, {":-(", "I'm unhappy"}, {";-)", "wink"}, {":-p", "stick out my tongue"}, {"(~.~)", "sleepy"}, {"TA", "totally awesome"}, {"CCC", "Canadian Computing Competition"}, {"CUZ", "because"}, {"TY", "thank-you"}, {"YW", "you're welcome"}, {"TTYL", "talk to you later"}}; 

  while(input != "TTYL") {
    cin >> input;

    if (translations.find(input) != translations.end()) {
      cout << translations[input] << endl;
    }
    else {
      cout << input << endl;
    }
  }

  return 0;
}