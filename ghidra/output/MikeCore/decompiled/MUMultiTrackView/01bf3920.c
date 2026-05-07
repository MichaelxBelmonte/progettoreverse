// Function: FUN_01bf3920
// Address: 01bf3920
// Size: 561 bytes
// Class: MUMultiTrackView
// String references:
//   "MUMultiTrackView"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01bf3920(undefined4 param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  lVar2 = DAT_02800140;
  if (DAT_02800140 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_48 = lVar2;
  local_40 = '\x01';
  FUN_01ccaae0(param_1,&local_48);
  plVar3 = local_38;
  if (local_30 == '\0') {
    if (((local_38 != (longlong *)0x0) && (FUN_00d50b00(), local_30 != '\0')) &&
       (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_30 = '\0';
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_01d26010();
    if (local_38 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = (longlong *)(**(code **)(*local_38 + 0x10))();
    }
    if ((DAT_026fe4d0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
    bVar1 = true;
    if (plVar6 == (longlong *)0x0) {
LAB_01bf3a23:
      plVar6 = (longlong *)0x0;
    }
    else {
      (**(code **)(*plVar6 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_01bf3a23;
      FUN_00d50b00();
      bVar1 = false;
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      (**(code **)(*local_38 + 0x10))();
      FUN_00d50b20();
    }
    if (!bVar1) {
      cVar4 = (**(code **)(*plVar6 + 0x920))();
      if (cVar4 != '\0') {
        FUN_00d50b20();
        goto LAB_01bf3a76;
      }
      FUN_00d50b20();
    }
  }
  FUN_01df7da0();
  if (plVar3 == (longlong *)0x0) {
    return;
  }
LAB_01bf3a76:
  FUN_00d50b20();
  return;
}


