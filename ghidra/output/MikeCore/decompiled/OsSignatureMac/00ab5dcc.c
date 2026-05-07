// Function: FUN_00ab5dcc
// Address: 00ab5dcc
// Size: 693 bytes
// Class: OsSignatureMac


ulonglong FUN_00ab5dcc(void)

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
      FUN_008de980();
      unaff_RDI[1] = unaff_RSI + 0x260;
    }
    else {
      FUN_00ab6966(unaff_RSI + 0x260,uVar2);
      FUN_008dea76();
    }
  }
  else {
    if (0x6bca1af286bca1 < ((longlong)(uVar2 - *unaff_RDI) >> 5) * -0x79435e50d79435e5 + 1U) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    FUN_008e4528(unaff_RDI + 2,((longlong)(unaff_RSI - *unaff_RDI) >> 5) * -0x79435e50d79435e5);
    if (local_48 == local_40) {
      if (local_58 < local_50) {
        for (; local_50 != local_48; local_50 = local_50 + 0x260) {
          FUN_008dea76();
        }
      }
      else {
        uVar2 = 0;
        if (local_40 - local_58 != 0) {
          uVar2 = ((longlong)(local_40 - local_58) >> 5) * 0xd79435e50d79436;
        }
        FUN_008e4528(local_38,uVar2 >> 2);
        if (local_48 - local_50 != 0) {
          lVar1 = ((longlong)(local_48 - local_50) >> 5) * 0x20;
          do {
            FUN_008de980();
            lVar1 = lVar1 + -0x260;
          } while (lVar1 != 0);
        }
        FUN_008e4598();
      }
    }
    FUN_008de980();
    unaff_RSI = FUN_00ab6a2c();
    FUN_008e4598();
  }
  return unaff_RSI;
}


