// Function: FUN_00347340
// Address: 00347340
// Size: 1208 bytes
// Class: MUTool
// String references:
//   "MUTool"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00347340(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  char *pcVar5;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong **pplVar6;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong *local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  local_d0 = unaff_RDI[0xa7];
  local_c0 = *param_2;
  if (local_d0 == local_c0) {
    return;
  }
  if (local_d0 != *unaff_RSI) {
    return;
  }
  local_c8 = '\0';
  local_b8 = '\0';
  FUN_01950bb0(local_d0,&local_c0);
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  FUN_019f0ee0();
  FUN_01e1f270();
  FUN_00d23310();
  pcVar5 = local_38;
  if (local_40[0] != '\0') {
    pcVar5 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar5 = '\0';
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  uVar7 = FUN_01e26150();
  local_b0 = DAT_026f6e60;
  if (DAT_026f6e60 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_a8 = '\x01';
  pplVar6 = &local_110;
  uVar7 = FUN_000175c0(uVar7,&local_b0);
  plVar4 = local_110;
  if ((DAT_0272ffd0 == '\0') &&
     (iVar3 = ___cxa_guard_acquire(), uVar7 = extraout_XMM0_Da_00, iVar3 != 0)) {
    _DAT_026f8f48 = FUN_00d4fe50();
    _DAT_026f8f30 = "MUTool";
    _DAT_026f8f38 = 0x38;
    _DAT_026f8f40 = FUN_00274e70;
    _DAT_026f8f50 = 0;
    uRam00000000026f8f58 = 0;
    _DAT_026f8f60 = 0;
    _DAT_026f8fd8 = 0;
    uRam00000000026f8fe0 = 0;
    _DAT_026f8fe8 = 0;
    DAT_026f8fea = 1;
    _DAT_026f8f68 = 0;
    uRam00000000026f8f70 = 0;
    _DAT_026f8f78 = 0;
    uRam00000000026f8f80 = 0;
    _DAT_026f8f88 = 0;
    uRam00000000026f8f90 = 0;
    _DAT_026f8f98 = 0;
    uRam00000000026f8fa0 = 0;
    _DAT_026f8fa8 = 0;
    uRam00000000026f8fb0 = 0;
    _DAT_026f8fb8 = 0;
    uRam00000000026f8fc0 = 0;
    _DAT_026f8fc8 = 0;
    uRam00000000026f8fd0 = 0;
    DAT_026f8ff3 = 0;
    _DAT_026f8feb = 0;
    uVar7 = ___cxa_guard_release();
  }
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x360))();
    cVar2 = FUN_00e85ea0();
    uVar7 = extraout_XMM0_Da;
    if (cVar2 != '\0') goto LAB_003474cf;
  }
  pplVar6 = (longlong **)&DAT_02802688;
LAB_003474cf:
  plVar4 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar4 != (longlong *)0x0) {
      uVar7 = FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar6 + 1) = 0;
  }
  (**(code **)(*unaff_RDI + 0xec8))(uVar7,0);
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  uVar7 = (**(code **)(*plVar4 + 0x18))();
  lVar1 = DAT_026f6de8;
  local_a0 = *param_2;
  local_98 = '\0';
  if (DAT_026f6de8 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_48 = lVar1;
  local_40[0] = '\0';
  FUN_00ca0840(uVar7,&local_48);
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_90 = DAT_026f6d80;
  if (DAT_026f6d80 != 0) {
    FUN_00d50b00();
  }
  local_88 = '\x01';
  FUN_00d50b00();
  local_78 = '\0';
  local_80 = plVar4;
  FUN_00d40470(&local_80,&stack0xffffffffffffff90,3,3);
  if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


