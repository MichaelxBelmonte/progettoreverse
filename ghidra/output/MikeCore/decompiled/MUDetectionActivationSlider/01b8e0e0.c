// Function: FUN_01b8e0e0
// Address: 01b8e0e0
// Size: 1176 bytes
// Class: MUDetectionActivationSlider
// String references:
//   "MUDetectionActivationSlider"


/* WARNING: Removing unreachable block (ram,0x01b8e1a9) */
/* WARNING: Removing unreachable block (ram,0x01b8e1b2) */
/* WARNING: Removing unreachable block (ram,0x01b8e45f) */
/* WARNING: Removing unreachable block (ram,0x01b8e468) */
/* WARNING: Removing unreachable block (ram,0x01b8e430) */
/* WARNING: Removing unreachable block (ram,0x01b8e439) */
/* WARNING: Removing unreachable block (ram,0x01b8e1d6) */
/* WARNING: Removing unreachable block (ram,0x01b8e1df) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b8e0e0(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong *unaff_RDI;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar3 = FUN_01d3a5a0();
  if ((iVar3 != 1) || (iVar3 = FUN_01d3b630(), iVar3 != 1)) {
    FUN_01daee00();
    return;
  }
  FUN_01d3abf0();
  uVar5 = FUN_01e466c0();
  uVar6 = FUN_01b8e6e0();
  cVar2 = FUN_00d05410(uVar5,uVar6,param_2);
  if ((cVar2 == '\0') || (!NAN(*(float *)(unaff_RDI + 0x3c)))) goto LAB_01b8e164;
  plVar4 = (longlong *)unaff_RDI[6];
  if ((DAT_02732250 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_027321a0 = FUN_001b37d0();
    _DAT_02732188 = "MUDetectionActivationSlider";
    _DAT_02732190 = 0x1e8;
    _DAT_02732198 = FUN_008264b0;
    _DAT_027321a8 = 0;
    uRam00000000027321b0 = 0;
    _DAT_027321b8 = 0;
    _DAT_02732230 = 0;
    uRam0000000002732238 = 0;
    _DAT_02732240 = 0;
    DAT_02732242 = 1;
    _DAT_027321c0 = 0;
    uRam00000000027321c8 = 0;
    _DAT_027321d0 = 0;
    uRam00000000027321d8 = 0;
    _DAT_027321e0 = 0;
    uRam00000000027321e8 = 0;
    _DAT_027321f0 = 0;
    uRam00000000027321f8 = 0;
    _DAT_02732200 = 0;
    uRam0000000002732208 = 0;
    _DAT_02732210 = 0;
    uRam0000000002732218 = 0;
    _DAT_02732220 = 0;
    uRam0000000002732228 = 0;
    DAT_0273224b = 0;
    _DAT_02732243 = 0;
    ___cxa_guard_release();
  }
  if (plVar4 == (longlong *)0x0) {
LAB_01b8e227:
    plVar4 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar4 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01b8e227;
    plVar4 = unaff_RDI + 6;
  }
  if (*plVar4 == 0) {
    uVar5 = (**(code **)(*unaff_RDI + 0x930))();
    *(undefined4 *)(unaff_RDI + 0x3c) = uVar5;
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
    plVar4[0x39] = 0;
    plVar4[0x3a] = 0;
    *(undefined1 *)(plVar4 + 0x3b) = 0;
    *plVar4 = (longlong)&DAT_0264fd20;
    plVar4[2] = (longlong)&DAT_02650850;
    *(undefined8 *)((longlong)plVar4 + 0x1dc) = 0;
    FUN_00d500e0();
    FUN_01e3f820();
    (**(code **)(*plVar4 + 0x4d0))();
    FUN_00d50b00();
    (**(code **)(*plVar4 + 0xa20))();
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027e5020;
    if (DAT_027e5020 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar4 + 0xa10))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RDI + 0xac0))();
    (**(code **)(*plVar4 + 0xab8))();
    (**(code **)(*unaff_RDI + 0xad0))();
    (**(code **)(*plVar4 + 0xac8))();
    (**(code **)(*plVar4 + 0x928))(*(undefined4 *)((longlong)unaff_RDI + 0x1dc));
    uVar5 = (**(code **)(*unaff_RDI + 0xad0))();
    *(undefined4 *)((longlong)plVar4 + 0x1dc) = uVar5;
    (**(code **)(*plVar4 + 0x620))();
    (**(code **)(*unaff_RDI + 0x450))();
    (**(code **)(*plVar4 + 0x3c0))();
    (**(code **)(*plVar4 + 0x478))();
    uVar5 = (**(code **)(*plVar4 + 0x930))();
    *(undefined4 *)((longlong)unaff_RDI + 0x1dc) = uVar5;
    (**(code **)(*unaff_RDI + 0x620))();
    *(undefined4 *)(unaff_RDI + 0x3c) = 0x7fc00000;
    FUN_00d50b20();
    return;
  }
LAB_01b8e164:
  uVar7 = (**(code **)(*unaff_RDI + 0xaf8))();
  cVar2 = FUN_00d05410(uVar5,uVar7,uVar6);
  if (cVar2 != '\0') {
    FUN_01daee00();
  }
  return;
}


