// Function: FUN_00655fa0
// Address: 00655fa0
// Size: 737 bytes
// Class: MUMultiTrackView
// String references:
//   "MUMultiTrackView"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00655fa0(void)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong **pplVar4;
  longlong *unaff_RDI;
  bool bVar5;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  FUN_01d838d0();
  FUN_01e561b0();
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == (longlong *)0x0) {
    return;
  }
  FUN_01d8b220();
  plVar1 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) goto LAB_00656136;
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == (longlong *)0x0) goto LAB_00656136;
  local_58 = plVar1;
  (**(code **)(*plVar1 + 0x3f8))();
  local_50 = local_40;
  local_48 = 0;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_48 = '\x01';
  (**(code **)(*unaff_RDI + 0x630))();
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pplVar4 = &local_40;
  FUN_01d8b200();
  plVar1 = local_40;
  FUN_000914a0();
  if (plVar1 == (longlong *)0x0) {
LAB_006560fc:
    pplVar4 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_006560fc;
  }
  bVar5 = true;
  if (*pplVar4 == (longlong *)0x0) {
    pplVar4 = &local_68;
    FUN_01d8b200();
    plVar1 = local_68;
    if ((DAT_026fe4d0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
      ___cxa_guard_release();
    }
    if (plVar1 == (longlong *)0x0) {
LAB_0065618f:
      pplVar4 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar2 = FUN_00e85ea0();
      if (cVar2 == '\0') goto LAB_0065618f;
    }
    bVar5 = *pplVar4 != (longlong *)0x0;
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar5) {
    FUN_0063a4a0();
  }
  FUN_00d50b20();
LAB_00656136:
  FUN_00d50b20();
  return;
}


