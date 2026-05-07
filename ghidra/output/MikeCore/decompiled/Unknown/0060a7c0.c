// Function: FUN_0060a7c0
// Address: 0060a7c0
// Size: 1845 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x0060a9db) */
/* WARNING: Removing unreachable block (ram,0x0060aa01) */
/* WARNING: Removing unreachable block (ram,0x0060aa05) */
/* WARNING: Removing unreachable block (ram,0x0060aa12) */
/* WARNING: Removing unreachable block (ram,0x0060aa17) */
/* WARNING: Removing unreachable block (ram,0x0060aa1f) */
/* WARNING: Removing unreachable block (ram,0x0060ab70) */
/* WARNING: Removing unreachable block (ram,0x0060ab75) */
/* WARNING: Removing unreachable block (ram,0x0060aa29) */
/* WARNING: Removing unreachable block (ram,0x0060ab7d) */
/* WARNING: Removing unreachable block (ram,0x0060ab9a) */
/* WARNING: Removing unreachable block (ram,0x0060aba3) */
/* WARNING: Removing unreachable block (ram,0x0060aba8) */
/* WARNING: Removing unreachable block (ram,0x0060abb9) */
/* WARNING: Removing unreachable block (ram,0x0060abc1) */
/* WARNING: Removing unreachable block (ram,0x0060ac1d) */
/* WARNING: Removing unreachable block (ram,0x0060abee) */
/* WARNING: Removing unreachable block (ram,0x0060ac0a) */
/* WARNING: Removing unreachable block (ram,0x0060ac13) */
/* WARNING: Removing unreachable block (ram,0x0060ac18) */
/* WARNING: Removing unreachable block (ram,0x0060accb) */
/* WARNING: Removing unreachable block (ram,0x0060acf2) */
/* WARNING: Removing unreachable block (ram,0x0060acf6) */
/* WARNING: Removing unreachable block (ram,0x0060ad03) */
/* WARNING: Removing unreachable block (ram,0x0060ad08) */
/* WARNING: Removing unreachable block (ram,0x0060ad10) */
/* WARNING: Removing unreachable block (ram,0x0060ad20) */
/* WARNING: Removing unreachable block (ram,0x0060ad25) */
/* WARNING: Removing unreachable block (ram,0x0060ad1a) */
/* WARNING: Removing unreachable block (ram,0x0060ad2d) */
/* WARNING: Removing unreachable block (ram,0x0060ad49) */
/* WARNING: Removing unreachable block (ram,0x0060ad52) */
/* WARNING: Removing unreachable block (ram,0x0060ad57) */
/* WARNING: Removing unreachable block (ram,0x0060ad68) */
/* WARNING: Removing unreachable block (ram,0x0060ad70) */
/* WARNING: Removing unreachable block (ram,0x0060ad91) */
/* WARNING: Removing unreachable block (ram,0x0060adb6) */
/* WARNING: Removing unreachable block (ram,0x0060adc3) */

undefined1 FUN_0060a7c0(float param_1,longlong *param_2)

{
  longlong lVar1;
  float fVar2;
  dword dVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  char *pcVar9;
  byte unaff_SIL;
  ulonglong uVar10;
  longlong unaff_RDI;
  ulonglong uVar11;
  longlong local_70;
  char local_68 [8];
  longlong local_60;
  uint local_58;
  undefined8 local_54;
  float local_44;
  char local_40 [8];
  char local_38 [8];
  
  lVar5 = *param_2;
  if (lVar5 == 0) {
    local_44 = 0.0;
    dVar3 = MACH_HEADER.filetype;
  }
  else {
    local_68[0] = '\0';
    local_70 = 0;
    local_54 = 0;
    local_58 = *(uint *)(lVar5 + 0xc);
    if ((int)local_58 < 1) {
      local_58 = 0;
      local_44 = 0.0;
    }
    else {
      lVar1 = (ulonglong)(unaff_SIL ^ 1) * 4 + 0x30;
      lVar6 = *(longlong *)(lVar5 + 0x10);
      if ((ulonglong)local_58 - 1 < 3) {
        local_44 = 0.0;
        uVar11 = 0;
      }
      else {
        local_44 = 0.0;
        uVar11 = 0;
        do {
          local_70 = *(longlong *)(lVar6 + 0x18 + uVar11 * 8);
          local_44 = local_44 + *(float *)(*(longlong *)(lVar6 + uVar11 * 8) + lVar1) +
                     *(float *)(*(longlong *)(lVar6 + 8 + uVar11 * 8) + lVar1) +
                     *(float *)(*(longlong *)(lVar6 + 0x10 + uVar11 * 8) + lVar1) +
                     *(float *)(local_70 + lVar1);
          uVar11 = uVar11 + 4;
        } while ((local_58 & 0xfffffffc) != uVar11);
      }
      if ((ulonglong)(local_58 & 3) != 0) {
        uVar10 = 0;
        do {
          local_70 = *(longlong *)(lVar6 + uVar11 * 8 + uVar10 * 8);
          local_44 = local_44 + *(float *)(local_70 + lVar1);
          uVar10 = uVar10 + 1;
        } while ((local_58 & 3) != uVar10);
      }
    }
    local_60 = lVar5;
    FUN_006106b0();
    dVar3 = *(dword *)(*param_2 + 0xc);
  }
  if ((dVar3 == 1) && (param_1 < local_44)) {
    return 0;
  }
  if (local_44 < param_1) {
    FUN_00d23310();
    local_38[0] = local_68[0];
    pcVar9 = local_68;
    if (local_68[0] == '\0') {
      pcVar9 = local_38;
    }
    *pcVar9 = '\0';
    if ((local_68[0] != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d23310();
    local_40[0] = local_68[0];
    pcVar9 = local_68;
    if (local_68[0] == '\0') {
      pcVar9 = local_40;
    }
    *pcVar9 = '\0';
    if ((local_68[0] != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d23340();
    local_38[0] = local_68[0];
    pcVar9 = local_68;
    if (local_68[0] == '\0') {
      pcVar9 = local_38;
    }
    *pcVar9 = '\0';
    if ((local_68[0] != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d23340();
    pcVar9 = local_40;
    if (local_68[0] != '\0') {
      pcVar9 = local_68;
    }
    local_40[0] = local_68[0];
    *pcVar9 = '\0';
    if ((local_68[0] != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (local_38[0] == '\0') {
      return 0;
    }
    if (local_70 == 0) {
      return 0;
    }
    FUN_00d50b20();
    return 0;
  }
  if (local_44 <= param_1) {
    uVar8 = 0;
    uVar7 = 0;
  }
  else {
    FUN_00d23340();
    local_38[0] = local_68[0];
    pcVar9 = local_68;
    if (local_68[0] == '\0') {
      pcVar9 = local_38;
    }
    *pcVar9 = '\0';
    if ((local_68[0] != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (local_70 == *(longlong *)(unaff_RDI + 0x198)) {
      if ((local_38[0] != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      iVar4 = *(int *)(*param_2 + 0xc);
      if ((local_38[0] != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (1 < iVar4) {
        FUN_00d23340();
        pcVar9 = local_68;
        if (local_68[0] == '\0') {
          pcVar9 = local_38;
        }
        local_38[0] = local_68[0];
        *pcVar9 = '\0';
        if ((local_68[0] != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] == '\0') && (local_70 != 0)) {
          FUN_00d50b00();
        }
        fVar2 = *(float *)(local_70 + 0x30 + (ulonglong)(unaff_SIL ^ 1) * 4);
        FUN_00d50b20();
        FUN_00d23740();
        local_44 = local_44 - fVar2;
        uVar8 = 1;
        uVar7 = 1;
        goto joined_r0x0060ab53;
      }
    }
    uVar8 = 0;
    uVar7 = 0;
  }
joined_r0x0060ab53:
  if (local_44 <= param_1) {
    return uVar7;
  }
  FUN_00d23310();
  local_38[0] = local_68[0];
  pcVar9 = local_68;
  if (local_68[0] == '\0') {
    pcVar9 = local_38;
  }
  *pcVar9 = '\0';
  if ((local_68[0] != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (local_70 == *(longlong *)(unaff_RDI + 0x198)) {
    if (local_38[0] == '\0') {
      return uVar8;
    }
    if (local_70 == 0) {
      return uVar8;
    }
    FUN_00d50b20();
    return uVar8;
  }
  iVar4 = *(int *)(*param_2 + 0xc);
  if ((local_38[0] != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (iVar4 < 2) {
    return uVar8;
  }
  FUN_00d23310();
  pcVar9 = local_68;
  if (local_68[0] == '\0') {
    pcVar9 = local_38;
  }
  local_38[0] = local_68[0];
  *pcVar9 = '\0';
  if ((local_68[0] != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (local_38[0] == '\0') {
    if (local_70 == 0) goto LAB_0060aed2;
    FUN_00d50b00();
  }
  else if (local_70 == 0) goto LAB_0060aed2;
  FUN_00d50b20();
LAB_0060aed2:
  FUN_00d23620();
  return 1;
}


