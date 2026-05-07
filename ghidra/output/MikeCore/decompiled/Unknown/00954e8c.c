// Function: FUN_00954e8c
// Address: 00954e8c
// Size: 693 bytes
// Class: Unknown


ulonglong FUN_00954e8c(void)

{
  longlong lVar1;
  ulonglong unaff_RSI;
  ulonglong uVar2;
  longlong *unaff_RDI;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  undefined8 local_38;
  
  uVar2 = unaff_RDI[1];
  if (uVar2 < (ulonglong)unaff_RDI[2]) {
    if (uVar2 == unaff_RSI) {
      FUN_00900250();
      unaff_RDI[1] = unaff_RSI + 0x760;
    }
    else {
      FUN_0095444e(unaff_RSI + 0x760,uVar2);
      FUN_00900856();
    }
  }
  else {
    if (0x22b63cbeea4e1a < ((longlong)(uVar2 - *unaff_RDI) >> 5) * -0x34115b1e5f75270d + 1U) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    FUN_008cde30(unaff_RDI + 2,((longlong)(unaff_RSI - *unaff_RDI) >> 5) * -0x34115b1e5f75270d);
    if (local_48 == local_40) {
      if (local_58 < local_50) {
        for (; local_50 != local_48; local_50 = local_50 + 0x760) {
          FUN_00900856();
        }
      }
      else {
        uVar2 = 0;
        if (local_40 - local_58 != 0) {
          uVar2 = ((longlong)(local_40 - local_58) >> 5) * -0x6822b63cbeea4e1a;
        }
        FUN_008cde30(local_38,uVar2 >> 2);
        if (local_48 - local_50 != 0) {
          lVar1 = ((longlong)(local_48 - local_50) >> 5) * 0x20;
          do {
            FUN_00900250();
            lVar1 = lVar1 + -0x760;
          } while (lVar1 != 0);
        }
        FUN_008cdea0();
      }
    }
    FUN_00900250();
    unaff_RSI = FUN_00954514();
    FUN_008cdea0();
  }
  return unaff_RSI;
}


