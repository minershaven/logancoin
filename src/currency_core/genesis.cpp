// Copyright (c) 2014-2025 Zano Project
// Copyright (c) 2014-2018 The Louisdor Project
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#include "genesis.h"

namespace currency
{
#ifndef TESTNET
  // Logan Coin genesis: no premine. Proof phrase: "Logan Coin genesis, 17 November 2026: no premine, every coin is mined"
  const genesis_tx_raw_data ggenesis_tx_raw = {{
      0xbe16040000000101,0x13ac9c16f7088155,0x8562ba06bb430753,0xfd5b6458ed2c4e90,0x134fdb84c4a07b48,0x43206e61676f4c45,0x656e6567206e696f,0x203731202c736973,0x7265626d65766f4e,0x6e203a3632303220,0x6e696d657270206f,0x7972657665202c65,0x7369206e696f6320,0x001564656e696d20},
      {0x0e,0x0a,0x00,0x00}};
#else
  // Logan Coin genesis: no premine. Proof phrase: "Logan Coin genesis, 17 November 2026: no premine, every coin is mined"
  const genesis_tx_raw_data ggenesis_tx_raw = {{
      0xbe16040000000101,0x13ac9c16f7088155,0x8562ba06bb430753,0xfd5b6458ed2c4e90,0x134fdb84c4a07b48,0x43206e61676f4c45,0x656e6567206e696f,0x203731202c736973,0x7265626d65766f4e,0x6e203a3632303220,0x6e696d657270206f,0x7972657665202c65,0x7369206e696f6320,0x001564656e696d20},
      {0x0e,0x0a,0x00,0x00}};
#endif
}
