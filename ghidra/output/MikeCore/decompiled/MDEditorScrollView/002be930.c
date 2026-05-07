// Function: FUN_002be930
// Address: 002be930
// Size: 931 bytes
// Class: MDEditorScrollView


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002be930(pthread_key_t param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  longlong *plVar3;
  undefined8 *puVar4;
  void *pvVar5;
  longlong unaff_RDI;
  undefined4 uVar6;
  undefined8 in_XMM1_Qb;
  undefined1 auVar7 [16];
  longlong local_88;
  char local_80;
  undefined1 local_78 [8];
  undefined8 uStack_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  if (*(longlong *)(unaff_RDI + 200) == 0) {
    FUN_01e53c20();
    uVar6 = FUN_01e3f820();
    uStack_70 = in_XMM1_Qb;
    local_78 = (undefined1  [8])param_2;
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    auVar7 = blendps(_local_78,_DAT_023b1910,0xd);
    uVar6 = FUN_00d05530(uVar6,auVar7._0_8_,DAT_023b1608);
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_0006daf0();
    *(undefined4 *)(puVar4 + 0x27) = 0;
    puVar4[0x2e] = 0;
    *(undefined4 *)(puVar4 + 0x2f) = 0;
    puVar4[0x30] = 0;
    *(undefined1 *)(puVar4 + 0x31) = 0;
    puVar4[0x28] = 0;
    puVar4[0x29] = 0;
    *(undefined4 *)(puVar4 + 0x2a) = 0;
    puVar4[0x2b] = 0;
    puVar4[0x2c] = 0;
    *(undefined8 *)((longlong)puVar4 + 0x165) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x18c) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x194) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x199) = 0;
    puVar4[0x35] = 0;
    puVar4[0x36] = 0;
    puVar4[0x37] = 0;
    puVar4[0x38] = 0;
    *puVar4 = &DAT_02682cf8;
    param_1 = 0x26837c0;
    puVar4[2] = &DAT_026837c0;
    puVar4[0x39] = 0;
    puVar4[0x3a] = 0;
    *(undefined4 *)(puVar4 + 0x3b) = 0;
    puVar4[0x3c] = 0;
    puVar4[0x3d] = 0;
    *(undefined2 *)(puVar4 + 0x3e) = 0;
    (*DAT_02682d10)();
    puVar1 = *(undefined8 **)(unaff_RDI + 200);
    local_78._4_4_ = auVar7._4_4_;
    uStack_70._4_4_ = auVar7._12_4_;
    if (puVar1 == puVar4) {
      FUN_00d50b20();
    }
    else {
      *(undefined8 **)(unaff_RDI + 200) = puVar4;
      if (puVar1 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    auVar2._4_4_ = local_78._4_4_;
    auVar2._0_4_ = (float)local_78._4_4_ + DAT_02390d00;
    auVar2._8_4_ = uStack_70._4_4_;
    auVar2._12_4_ = uStack_70._4_4_;
    auVar7 = insertps(auVar7,auVar2,0x10);
    (**(code **)(**(longlong **)(unaff_RDI + 200) + 0x4d0))(uVar6,auVar7._0_8_);
    FUN_01d57ee0();
    FUN_01e53c20();
    plVar3 = local_38;
    local_50 = 0;
    local_58 = *(longlong *)(unaff_RDI + 200);
    if (local_58 != 0) {
      FUN_00d50b00();
    }
    local_50 = '\x01';
    (**(code **)(*plVar3 + 0x450))();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_003ba620();
  if (local_30 == '\0') {
    if (local_38 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b00();
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_38 == (longlong *)0x0) {
    return;
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar6 = FUN_012f4ba0();
  local_68 = DAT_026fc8b8;
  if (DAT_026fc8b8 != 0) {
    uVar6 = FUN_00d50b00();
  }
  local_60 = '\x01';
  FUN_000175c0(uVar6,&local_68);
  local_48 = local_38;
  local_40 = 0;
  if (local_30 == '\0') {
    if (local_38 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  local_40 = '\x01';
  FUN_01d57f20();
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


