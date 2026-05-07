// Function: FUN_00bcad70
// Address: 00bcad70
// Size: 520 bytes
// Class: GNSoundFileChunk


undefined1 FUN_00bcad70(uint param_1,int *param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong *unaff_RSI;
  bool bVar7;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  uint local_3c;
  ulonglong local_38;
  
  FUN_00bc78b0(&local_58,param_4,0);
  cVar1 = FUN_00e7b6c0();
  if (cVar1 == '\0') {
    if ((int)*unaff_RSI == -1) {
      iVar4 = FUN_00bcb0c0();
      *param_2 = iVar4;
    }
    else {
      iVar4 = (int)local_58;
      if (iVar4 == -1) {
        FUN_00bcb330();
        *param_2 = -1;
        uVar5 = FUN_00e7b4e0();
        *unaff_RSI = uVar5;
        return true;
      }
      local_48 = FUN_00e7b5b0();
      if ((int)local_48 == -1) {
        iVar4 = FUN_00bcb0c0();
        *param_2 = iVar4;
        FUN_00bcb330();
      }
      else {
        local_50 = local_58 >> 0x20;
        local_38 = local_48 >> 0x20;
        if (iVar4 < (int)local_48) {
          FUN_00e7b4e0();
          iVar3 = FUN_00bcb0c0();
          if (iVar3 != -1) {
            *param_2 = iVar3;
          }
        }
        if ((int)*unaff_RSI < (int)local_48) {
          FUN_00e7b4e0();
          FUN_00bcb330();
          if ((*param_2 != -1) && (*param_2 < (int)local_48)) {
            *param_2 = (int)local_48;
          }
        }
        uVar6 = (int)local_38 + (int)local_48;
        local_38 = (ulonglong)uVar6;
        iVar3 = *(int *)((longlong)unaff_RSI + 4);
        uVar5 = *unaff_RSI;
        local_3c = param_1 & 0xff;
        if ((int)uVar6 < (int)local_50 + iVar4) {
          FUN_00e7b4e0();
          iVar4 = FUN_00bcb0c0();
          uVar6 = (uint)local_38;
          if ((*param_2 == -1) && (iVar4 != -1)) {
            *param_2 = iVar4;
          }
        }
        if ((int)uVar6 < iVar3 + (int)uVar5) {
          FUN_00e7b4e0();
          FUN_00bcb330();
          if ((*param_2 != -1) && ((int)local_38 <= *param_2)) {
            *param_2 = -1;
          }
        }
      }
    }
    *unaff_RSI = local_58;
    bVar7 = *param_2 == -1;
  }
  else {
    if (*param_2 != -1) {
      uVar2 = FUN_00bcaf80();
      return uVar2;
    }
    bVar7 = true;
  }
  return bVar7;
}


