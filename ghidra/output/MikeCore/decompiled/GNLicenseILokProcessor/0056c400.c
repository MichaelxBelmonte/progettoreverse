// Function: FUN_0056c400
// Address: 0056c400
// Size: 512 bytes
// Class: GNLicenseILokProcessor
// String references:
//   "GNLicenseILokProcessor"
//   "GNLicenseContext"
//   "_ilokProcessor"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0056c400(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_02788a50 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      iVar1 = FUN_00e7ddf0();
      if (DAT_02788990 == '\0') {
        iVar2 = ___cxa_guard_acquire();
        if (iVar2 != 0) {
          _DAT_0270dbb8 = FUN_00d4fe50();
          _DAT_0270dba0 = "GNLicenseContext";
          _DAT_0270dba8 = 0x58;
          _DAT_0270dbb0 = FUN_0056b2b0;
          _DAT_0270dbc0 = 0;
          uRam000000000270dbc8 = 0;
          _DAT_0270dbd0 = 0;
          _DAT_0270dc48 = 0;
          uRam000000000270dc50 = 0;
          _DAT_0270dc58 = 0;
          DAT_0270dc5a = 2;
          _DAT_0270dbd8 = 0;
          uRam000000000270dbe0 = 0;
          _DAT_0270dbe8 = 0;
          uRam000000000270dbf0 = 0;
          _DAT_0270dbf8 = 0;
          uRam000000000270dc00 = 0;
          _DAT_0270dc08 = 0;
          uRam000000000270dc10 = 0;
          _DAT_0270dc18 = 0;
          uRam000000000270dc20 = 0;
          _DAT_0270dc28 = 0;
          uRam000000000270dc30 = 0;
          _DAT_0270dc38 = 0;
          uRam000000000270dc40 = 0;
          DAT_0270dc63 = 0;
          _DAT_0270dc5b = 0;
          ___cxa_guard_release();
        }
      }
      DAT_0270dd38 = (iVar1 != 0) << 6 | 0x80;
      _DAT_0270dd20 = "_ilokProcessor";
      _DAT_0270dd28 = &DAT_0270dba0;
      _DAT_0270dd30 = 0;
      _DAT_0270dd40 = 0;
      uRam000000000270dd48 = 0;
      _DAT_0270dd50 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0270dd60 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_0270dd70 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026cb9e0 = "GNLicenseILokProcessor";
          DAT_026cb9f0 = 0;
          _DAT_026cb9e8 = 0;
          ___cxa_guard_release();
        }
      }
      FUN_00e87b80();
      ___cxa_guard_release();
    }
  }
  return &DAT_0270dd20;
}


