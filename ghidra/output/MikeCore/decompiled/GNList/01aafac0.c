// Function: FUN_01aafac0
// Address: 01aafac0
// Size: 1662 bytes
// Class: GNList
// String references:
//   "GNList"
//   "GNString"


/* WARNING: Removing unreachable block (ram,0x01aafd45) */
/* WARNING: Removing unreachable block (ram,0x01aafd4e) */
/* WARNING: Removing unreachable block (ram,0x01aafb4a) */
/* WARNING: Removing unreachable block (ram,0x01aafb4f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aafac0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  longlong **pplVar8;
  undefined8 *unaff_RDI;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  longlong *local_50;
  bool local_48;
  longlong *local_40;
  char local_38 [8];
  
  if ((((longlong *)*param_2 == (longlong *)0x0) ||
      (cVar5 = (**(code **)(*(longlong *)*param_2 + 0x3a0))(), cVar5 == '\0')) ||
     (cVar5 = FUN_00ce6e30(), cVar5 == '\0')) goto LAB_01aaff76;
  FUN_00ca1380();
  bVar11 = local_38[0] == '\0';
  local_50 = local_40;
  if (bVar11) {
    local_48 = false;
  }
  else {
    local_48 = true;
    local_38[0] = '\0';
  }
  local_48 = !bVar11;
  if ((DAT_027048b0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
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
  pplVar8 = (longlong **)&DAT_02802688;
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x360))();
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
      cVar5 = FUN_00e8da30();
      if (cVar5 == '\0') {
        pplVar8 = (longlong **)&DAT_02802688;
      }
      else {
        pplVar8 = &local_50;
      }
    }
  }
  local_58 = *pplVar8;
  if (*(char *)(pplVar8 + 1) == '\0') {
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar8 + 1) = 0;
  }
  if ((local_48 != false) && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_58 == (longlong *)0x0) goto LAB_01aaff76;
  (**(code **)(*(longlong *)*param_2 + 0x368))();
  plVar3 = local_50;
  if (local_48 == false) {
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = false;
  }
  local_40 = plVar3;
  local_38[0] = '\0';
  iVar6 = FUN_00d237a0();
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_48 != false) && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (iVar6 != -1) {
    FUN_00c9fe20();
    plVar3 = local_40;
    pplVar8 = (longlong **)local_38;
    if (local_38[0] == '\0') {
      pplVar8 = &local_50;
    }
    local_50 = (longlong *)CONCAT71(local_50._1_7_,local_38[0]);
    *(undefined1 *)pplVar8 = 0;
    if ((local_38[0] != '\0') && (plVar3 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar1 = *(longlong *)(plVar3[2] + (longlong)iVar6 * 8);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    if ((char)local_50 != '\0') {
      FUN_00d50b20();
    }
    FUN_017bf050();
    (**(code **)(*local_50 + 0x368))();
    plVar3 = local_40;
    if (local_38[0] == '\0') {
      if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38[0] = '\0';
    }
    if ((local_48 != false) && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    cVar5 = FUN_00d90870();
    if (cVar5 != '\0') {
      uVar7 = FUN_00d8c7a0();
      FUN_00d8f140(extraout_XMM0_Da,uVar7);
      plVar4 = local_40;
      if (((local_38[0] == '\0') && (local_40 != (longlong *)0x0)) &&
         ((FUN_00d50b00(), local_38[0] != '\0' && (local_40 != (longlong *)0x0)))) {
        FUN_00d50b20();
      }
      lVar2 = DAT_02704060;
      if (DAT_02704060 != 0) {
        FUN_00d50b00();
      }
      cVar5 = FUN_00d90870();
      uVar7 = extraout_XMM0_Da_00;
      if (lVar2 != 0) {
        uVar7 = FUN_00d50b20();
      }
      plVar10 = plVar4;
      if (cVar5 != '\0') {
        FUN_00d8f140(uVar7,1);
        plVar10 = local_40;
        plVar9 = plVar4;
        if (plVar4 != local_40) {
          if (local_38[0] != '\0') {
            if (plVar4 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            goto LAB_01aafe81;
          }
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          plVar9 = plVar10;
          if (plVar4 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
        plVar10 = plVar9;
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
LAB_01aafe81:
      uVar7 = FUN_017bf050();
      local_60 = '\0';
      local_68 = plVar10;
      (**(code **)(*local_50 + 0x400))(uVar7,&local_68);
      plVar4 = local_40;
      if (local_38[0] == '\0') {
        if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
           (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38[0] = '\0';
      }
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != false) && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar4 != (longlong *)0x0) {
        cVar5 = (**(code **)(*plVar4 + 0x3a0))();
        if ((cVar5 != '\0') && (cVar5 = FUN_00ce6e30(), cVar5 != '\0')) {
          *unaff_RDI = plVar4;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          if (plVar10 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if (plVar3 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          return;
        }
        FUN_00d50b20();
      }
      if (plVar10 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_01aaff76:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return;
}


