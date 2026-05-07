// Function: FUN_00971330
// Address: 00971330
// Size: 596 bytes
// Class: Unknown


int FUN_00971330(longlong param_1,longlong param_2,longlong param_3,undefined1 *param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int unaff_ESI;
  longlong unaff_RDI;
  undefined4 uVar4;
  int local_128 [8];
  undefined1 local_108 [168];
  longlong local_60;
  longlong local_58;
  undefined1 *local_50;
  undefined4 local_44;
  longlong local_40;
  char local_31;
  
  if (0x1f < unaff_ESI - 1U) {
    return 99;
  }
  if (unaff_RDI == 0) {
    return 99;
  }
  if (param_2 == 0) {
    return 99;
  }
  if (param_1 == 0) {
    return 99;
  }
  if (param_3 == 0) {
    return 99;
  }
  if (*(int *)(unaff_RDI + 0x2e8) != 0) {
    return *(int *)(unaff_RDI + 0x2e8);
  }
  local_60 = param_3;
  local_50 = param_4;
  iVar2 = FUN_0096dd64(param_1,&local_31);
  if (iVar2 != 0) {
    return iVar2;
  }
  if (-1 < local_31) {
    return 0x70;
  }
  uVar3 = FUN_0096e05d();
  if (uVar3 < 2) {
    return 0x70;
  }
  FUN_00971584();
  local_58 = param_2 + 0x38;
  local_40 = unaff_RDI + 0x180;
  cVar1 = FUN_0096a284(0,local_58,local_128);
  uVar4 = (undefined4)CONCAT71((int7)((ulonglong)local_128 >> 8),1);
  if (cVar1 == '\0') {
    iVar2 = FUN_009715d4(param_2,local_108);
    if (iVar2 != 0) {
      return iVar2;
    }
    uVar4 = 0;
    cVar1 = FUN_0096a284(0,local_58,local_128);
    if (cVar1 != '\0') goto LAB_0097140a;
LAB_00971579:
    iVar2 = 0x6c;
  }
  else {
LAB_0097140a:
    local_44 = uVar4;
    if (local_128[0] != 2) {
      FUN_0096b317(local_128,local_128);
      if (*(int *)(unaff_RDI + 0x2e8) != 0) {
        return *(int *)(unaff_RDI + 0x2e8);
      }
    }
    if (*(uint *)(unaff_RDI + 4) < 2) {
LAB_00971493:
      if (local_128[0] == 2) goto LAB_0097149c;
    }
    else {
      iVar2 = FUN_0096e029();
      if (iVar2 != 0) {
        return iVar2;
      }
      if (local_128[0] != 2) {
        FUN_0096b317(local_128,local_128);
        if (*(int *)(unaff_RDI + 0x2e8) != 0) {
          return *(int *)(unaff_RDI + 0x2e8);
        }
        goto LAB_00971493;
      }
LAB_0097149c:
      iVar2 = FUN_009715d4(param_2,local_108);
      if (iVar2 != 0) {
        return iVar2;
      }
      local_44 = 0;
      cVar1 = FUN_0096a284(0,local_58,local_128);
      if (cVar1 == '\0') goto LAB_00971579;
    }
    if (local_50 != (undefined1 *)0x0) {
      *local_50 = (char)local_44;
    }
    FUN_0096a4c9(param_1,param_1);
    iVar2 = *(int *)(unaff_RDI + 0x2e8);
    if (iVar2 == 0) {
      iVar2 = FUN_0096db7a(0,local_60);
    }
  }
  return iVar2;
}


