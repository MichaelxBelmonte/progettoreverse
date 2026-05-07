// Function: FUN_004ac180
// Address: 004ac180
// Size: 737 bytes
// Class: MDErrorController


/* WARNING: Removing unreachable block (ram,0x004ac2f5) */
/* WARNING: Removing unreachable block (ram,0x004ac2fe) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ac180(undefined8 param_1,float param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong unaff_RDI;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  FUN_004aa180();
  plVar2 = (longlong *)FUN_00e8fc40();
  FUN_0006daf0();
  *(undefined4 *)(plVar2 + 0x27) = 0;
  plVar2[0x2e] = 0;
  *(undefined4 *)(plVar2 + 0x2f) = 0;
  plVar2[0x30] = 0;
  *(undefined1 *)(plVar2 + 0x31) = 0;
  plVar2[0x28] = 0;
  plVar2[0x29] = 0;
  *(undefined4 *)(plVar2 + 0x2a) = 0;
  plVar2[0x2b] = 0;
  plVar2[0x2c] = 0;
  *(undefined8 *)((longlong)plVar2 + 0x165) = 0;
  *(undefined8 *)((longlong)plVar2 + 0x18c) = 0;
  *(undefined8 *)((longlong)plVar2 + 0x194) = 0;
  *(undefined8 *)((longlong)plVar2 + 0x199) = 0;
  plVar2[0x3c] = 0;
  plVar2[0x3d] = 0;
  *(undefined2 *)(plVar2 + 0x3e) = 0;
  plVar2[0x35] = 0;
  plVar2[0x36] = 0;
  plVar2[0x37] = 0;
  plVar2[0x38] = 0;
  plVar2[0x39] = 0;
  plVar2[0x3a] = 0;
  *(undefined4 *)(plVar2 + 0x3b) = 0;
  *plVar2 = (longlong)&DAT_024c6e90;
  plVar2[2] = (longlong)&DAT_024c7960;
  plVar2[0x3f] = 0;
  (*DAT_024c6ea8)();
  auVar5._0_8_ = FUN_01e3f820();
  auVar5._8_8_ = extraout_XMM0_Qb;
  auVar4._4_12_ = auVar5._4_12_;
  auVar4._0_4_ = (float)auVar5._0_8_ + param_2 + DAT_02390d00 + _DAT_023b45d0;
  auVar5 = blendps(auVar4,_DAT_023b45e0,0xe);
  (**(code **)(*plVar2 + 0x4d0))(auVar5._0_8_,_DAT_023b45f0);
  (**(code **)(*plVar2 + 0x558))();
  FUN_01e3b6a0();
  (**(code **)(**(longlong **)(unaff_RDI + 0x70) + 0x450))();
  (**(code **)(**(longlong **)(unaff_RDI + 0x70) + 0x570))();
  FUN_01e534b0();
  FUN_00d50b00();
  local_70 = DAT_02703fe0;
  if (DAT_02703fe0 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_026fce70;
  local_68 = '\x01';
  if (DAT_026fce70 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar1;
  local_58 = '\x01';
  local_50 = 0;
  local_48 = '\0';
  FUN_000bf690(&local_60,&local_70,&local_50);
  lVar1 = *(longlong *)(unaff_RDI + 0x78);
  lVar3 = lVar1;
  if (lVar1 == local_40) goto LAB_004ac3e7;
  if (local_38 == '\0') {
    if (local_40 == 0) {
      lVar3 = 0;
      goto LAB_004ac3a5;
    }
    FUN_00d50b00();
    lVar1 = *(longlong *)(unaff_RDI + 0x78);
    *(longlong *)(unaff_RDI + 0x78) = local_40;
    lVar3 = local_40;
  }
  else {
    local_38 = '\0';
    lVar3 = local_40;
LAB_004ac3a5:
    *(longlong *)(unaff_RDI + 0x78) = lVar3;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar3 = local_40;
  }
LAB_004ac3e7:
  if ((local_38 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


