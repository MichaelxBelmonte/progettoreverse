// Function: FUN_00d98db0
// Address: 00d98db0
// Size: 1032 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x00d98e2b) */
/* WARNING: Removing unreachable block (ram,0x00d98e34) */

longlong * FUN_00d98db0(undefined8 param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong local_58;
  char local_50;
  longlong local_40;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    iVar4 = *(int *)(lVar1 + 0x20);
    if (iVar4 == -1) {
      if (*(longlong *)(lVar1 + 0x10) == 0) goto LAB_00d98e3d;
      iVar4 = FUN_00e7dde0();
    }
    if ((iVar4 != 0) &&
       ((param_3 != '\0' || (cVar3 = (**(code **)(*(longlong *)*param_2 + 0x50))(), cVar3 == '\0')))
       ) {
      puVar5 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar5 = &DAT_025795a8;
      FUN_00d500e0();
      if ((*(int *)(unaff_RSI + 0x20) == -1) && (*(longlong *)(unaff_RSI + 0x10) != 0)) {
        FUN_00e7dde0();
      }
      uVar6 = FUN_00e7b4e0();
      FUN_00d50b00();
      local_40 = unaff_RSI;
      if (param_3 != '\0') {
        FUN_00d99300();
        if (local_58 == unaff_RSI) {
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40 = local_58;
          if (local_50 == '\0') {
            if (local_58 != 0) {
              FUN_00d50b00();
            }
            FUN_00d50b20();
          }
          else {
            FUN_00d50b20();
          }
        }
        FUN_00d99300();
        lVar1 = *param_2;
        if (lVar1 == local_58) {
          if (((char)param_2[1] != '\0') || (local_58 == 0)) {
            if ((local_50 != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_00d98ff2;
          }
          if (local_50 == '\0') {
            FUN_00d50b00();
          }
        }
        else {
          lVar2 = param_2[1];
          if (local_50 == '\0') {
            if (local_58 != 0) {
              FUN_00d50b00();
            }
            *param_2 = local_58;
            if (((char)lVar2 != '\0') && (lVar1 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            *param_2 = local_58;
            if (((char)lVar2 != '\0') && (lVar1 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        *(undefined1 *)(param_2 + 1) = 1;
      }
LAB_00d98ff2:
      FUN_00e7b4e0();
      uVar6 = uVar6 >> 0x20;
      while( true ) {
        uVar7 = FUN_00d906a0();
        if ((int)uVar7 == -1) break;
        FUN_00e7b4e0();
        FUN_00d8e3d0();
        if ((local_50 == '\0') && (local_58 != 0)) {
          FUN_00d50b00();
        }
        FUN_00d8dbf0();
        if (local_58 != 0) {
          FUN_00d50b20();
        }
        FUN_00d8dbf0();
        iVar4 = *(int *)(unaff_RSI + 0x20);
        if (iVar4 == -1) {
          if (*(longlong *)(unaff_RSI + 0x10) == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = FUN_00e7dde0();
          }
        }
        uVar6 = (ulonglong)(uint)(iVar4 - ((int)((ulonglong)uVar7 >> 0x20) + (int)uVar7));
      }
      if (0 < (int)uVar6) {
        FUN_00d8e3d0();
        if ((local_50 == '\0') && (local_58 != 0)) {
          FUN_00d50b00();
        }
        FUN_00d8dbf0();
        if (local_58 != 0) {
          FUN_00d50b20();
        }
      }
      *(byte *)((longlong)puVar5 + 0x24) = *(byte *)((longlong)puVar5 + 0x24) & 0xfe;
      *unaff_RDI = (longlong)puVar5;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if (local_40 == 0) {
        return unaff_RDI;
      }
      FUN_00d50b20();
      return unaff_RDI;
    }
  }
LAB_00d98e3d:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if (unaff_RSI != 0) {
    FUN_00d50b00();
  }
  *unaff_RDI = unaff_RSI;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


