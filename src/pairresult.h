// Copyright (c) 2019 The Lapislazuli developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef Lapislazuli_PAIRRESULT_H
#define Lapislazuli_PAIRRESULT_H


class PairResult {

public:
    PairResult(bool res):result(res){}
    PairResult(bool res, std::string* statusStr):result(res), status(statusStr){}

    bool result;
    std::string* status = nullptr;
};


#endif //Lapislazuli_PAIRRESULT_H
