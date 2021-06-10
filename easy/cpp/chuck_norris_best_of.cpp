/*
Challenge: Chuck Norris
Link: https://www.codingame.com/training/easy/chuck-norris
These are some of my favourite solutions to the challenge, that were given by users.
They can be found at the 'Solutions' tab of the challenge.
*/

/* 
Solution 1
User: vamPierchen
Link: https://www.codingame.com/profile/232a4c4158d5425053c07731fbff8e1a1373911

int main()
{
    string MESSAGE;
    getline(cin, MESSAGE);

    bool pbit = MESSAGE[0] & 0x40;
    cout << (pbit ? "0 " : "00 ");
    for (auto c: MESSAGE)
    {        
        for (unsigned char bm = 0x40; bm != 0; bm /= 2)
        {
            bool bit = (c & bm);
            cout << ((bit == pbit) ? "0"
                                   : (pbit = bit) ? " 0 0"
                                         : " 00 0");
        }
    }
} */


/* 
Solution 2
User: magaiti
Profile: https://www.codingame.com/profile/eec8bff1779e6e64b0ce890f0d5f53e64646331

map<string, string> Rep {
    { "0", "00 0"},
    { "1", "0 0"},
    {"10", " 00 0"},
    {"01", " 0 0"},
    {"00", "0"},
    {"11", "0"},
};

int main()
{
    string last;
    noskipws(cin);
    for (istream_iterator<char> it(cin); *it != '\n'; ++it)
        for (char c : bitset<7>(*it).to_string()) {
            cout << Rep[last + c];
            last = {c};
        }
    cout << endl;
}*/

/*
Solution 3
User: Imtraining
Profile: https://www.codingame.com/profile/e6ea5f9996965a129c5470b8d6dc93ed7553814

int main()
{
    string message, binaryMessage;
    getline(cin, message);
    
    for (char c : message)
        binaryMessage.append(bitset<7>(c).to_string());
 
    auto previous = binaryMessage.begin(), current = next(previous);
    (*previous == '0') ? cout << "00 0" : cout << "0 0";
    while (current != binaryMessage.end())
    {
        if (*current != *previous)
            (*current == '0') ? cout << " 00 0" : cout << " 0 0";
        else
            cout << "0";
        previous = current;
        current++;
    } 
}*/

/*
Solution 4
User: DADB
Profile: https://www.codingame.com/profile/c5033110dfbf71a61e1a2749ac7b80513740224

int main()
{
    string MESSAGE;
    getline(cin, MESSAGE);

    string res = "";
    int pre = -1;

    for (int i = 0; i < MESSAGE.length(); i++) 
    {
        for (int j = 6; j >= 0; j--) 
        {
            int bit = MESSAGE[i] >> j & 1;
            if (bit != pre) 
            {
                if (-1 != pre) 
                {
                    res+= " ";
                }
                res+= 1 == bit ? "0 " : "00 ";
                pre = bit;
            }
            res+= "0";
        }
    }

    cout << res << endl;
}
*/