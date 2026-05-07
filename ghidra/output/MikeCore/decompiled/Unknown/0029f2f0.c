// Function: FUN_0029f2f0
// Address: 0029f2f0
// Size: 662 bytes
// Class: Unknown


undefined8 FUN_0029f2f0(void)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *unaff_RSI;
  undefined8 uVar4;
  bool bVar5;
  
  if ((DAT_02805dc0 == (undefined8 *)0x0) || (DAT_02805dc9 == '\0')) {
    FUN_00e8cb50();
    if (DAT_02805dc0 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &DAT_025683c0;
      (*DAT_025683d8)();
      FUN_00c92170();
      FUN_00c92160();
      bVar5 = DAT_02805dc0 == (undefined8 *)0x0;
      DAT_02805dc0 = puVar2;
      if (((bVar5) || (FUN_00d50b20(), DAT_02805dc0 != (undefined8 *)0x0)) && (DAT_02805dc8 == '\0')
         ) {
        DAT_02805dc8 = '\x01';
        FUN_00e8cb90();
      }
      puVar2 = DAT_02805dc0;
      iVar1 = *(int *)(DAT_02805dc0 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar2[2] + (longlong)iVar1) = 0xb6ce81a1;
      puVar2 = DAT_02805dc0;
      iVar1 = *(int *)(DAT_02805dc0 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar2[2] + (longlong)iVar1) = 0xe5b68b25;
      puVar2 = DAT_02805dc0;
      iVar1 = *(int *)(DAT_02805dc0 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar2[2] + (longlong)iVar1) = 0xb88e7c22;
      puVar2 = DAT_02805dc0;
      iVar1 = *(int *)(DAT_02805dc0 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar2[2] + (longlong)iVar1) = 0x2659e7d8;
      puVar2 = DAT_02805dc0;
      iVar1 = *(int *)(DAT_02805dc0 + 3);
      FUN_00c8e340();
      *(undefined4 *)(puVar2[2] + (longlong)iVar1) = 0x7b6a0725;
      DAT_02805dc9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_02805dc9 = '\x01';
      FUN_00e8cb70();
    }
  }
  if (DAT_02805dc0 == (undefined8 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    iVar1 = *(int *)(DAT_02805dc0 + 3);
    iVar3 = iVar1 + 3;
    if (-1 < iVar1) {
      iVar3 = iVar1;
    }
    if (0 < iVar3 >> 2) {
      iVar1 = *(int *)DAT_02805dc0[2];
      if (unaff_RSI != (undefined8 *)0x0) {
        *unaff_RSI = 1;
      }
      if (iVar1 < -0x1a4974db) {
        if (iVar1 == -0x49317e5f) {
          return 0x18;
        }
        if (iVar1 == -0x477183de) {
          return 0x19;
        }
      }
      else {
        if (iVar1 == -0x1a4974db) {
          return 0x16;
        }
        if (iVar1 == 0x2659e7d8) {
          return 0x1b;
        }
      }
      uVar4 = 0x1d;
      if (iVar1 != 0x7b6a0725) {
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}


