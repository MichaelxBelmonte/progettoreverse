// Function: FUN_01f6ddb0
// Address: 01f6ddb0
// Size: 963 bytes
// Class: GNAlertPanel


/* WARNING: Removing unreachable block (ram,0x01f6e019) */
/* WARNING: Removing unreachable block (ram,0x01f6e025) */

int FUN_01f6ddb0(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined7 uVar6;
  byte bVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar8;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (*unaff_RSI == 0) {
    bVar8 = true;
    local_58 = 0;
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar4 + 0x18))();
    FUN_00e97870();
    local_78 = local_50;
    local_70 = 0;
    lVar2 = DAT_02800b40;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
        lVar2 = DAT_02800b40;
      }
    }
    else {
      local_48 = '\0';
    }
    local_70 = '\x01';
    DAT_02800b40 = lVar2;
    if (lVar2 != 0) {
      local_70 = '\x01';
      FUN_00d50b00();
    }
    local_38 = '\0';
    local_40 = lVar2;
    FUN_00ca0840(param_1,&local_40);
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    FUN_00e97f20();
    if (unaff_RDI[0x13] == 0) {
      uVar5 = FUN_00e97f30();
      bVar8 = true;
      if (local_40 == 0) {
        uVar5 = FUN_00e978a0();
        bVar8 = local_50 != 0;
        if ((local_48 != '\0') && (local_50 != 0)) {
          uVar5 = FUN_00d50b20();
        }
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        uVar5 = FUN_00d50b20();
      }
      lVar2 = DAT_02800b48;
      if (bVar8) {
        if (DAT_02800b48 != 0) {
          uVar5 = FUN_00d50b00();
        }
        if (unaff_RDI[0x13] != lVar2) {
          FUN_00d64850();
          lVar1 = unaff_RDI[0x13];
          if (lVar1 != lVar2) {
            local_58 = lVar1;
            if (lVar2 != 0) {
              FUN_00d50b00();
            }
            unaff_RDI[0x13] = lVar2;
            if (local_58 != 0) {
              FUN_00d50b20();
            }
          }
          uVar5 = FUN_00d64910();
        }
        if (lVar2 == 0) {
          uVar6 = (undefined7)((ulonglong)uVar5 >> 8);
        }
        else {
          uVar5 = FUN_00d50b20();
          uVar6 = (undefined7)((ulonglong)uVar5 >> 8);
        }
        local_58 = CONCAT71(uVar6,1);
        bVar8 = false;
        bVar7 = 1;
        goto LAB_01f6dfeb;
      }
    }
    else {
      FUN_00d50b00();
      uVar5 = FUN_00d50b20();
    }
    local_58 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
    bVar8 = false;
  }
  bVar7 = 0;
LAB_01f6dfeb:
  iVar3 = (**(code **)(*unaff_RDI + 0x5d8))();
  if ((bool)(bVar7 & iVar3 == 2)) {
    FUN_01ca6970();
    FUN_01ca5d90();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_01ca6970();
    FUN_00e978d0();
    local_68 = local_50;
    local_60 = 0;
    local_88 = DAT_026fceb8;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
        local_88 = DAT_026fceb8;
      }
    }
    else {
      local_48 = '\0';
    }
    local_60 = '\x01';
    DAT_026fceb8 = local_88;
    if (local_88 != 0) {
      local_60 = '\x01';
      FUN_00d50b00();
    }
    local_80 = '\x01';
    FUN_01ca93d0(param_1,&local_88);
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  if (!bVar8 && plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return iVar3;
}


