// Function: FUN_01bf4a10
// Address: 01bf4a10
// Size: 946 bytes
// Class: MUMultiTrackView
// String references:
//   "MUMultiTrackView"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01bf4a10(undefined4 param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined4 in_ECX;
  longlong **pplVar7;
  longlong *unaff_RSI;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  undefined4 local_54;
  longlong *local_50;
  undefined4 local_44;
  longlong *local_40;
  char local_38;
  
  lVar2 = DAT_02800140;
  local_54 = param_3;
  if (DAT_02800140 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_a8 = lVar2;
  local_a0 = '\x01';
  FUN_01ccaae0(param_1,&local_a8);
  local_50 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  uVar5 = FUN_01d26010();
  if (local_40 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),DAT_026fe4d0);
  }
  else {
    plVar6 = (longlong *)(**(code **)(*local_40 + 0x10))();
    uVar5 = CONCAT71((int7)((ulonglong)plVar6 >> 8),DAT_026fe4d0);
  }
  if ((DAT_026fe4d0 == '\0') && (uVar5 = ___cxa_guard_acquire(), (int)uVar5 != 0)) {
    _DAT_02726438 = FUN_0006d940();
    _DAT_02726420 = "MUMultiTrackView";
    _DAT_02726428 = 0x228;
    _DAT_02726430 = FUN_00082de0;
    _DAT_02726440 = 0;
    uRam0000000002726448 = 0;
    _DAT_02726450 = 0;
    _DAT_027264c8 = 0;
    uRam00000000027264d0 = 0;
    _DAT_027264d8 = 0;
    DAT_027264da = 1;
    _DAT_02726458 = 0;
    uRam0000000002726460 = 0;
    _DAT_02726468 = 0;
    uRam0000000002726470 = 0;
    _DAT_02726478 = 0;
    uRam0000000002726480 = 0;
    _DAT_02726488 = 0;
    uRam0000000002726490 = 0;
    _DAT_02726498 = 0;
    uRam00000000027264a0 = 0;
    _DAT_027264a8 = 0;
    uRam00000000027264b0 = 0;
    _DAT_027264b8 = 0;
    uRam00000000027264c0 = 0;
    DAT_027264e3 = 0;
    _DAT_027264db = 0;
    uVar5 = ___cxa_guard_release();
  }
  local_44 = (undefined4)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
  if (plVar6 == (longlong *)0x0) {
LAB_01bf4b47:
    plVar6 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01bf4b47;
    FUN_00d50b00();
    local_44 = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    (**(code **)(*local_40 + 0x10))();
    FUN_00d50b20();
  }
  pplVar7 = &local_40;
  FUN_01ccad60();
  plVar1 = local_40;
  FUN_00192f30();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_01bf4bac;
  }
  pplVar7 = (longlong **)&DAT_02802688;
LAB_01bf4bac:
  plVar1 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar7 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)local_54 == '\0') {
    local_78 = *unaff_RSI;
    local_70 = '\0';
    local_68 = *param_2;
    local_60 = '\0';
    uVar4 = (**(code **)(*plVar6 + 0xa00))(in_ECX,&local_68);
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_98 = *unaff_RSI;
    local_90 = '\0';
    local_88 = *param_2;
    local_80 = '\0';
    uVar4 = (**(code **)(*plVar6 + 0x9f8))(in_ECX,&local_88);
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((char)local_44 == '\0') {
    FUN_00d50b20();
  }
  if (local_50 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return uVar4;
}


