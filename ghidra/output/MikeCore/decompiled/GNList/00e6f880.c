// Function: FUN_00e6f880
// Address: 00e6f880
// Size: 837 bytes
// Class: GNList
// String references:
//   "GNList"
//   "GNDictionary"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e6f880(undefined4 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *unaff_RDI;
  longlong **pplVar6;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  lVar5 = DAT_02784a80;
  if (*unaff_RDI != 0) {
    if (DAT_02784a80 != 0) {
      param_1 = FUN_00d50b00();
    }
    local_40 = lVar5;
    local_38 = '\x01';
    FUN_000175c0(param_1,&local_40);
    plVar1 = local_78;
    if ((DAT_027048b0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      _DAT_026cd478 = FUN_00d4fe50();
      DAT_026cd460 = "GNList";
      _DAT_026cd468 = 0x20;
      _DAT_026cd470 = FUN_00018210;
      _DAT_026cd480 = 0;
      uRam00000000026cd488 = 0;
      _DAT_026cd490 = 0;
      _DAT_026cd508 = 0;
      uRam00000000026cd510 = 0;
      _DAT_026cd518 = 0;
      DAT_026cd51a = 6;
      _DAT_026cd498 = 0;
      uRam00000000026cd4a0 = 0;
      _DAT_026cd4a8 = 0;
      uRam00000000026cd4b0 = 0;
      _DAT_026cd4b8 = 0;
      uRam00000000026cd4c0 = 0;
      _DAT_026cd4c8 = 0;
      uRam00000000026cd4d0 = 0;
      _DAT_026cd4d8 = 0;
      uRam00000000026cd4e0 = 0;
      _DAT_026cd4e8 = 0;
      uRam00000000026cd4f0 = 0;
      _DAT_026cd4f8 = 0;
      uRam00000000026cd500 = 0;
      DAT_026cd523 = 0;
      _DAT_026cd51b = 0;
      ___cxa_guard_release();
    }
    pplVar6 = (longlong **)&DAT_02802688;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 != '\0') {
        if ((DAT_026fdd40 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
          _DAT_026cd0e8 = FUN_00d4fe50();
          DAT_026cd0d0 = "GNDictionary";
          _DAT_026cd0d8 = 0x28;
          _DAT_026cd0e0 = FUN_00022d20;
          _DAT_026cd0f0 = 0;
          uRam00000000026cd0f8 = 0;
          _DAT_026cd100 = 0;
          _DAT_026cd178 = 0;
          uRam00000000026cd180 = 0;
          _DAT_026cd188 = 0;
          DAT_026cd18a = 6;
          _DAT_026cd108 = 0;
          uRam00000000026cd110 = 0;
          _DAT_026cd118 = 0;
          uRam00000000026cd120 = 0;
          _DAT_026cd128 = 0;
          uRam00000000026cd130 = 0;
          _DAT_026cd138 = 0;
          uRam00000000026cd140 = 0;
          _DAT_026cd148 = 0;
          uRam00000000026cd150 = 0;
          _DAT_026cd158 = 0;
          uRam00000000026cd160 = 0;
          _DAT_026cd168 = 0;
          uRam00000000026cd170 = 0;
          DAT_026cd193 = 0;
          _DAT_026cd18b = 0;
          ___cxa_guard_release();
        }
        cVar3 = FUN_00e8da30();
        pplVar6 = &local_78;
        if (cVar3 == '\0') {
          pplVar6 = (longlong **)&DAT_02802688;
        }
      }
    }
    plVar1 = *pplVar6;
    if (*(char *)(pplVar6 + 1) == '\0') {
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar6 + 1) = 0;
    }
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      local_70 = 0;
      local_78 = (longlong *)0x0;
      local_58 = 0;
      local_60 = 0;
      local_68 = plVar1;
      if (0 < *(int *)((longlong)plVar1 + 0xc)) {
        lVar5 = 0;
        do {
          lVar2 = DAT_02787950;
          local_78 = *(longlong **)(plVar1[2] + lVar5 * 8);
          if (DAT_02787950 != 0) {
            FUN_00d50b00();
          }
          local_50 = lVar2;
          local_48 = '\0';
          FUN_00ca13a0();
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          lVar5 = lVar5 + 1;
          local_60 = CONCAT44(local_60._4_4_,(int)lVar5);
        } while ((int)lVar5 < *(int *)((longlong)plVar1 + 0xc));
      }
      FUN_015ac3a0();
      FUN_00d50b20();
    }
  }
  return;
}


