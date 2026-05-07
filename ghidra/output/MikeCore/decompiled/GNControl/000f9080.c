// Function: FUN_000f9080
// Address: 000f9080
// Size: 599 bytes
// Class: GNControl
// String references:
//   "GNControl"
//   "GNControlType"
//   "_controlType"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_000f9080(void)

{
  byte bVar1;
  int iVar2;
  undefined4 extraout_XMM0_Da;
  
  if (DAT_026dfff8 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      _DAT_026dff30 = 0x100000000;
      bVar1 = FUN_000f9300(extraout_XMM0_Da,2);
      DAT_026dfff0 = DAT_026dff34 == 1 & bVar1 & DAT_026dff38 == 2;
      ___cxa_guard_release();
    }
  }
  if (DAT_026e0030 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      _DAT_026e0000 = "GNControlType";
      _DAT_026e0008 = 0x30;
      DAT_026e000c = DAT_026dfff0;
      _DAT_026e0010 = &DAT_026dff30;
      _DAT_026e0018 = &DAT_026dfda0;
      _DAT_026e0020 = 0;
      uRam00000000026e0028 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_026dfd98 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      if (DAT_026e43b0 == '\0') {
        iVar2 = ___cxa_guard_acquire();
        if (iVar2 != 0) {
          _DAT_026df898 = FUN_0006d940();
          _DAT_026df880 = "GNControl";
          _DAT_026df888 = 0x1c8;
          _DAT_026df890 = FUN_000858d0;
          _DAT_026df8a0 = 0;
          uRam00000000026df8a8 = 0;
          _DAT_026df8b0 = 0;
          uRam00000000026df8b8 = 0;
          _DAT_026df8c0 = 0;
          uRam00000000026df8c8 = 0;
          _DAT_026df8d0 = 0;
          uRam00000000026df8d8 = 0;
          _DAT_026df8e0 = 0;
          uRam00000000026df8e8 = 0;
          _DAT_026df8f0 = 0;
          uRam00000000026df8f8 = 0;
          _DAT_026df900 = 0;
          uRam00000000026df908 = 0;
          _DAT_026df910 = 0;
          uRam00000000026df918 = 0;
          _DAT_026df920 = 0;
          uRam00000000026df928 = 0;
          _DAT_026df930 = 0;
          uRam00000000026df938 = 0;
          _DAT_026df940 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_026dfd58 = "_controlType";
      _DAT_026dfd60 = &DAT_026df880;
      _DAT_026dfd68 = 0;
      _DAT_026dfd70 = 0x6500;
      _DAT_026dfd78 = "GNControlType";
      _DAT_026dfd80 = &DAT_026e0000;
      _DAT_026dfd88 = 0;
      uRam00000000026dfd90 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_026dfd58;
}


