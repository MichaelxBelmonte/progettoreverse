// Function: FUN_01f3c5f0
// Address: 01f3c5f0
// Size: 2909 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01f3c88a) */
/* WARNING: Removing unreachable block (ram,0x01f3c896) */
/* WARNING: Removing unreachable block (ram,0x01f3c6fa) */
/* WARNING: Removing unreachable block (ram,0x01f3c706) */
/* WARNING: Removing unreachable block (ram,0x01f3c95b) */
/* WARNING: Removing unreachable block (ram,0x01f3c967) */

void FUN_01f3c5f0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  char *pcVar7;
  int iVar8;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar9;
  longlong *local_198;
  char local_190;
  longlong *local_188;
  char local_180;
  longlong *local_178;
  char local_170;
  longlong local_168;
  char local_160;
  longlong *local_158;
  char local_150;
  longlong *local_148;
  char local_140;
  longlong *local_138;
  char local_130;
  longlong *local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong *local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong *local_c8;
  char local_c0;
  longlong *local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  undefined7 uStack_77;
  char local_70;
  longlong *local_68;
  longlong *local_60;
  char local_58 [8];
  longlong local_50;
  undefined8 local_48;
  int local_40;
  longlong *local_38;
  
  if (*param_1 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  local_38 = param_2;
  (**(code **)(*unaff_RSI + 0x508))();
  plVar1 = local_60;
  if ((((local_58[0] == '\0') && (local_60 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d23310();
  plVar9 = local_60;
  pcVar7 = &local_78;
  if (local_58[0] != '\0') {
    pcVar7 = local_58;
  }
  local_78 = local_58[0];
  *pcVar7 = '\0';
  if ((local_58[0] != '\0') && (plVar9 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar2 = (longlong *)FUN_00cafdf0();
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  if ((local_78 != '\0') && (plVar9 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 == (longlong *)0x0) {
    uVar3 = (**(code **)(*plVar1 + 0x498))();
    plVar9 = local_60;
    if (local_60 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
      local_a8 = 0;
    }
    else {
      local_a8 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
      if (((local_58[0] == '\0') && (FUN_00d50b00(), local_58[0] != '\0')) &&
         (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    (**(code **)(*plVar1 + 0x490))();
    FUN_00d50b00();
    uVar3 = FUN_00d50b20();
    local_a8 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
    plVar9 = plVar2;
  }
  lVar6 = DAT_02800138;
  if (DAT_02800138 != 0) {
    FUN_00d50b00();
  }
  FUN_01e2ad40();
  local_a0 = local_60;
  local_98 = 0;
  if (local_58[0] == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58[0] = '\0';
  }
  local_98 = '\x01';
  (**(code **)(*plVar9 + 0x498))();
  if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  local_190 = '\0';
  local_188 = plVar1;
  local_180 = '\0';
  local_198 = plVar4;
  local_b0 = plVar4;
  FUN_01e4fcf0(&local_188,&local_198);
  plVar4 = local_60;
  if (local_58[0] == '\0') {
    if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58[0] != '\0')) &&
       (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_58[0] = '\0';
  }
  if ((local_180 != '\0') && (local_188 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_190 != '\0') && (local_198 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_178 = plVar4;
  local_170 = '\0';
  local_b8 = plVar4;
  (**(code **)(*plVar1 + 0x580))();
  if ((local_170 != '\0') && (local_178 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e56750();
  FUN_01e5e3f0();
  plVar4 = local_60;
  if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (CONCAT71(uStack_77,local_78) != 0)) {
    FUN_00d50b20();
  }
  if (plVar4 == (longlong *)0x0) {
    FUN_01e56750();
    local_168 = *param_1;
    local_160 = '\0';
    FUN_01e5e380();
    if ((local_160 != '\0') && (local_168 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01e56750();
  FUN_01e5e430();
  if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_c0 = 0;
  FUN_00d50b00();
  local_c0 = '\x01';
  local_158 = local_b0;
  local_150 = '\0';
  local_c8 = unaff_RSI;
  FUN_01e2fa60();
  local_80 = local_60;
  if (local_58[0] == '\0') {
    if (((local_60 != (longlong *)0x0) && (FUN_00d50b00(), local_58[0] != '\0')) &&
       (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_58[0] = '\0';
  }
  if ((local_150 != '\0') && (local_158 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar1 + 0x488))();
  FUN_01d2e930();
  plVar4 = local_60;
  if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (CONCAT71(uStack_77,local_78) != 0)) {
    FUN_00d50b20();
  }
  if (plVar4 == (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x488))();
    local_140 = '\0';
    local_148 = plVar9;
    FUN_01d2e920();
    if ((local_140 != '\0') && (local_148 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (local_80 == (longlong *)0x0) {
LAB_01f3cd0f:
    local_68 = (longlong *)0x0;
LAB_01f3cd11:
    (**(code **)(*plVar1 + 0x488))();
    FUN_01d25f70();
    plVar4 = local_60;
    if (local_60 != (longlong *)0x0) {
      if (local_58[0] == '\0') {
        FUN_00d50b00();
        local_68 = plVar4;
        if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
          local_68 = plVar4;
        }
      }
      else {
        local_58[0] = '\0';
        local_68 = plVar4;
      }
    }
    if ((local_70 != '\0') && (CONCAT71(uStack_77,local_78) != 0)) {
      FUN_00d50b20();
    }
    plVar4 = local_68;
    if (local_80 == (longlong *)0x0) goto LAB_01f3cf01;
  }
  else {
    FUN_01d25f70();
    plVar4 = local_60;
    if (local_58[0] == '\0') {
      if (local_60 == (longlong *)0x0) goto LAB_01f3cd0f;
      FUN_00d50b00();
      if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_68 = local_60;
      if (local_60 == (longlong *)0x0) goto LAB_01f3cd11;
    }
    (**(code **)(*plVar1 + 0x488))();
    local_138 = plVar4;
    local_130 = '\0';
    FUN_01d25f20();
    if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_68 = plVar4;
  plVar5 = (longlong *)FUN_001d7c90();
  (**(code **)(*plVar5 + 0x18))();
  local_128 = local_80;
  local_120 = '\0';
  FUN_01ccad10();
  if ((local_120 != '\0') && (local_128 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar6 = DAT_02800140;
  if (DAT_02800140 != 0) {
    FUN_00d50b00();
  }
  local_118 = lVar6;
  local_110 = '\x01';
  local_108 = 0;
  local_100 = '\0';
  (**(code **)(*plVar1 + 0x488))();
  local_90 = local_60;
  local_88 = 0;
  if (local_58[0] == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58[0] = '\0';
  }
  plVar4 = local_68;
  local_88 = '\x01';
  (**(code **)(*plVar5 + 0x468))(&local_90);
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar5 + 0x478))();
  FUN_00d50b20();
LAB_01f3cf01:
  plVar5 = local_80;
  if ((plVar2 == (longlong *)0x0) && (*local_38 != 0)) {
    local_58[0] = '\0';
    local_60 = (longlong *)0x0;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_48._4_4_ = 0;
    local_68 = plVar4;
    local_50 = *local_38;
    while( true ) {
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar8 = -local_48._4_4_;
        }
        else {
          iVar8 = (int)local_48 - local_48._4_4_;
          local_48 = CONCAT44(local_48._4_4_,iVar8);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar8 = 0;
        }
        local_48 = CONCAT44(iVar8,(int)local_48);
      }
      lVar6 = (longlong)(int)local_48;
      iVar8 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar8);
      if (*(int *)(local_50 + 0xc) <= iVar8) break;
      local_f8 = *(longlong **)(*(longlong *)(local_50 + 0x10) + 8 + lVar6 * 8);
      local_f0 = '\0';
      local_60 = local_f8;
      (**(code **)(*plVar9 + 0x3a0))();
      if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00083b20();
    plVar4 = local_68;
  }
  (**(code **)(*plVar1 + 0x488))();
  local_e8 = *local_38;
  local_e0 = '\0';
  FUN_01d2a8f0();
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar1 + 0x488))();
  FUN_01d2eb40();
  if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_d8 = plVar1;
  local_d0 = '\0';
  (**(code **)(*unaff_RSI + 0x518))();
  if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  *unaff_RDI = plVar1;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  plVar1 = local_b0;
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_b8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((char)local_a8 != '\0') {
    FUN_00d50b20();
  }
  return;
}


