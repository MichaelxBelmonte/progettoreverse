// Function: FUN_00b8c7f0
// Address: 00b8c7f0
// Size: 1023 bytes
// Class: GNString
// String references:
//   "GNString"
//   "GNDictionary"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_00b8c7f0(undefined4 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  char *pcVar7;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong **pplVar8;
  longlong lVar9;
  longlong local_80;
  char local_78;
  longlong *local_70;
  char local_68 [8];
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  char local_38 [8];
  
  lVar9 = *(longlong *)(unaff_RSI + 0x40);
  if (lVar9 != 0) {
    param_1 = FUN_00d50b00();
  }
  lVar3 = DAT_02765240;
  if (DAT_02765240 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_80 = lVar3;
  local_78 = '\x01';
  FUN_000175c0(param_1,&local_80);
  plVar1 = local_70;
  if ((DAT_026fdd40 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
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
  pplVar8 = (longlong **)&DAT_02802688;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 != '\0') {
      if ((DAT_026fd0c0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
        _DAT_026d5e58 = FUN_00d4fe50();
        DAT_026d5e40 = "GNString";
        _DAT_026d5e48 = 0x40;
        _DAT_026d5e50 = FUN_0005d920;
        _DAT_026d5e60 = 0;
        uRam00000000026d5e68 = 0;
        _DAT_026d5e70 = 0;
        uRam00000000026d5e78 = 0;
        _DAT_026d5e80 = 0;
        uRam00000000026d5e88 = 0;
        _DAT_026d5e90 = 0;
        uRam00000000026d5e98 = 0;
        _DAT_026d5ea0 = 0;
        uRam00000000026d5ea8 = 0;
        _DAT_026d5eb0 = 0;
        uRam00000000026d5eb8 = 0;
        _DAT_026d5ec0 = 0;
        uRam00000000026d5ec8 = 0;
        _DAT_026d5ed0 = 0;
        uRam00000000026d5ed8 = 0;
        _DAT_026d5ee0 = 0;
        uRam00000000026d5ee8 = 0;
        _DAT_026d5ef0 = 0;
        uRam00000000026d5ef8 = 0;
        _DAT_026d5f00 = 0;
        ___cxa_guard_release();
      }
      cVar5 = FUN_00e8db60();
      pplVar8 = &local_70;
      if (cVar5 == '\0') {
        pplVar8 = (longlong **)&DAT_02802688;
      }
    }
  }
  plVar1 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar8 + 1) = 0;
  }
  if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00ca1380();
    plVar4 = local_70;
    pcVar7 = local_38;
    if (local_68[0] != '\0') {
      pcVar7 = local_68;
    }
    local_38[0] = local_68[0];
    *pcVar7 = '\0';
    if ((local_68[0] != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_38[0] == '\0') {
      if (plVar4 == (longlong *)0x0) goto LAB_00b8ca22;
      FUN_00d50b00();
    }
    else if (plVar4 == (longlong *)0x0) goto LAB_00b8ca22;
    local_68[0] = '\0';
    local_70 = (longlong *)0x0;
    local_60 = plVar4;
    local_50 = 0;
    local_58 = 0;
    if (0 < *(int *)((longlong)plVar4 + 0xc)) {
      lVar9 = 0;
      do {
        plVar2 = *(longlong **)(plVar4[2] + lVar9 * 8);
        local_70 = plVar2;
        FUN_007b8a50();
        pplVar8 = (longlong **)&DAT_02802688;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x360))();
          cVar5 = FUN_00e85ea0();
          pplVar8 = &local_70;
          if (cVar5 == '\0') {
            pplVar8 = (longlong **)&DAT_02802688;
          }
        }
        plVar2 = *pplVar8;
        if (*(char *)(pplVar8 + 1) == '\0') {
          if (plVar2 != (longlong *)0x0) {
            FUN_00d50b00();
            goto LAB_00b8ca54;
          }
        }
        else {
          *(undefined1 *)(pplVar8 + 1) = 0;
          if (plVar2 != (longlong *)0x0) {
LAB_00b8ca54:
            *unaff_RDI = (longlong)plVar2;
            *(undefined1 *)(unaff_RDI + 1) = 1;
            FUN_00083b20();
            FUN_00d50b20();
            goto LAB_00b8ca2d;
          }
        }
        lVar9 = lVar9 + 1;
        local_58 = CONCAT44(local_58._4_4_,(int)lVar9);
      } while ((int)lVar9 < *(int *)((longlong)plVar4 + 0xc));
    }
    FUN_00083b20();
    FUN_00d50b20();
  }
LAB_00b8ca22:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
LAB_00b8ca2d:
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


