// Function: FUN_003a1a90
// Address: 003a1a90
// Size: 945 bytes
// Class: MDMetaWindowController


/* WARNING: Removing unreachable block (ram,0x003a1c29) */
/* WARNING: Removing unreachable block (ram,0x003a1c35) */
/* WARNING: Removing unreachable block (ram,0x003a1b95) */
/* WARNING: Removing unreachable block (ram,0x003a1ba1) */
/* WARNING: Removing unreachable block (ram,0x003a1c7a) */
/* WARNING: Removing unreachable block (ram,0x003a1c86) */

ulonglong FUN_003a1a90(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong *unaff_RDI;
  longlong lVar5;
  undefined4 uVar6;
  undefined8 unaff_R13;
  ulonglong uVar7;
  longlong lVar9;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  undefined4 local_54;
  longlong local_50;
  undefined4 local_44;
  longlong local_40;
  char local_38;
  undefined7 uVar8;
  
  (**(code **)(*unaff_RDI + 0xe20))();
  lVar5 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_003a1aeb;
    }
  }
  else if (local_40 != 0) {
LAB_003a1aeb:
    uVar8 = (undefined7)((ulonglong)unaff_R13 >> 8);
    uVar7 = CONCAT71(uVar8,0 < *(int *)(lVar5 + 0xc));
    if ((*(int *)(lVar5 + 0xc) < 1) || ((char)(param_2 & 0xffffffff) == '\0')) goto LAB_003a1e1f;
    cVar4 = FUN_019a9840();
    if (cVar4 == '\0') {
      FUN_00d50b00();
      uVar6 = (undefined4)CONCAT71(uVar8,1);
      local_50 = 0;
      local_54 = 0;
      lVar9 = lVar5;
LAB_003a1c3a:
      local_44 = uVar6;
      FUN_0195a3e0();
      lVar2 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      cVar4 = FUN_019a9840();
      if (cVar4 == '\0') {
        if (lVar5 != lVar2) {
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          FUN_00d50b20();
          lVar5 = lVar2;
        }
      }
      else {
        local_88 = lVar2;
        local_80 = '\0';
        local_78 = local_50;
        local_70 = '\0';
        (**(code **)(*unaff_RDI + 0xe50))(&local_78,&local_88);
        lVar3 = local_40;
        lVar1 = lVar5;
        if (lVar5 == local_40) {
joined_r0x003a1d48:
          if ((local_38 != '\0') && (lVar1 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
            FUN_00d50b20();
            lVar5 = lVar3;
            lVar1 = local_40;
            goto joined_r0x003a1d48;
          }
          FUN_00d50b20();
          local_38 = '\0';
          lVar5 = local_40;
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
      }
      (**(code **)(*unaff_RDI + 0xda0))();
      local_60 = '\0';
      local_68 = lVar5;
      (**(code **)(*unaff_RDI + 0xdb8))();
      lVar1 = local_50;
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      uVar7 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
      if (((char)local_54 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01278c70();
      lVar9 = local_40;
      if (local_40 == 0) {
        uVar6 = 0;
      }
      else if (local_38 == '\0') {
        FUN_00d50b00();
        uVar6 = (undefined4)CONCAT71(uVar8,1);
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
        uVar6 = (undefined4)CONCAT71(uVar8,1);
      }
      if (0 < *(int *)(lVar5 + 0xc)) {
        (**(code **)(*unaff_RDI + 0xe60))();
        local_50 = local_40;
        if (local_40 == 0) {
          local_54 = 0;
        }
        else {
          uVar8 = (undefined7)((param_2 & 0xffffffff) >> 8);
          if (local_38 == '\0') {
            FUN_00d50b00();
            local_54 = (undefined4)CONCAT71(uVar8,1);
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38 = '\0';
            local_54 = (undefined4)CONCAT71(uVar8,1);
          }
        }
        goto LAB_003a1c3a;
      }
      uVar7 = 0;
      local_44 = uVar6;
    }
    if (((char)local_44 != '\0') && (lVar9 != 0)) {
      FUN_00d50b20();
    }
    goto LAB_003a1e1f;
  }
  uVar7 = 0;
LAB_003a1e1f:
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  return uVar7 & 0xffffffff;
}


