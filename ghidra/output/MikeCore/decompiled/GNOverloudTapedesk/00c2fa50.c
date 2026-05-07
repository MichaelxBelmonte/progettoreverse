// Function: FUN_00c2fa50
// Address: 00c2fa50
// Size: 1187 bytes
// Class: GNOverloudTapedesk


/* WARNING: Removing unreachable block (ram,0x00c2fb64) */
/* WARNING: Removing unreachable block (ram,0x00c2fb70) */

ulonglong FUN_00c2fa50(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong unaff_RDI;
  longlong local_118;
  undefined1 local_110;
  longlong *local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  *(undefined1 *)(unaff_RDI + 0xb0) = 0;
  lVar1 = DAT_0276cb18;
  plVar6 = (longlong *)*param_1;
  if (DAT_0276cb18 != 0) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*plVar6 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_0276caf8;
  if (cVar2 == '\0') {
    plVar6 = (longlong *)*param_1;
    if (DAT_0276caf8 != 0) {
      FUN_00d50b00();
    }
    local_b0 = lVar1;
    local_a8 = '\x01';
    uVar3 = (**(code **)(*plVar6 + 0x50))();
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((char)uVar3 == '\0') {
      local_118 = *param_2;
      local_110 = 0;
      local_a0 = *param_1;
      local_98 = '\0';
      local_90 = *param_3;
      local_88 = '\0';
      uVar5 = FUN_00c17aa0(&local_a0,&local_118,&local_90);
      uVar7 = (ulonglong)uVar5;
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      uVar4 = FUN_00d45870();
      *(undefined4 *)(*param_2 + 0xd8) = uVar4;
      uVar7 = CONCAT71((uint7)(uint3)((uint)uVar3 >> 8),1);
    }
  }
  else {
    plVar6 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar6 + 0x18))();
    lVar1 = DAT_0276cb20;
    if (DAT_0276cb20 != 0) {
      FUN_00d50b00();
    }
    local_40 = lVar1;
    local_38 = '\0';
    FUN_00ca0840();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_00d46300();
    local_60 = local_80;
    local_58 = 0;
    lVar1 = DAT_0276cb28;
    if (local_78 == '\0') {
      if (local_80 != 0) {
        FUN_00d50b00();
        lVar1 = DAT_0276cb28;
      }
    }
    else {
      local_78 = '\0';
    }
    local_58 = '\x01';
    DAT_0276cb28 = lVar1;
    if (lVar1 != 0) {
      local_58 = '\x01';
      FUN_00d50b00();
    }
    local_38 = '\0';
    local_40 = lVar1;
    FUN_00ca0840();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    lVar1 = DAT_0276cb30;
    if (DAT_0276cb30 != 0) {
      FUN_00d50b00();
    }
    local_68 = 0;
    FUN_00d50b00();
    local_68 = '\x01';
    local_c8 = '\0';
    local_d0 = plVar6;
    local_70 = unaff_RDI;
    FUN_00d40470(&local_d0,&local_70,3,3);
    if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_0276cb28;
    if (DAT_0276cb28 != 0) {
      FUN_00d50b00();
    }
    local_c0 = lVar1;
    local_b8 = '\x01';
    FUN_000175c0();
    local_50 = local_40;
    local_48 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = '\x01';
    uVar5 = FUN_00c70bc0();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((char)uVar5 != '\0') {
      *(undefined1 *)(unaff_RDI + 0xb0) = 1;
    }
    FUN_00d50b20();
    uVar7 = (ulonglong)uVar5 ^ 1;
  }
  return uVar7;
}


