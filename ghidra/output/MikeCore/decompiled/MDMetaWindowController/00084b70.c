// Function: FUN_00084b70
// Address: 00084b70
// Size: 1089 bytes
// Class: MDMetaWindowController
// String references:
//   "[%@] %s"
//   "Beta"
//   "Alpha"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00084b70(void)

{
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong unaff_RDI;
  undefined4 uVar6;
  undefined4 extraout_XMM0_Da;
  undefined8 *local_b8;
  undefined4 local_b0;
  longlong local_a8;
  char local_a0;
  char *local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RDI + 0x10) == 0) {
    plVar4 = (longlong *)FUN_00e8fc40();
    FUN_0006daf0();
    (**(code **)(*plVar4 + 0x18))();
    plVar5 = *(longlong **)(unaff_RDI + 0x10);
    if (plVar5 == plVar4) {
      FUN_00d50b20();
    }
    else {
      *(longlong **)(unaff_RDI + 0x10) = plVar4;
      if (plVar5 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x4d0))(0,_DAT_02390790);
    plVar5 = (longlong *)FUN_00e8fc40();
    FUN_0006daf0();
    *(undefined4 *)(plVar5 + 0x27) = 0;
    plVar5[0x2e] = 0;
    *(undefined4 *)(plVar5 + 0x2f) = 0;
    plVar5[0x30] = 0;
    *(undefined1 *)(plVar5 + 0x31) = 0;
    plVar5[0x28] = 0;
    plVar5[0x29] = 0;
    *(undefined4 *)(plVar5 + 0x2a) = 0;
    plVar5[0x2b] = 0;
    plVar5[0x2c] = 0;
    *(undefined8 *)((longlong)plVar5 + 0x165) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x18c) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x194) = 0;
    *(undefined8 *)((longlong)plVar5 + 0x199) = 0;
    plVar5[0x35] = 0;
    plVar5[0x36] = 0;
    plVar5[0x37] = 0;
    plVar5[0x38] = 0;
    *plVar5 = (longlong)&DAT_02683800;
    plVar5[2] = (longlong)&DAT_026842c8;
    plVar5[0x39] = 0;
    plVar5[0x3a] = 0;
    pcVar1 = DAT_02683818;
    (*DAT_02683818)();
    plVar4 = (longlong *)FUN_00e8fc40();
    FUN_0006daf0();
    *(undefined4 *)(plVar4 + 0x27) = 0;
    plVar4[0x2e] = 0;
    *(undefined4 *)(plVar4 + 0x2f) = 0;
    plVar4[0x30] = 0;
    *(undefined1 *)(plVar4 + 0x31) = 0;
    plVar4[0x28] = 0;
    plVar4[0x29] = 0;
    *(undefined4 *)(plVar4 + 0x2a) = 0;
    plVar4[0x2b] = 0;
    plVar4[0x2c] = 0;
    *(undefined8 *)((longlong)plVar4 + 0x165) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x18c) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x194) = 0;
    *(undefined8 *)((longlong)plVar4 + 0x199) = 0;
    plVar4[0x35] = 0;
    plVar4[0x36] = 0;
    plVar4[0x37] = 0;
    plVar4[0x38] = 0;
    *plVar4 = (longlong)&DAT_02683800;
    plVar4[2] = (longlong)&DAT_026842c8;
    plVar4[0x39] = 0;
    plVar4[0x3a] = 0;
    (*pcVar1)();
    uVar6 = FUN_00003010();
    uVar6 = FUN_00d91a70(uVar6,1);
    FUN_00d97ce0(uVar6,8);
    iVar3 = FUN_000030b0();
    local_a8 = local_90;
    local_98 = "Alpha";
    if (iVar3 == 1) {
      local_98 = "Beta";
    }
    local_b0 = 2;
    local_b8 = &DAT_024c5048;
    local_a0 = 0;
    uVar6 = extraout_XMM0_Da;
    if (local_90 != 0) {
      uVar6 = FUN_00d50b00();
    }
    local_a0 = '\x01';
    local_b8 = (undefined8 *)&DAT_024c59c8;
    FUN_00d8cb40(uVar6,&local_b8);
    lVar2 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_38 = '\0';
    }
    local_b8 = &DAT_024c5048;
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar5 + 0x4d0))(0,_DAT_023907a0);
    (**(code **)(*plVar4 + 0x4d0))(_DAT_023907b0,_DAT_023907a0);
    (**(code **)(*plVar5 + 0x9c8))();
    (**(code **)(*plVar4 + 0x9c8))();
    local_70 = lVar2;
    local_68 = '\0';
    (**(code **)(*plVar4 + 0x958))();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    local_58 = '\0';
    local_60 = plVar5;
    (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x450))();
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_48 = '\0';
    local_50 = plVar4;
    (**(code **)(**(longlong **)(unaff_RDI + 0x10) + 0x450))();
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}


