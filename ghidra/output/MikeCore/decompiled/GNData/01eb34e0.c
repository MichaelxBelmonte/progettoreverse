// Function: FUN_01eb34e0
// Address: 01eb34e0
// Size: 1522 bytes
// Class: GNData
// String references:
//   "GNData"
//   "GNMultipleValue"


/* WARNING: Removing unreachable block (ram,0x01eb35b3) */
/* WARNING: Removing unreachable block (ram,0x01eb35bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01eb34e0(void)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *local_58;
  longlong local_50;
  char local_48;
  
  plVar5 = (longlong *)*unaff_RSI;
  if (plVar5 == (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x01eb3570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_RDI + 0x918))();
    return;
  }
  if ((DAT_0277a3a0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_026d3c38 = FUN_00d4fe50();
    _DAT_026d3c20 = "GNMultipleValue";
    _DAT_026d3c28 = 0x18;
    _DAT_026d3c30 = FUN_00050c70;
    _DAT_026d3c40 = 0;
    uRam00000000026d3c48 = 0;
    _DAT_026d3c50 = 0;
    uRam00000000026d3c58 = 0;
    _DAT_026d3c60 = 0;
    uRam00000000026d3c68 = 0;
    _DAT_026d3c70 = 0;
    uRam00000000026d3c78 = 0;
    _DAT_026d3c80 = 0;
    uRam00000000026d3c88 = 0;
    _DAT_026d3c90 = 0;
    uRam00000000026d3c98 = 0;
    _DAT_026d3ca0 = 0;
    uRam00000000026d3ca8 = 0;
    _DAT_026d3cb0 = 0;
    uRam00000000026d3cb8 = 0;
    _DAT_026d3cc0 = 0;
    uRam00000000026d3cc8 = 0;
    _DAT_026d3cd0 = 0;
    uRam00000000026d3cd8 = 0;
    _DAT_026d3ce0 = 0;
    ___cxa_guard_release();
  }
  (**(code **)(*plVar5 + 0x360))();
  cVar2 = FUN_00e85ea0();
  plVar5 = unaff_RSI;
  if (cVar2 == '\0') {
    plVar5 = &DAT_02802688;
  }
  lVar9 = plVar5[1];
  if (((char)lVar9 == '\0') || (*plVar5 == 0)) {
    if (*plVar5 != 0) goto LAB_01eb357b;
  }
  else {
    FUN_00d50b00();
LAB_01eb357b:
    FUN_00e987e0();
    if (local_48 == '\0') {
      if (local_50 == 0) goto LAB_01eb35ff;
      FUN_00d50b00();
LAB_01eb35c1:
      lVar8 = *unaff_RSI;
      lVar7 = unaff_RSI[1];
      if (lVar8 == local_50) {
        if ((char)lVar7 == '\0') {
          FUN_00d50b00();
          goto LAB_01eb36d3;
        }
      }
      else {
        FUN_00d50b00();
        *unaff_RSI = local_50;
        if (((char)lVar7 != '\0') && (lVar8 != 0)) {
          FUN_00d50b20();
        }
LAB_01eb36d3:
        *(undefined1 *)(unaff_RSI + 1) = 1;
      }
      FUN_00d50b20();
    }
    else {
      if (local_50 != 0) goto LAB_01eb35c1;
LAB_01eb35ff:
      *(undefined4 *)(unaff_RDI + 0x29) = 0xffffffff;
      lVar8 = 0;
      while( true ) {
        (**(code **)(*unaff_RDI + 0x4a0))();
        iVar4 = *(int *)(local_50 + 0xc);
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (iVar4 <= lVar8) break;
        if ((int)unaff_RDI[0x39] == 1) {
          FUN_00e992c0();
        }
        (**(code **)(*unaff_RDI + 0x4a0))();
        (**(code **)(**(longlong **)(*(longlong *)(local_50 + 0x10) + lVar8 * 8) + 0x918))();
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        lVar8 = lVar8 + 1;
      }
    }
    if ((char)lVar9 != '\0') {
      FUN_00d50b20();
    }
  }
  plVar5 = (longlong *)*unaff_RSI;
  FUN_00053ac0();
  if (plVar5 == (longlong *)0x0) {
    lVar8 = DAT_02802688;
    lVar9 = DAT_02802688;
    cVar2 = DAT_02802690;
    if (DAT_02802690 != '\0') goto LAB_01eb3754;
LAB_01eb3763:
    if (lVar9 == 0) {
      plVar5 = (longlong *)*unaff_RSI;
      if ((DAT_026d0220 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        _DAT_02789148 = FUN_00d4fe50();
        DAT_02789130 = "GNData";
        _DAT_02789138 = 0x28;
        _DAT_02789140 = FUN_000378a0;
        _DAT_02789150 = 0;
        uRam0000000002789158 = 0;
        _DAT_02789160 = 0;
        uRam0000000002789168 = 0;
        _DAT_02789170 = 0;
        uRam0000000002789178 = 0;
        _DAT_02789180 = 0;
        uRam0000000002789188 = 0;
        _DAT_02789190 = 0;
        uRam0000000002789198 = 0;
        _DAT_027891a0 = 0;
        uRam00000000027891a8 = 0;
        _DAT_027891b0 = 0;
        uRam00000000027891b8 = 0;
        _DAT_027891c0 = 0;
        uRam00000000027891c8 = 0;
        _DAT_027891d0 = 0;
        uRam00000000027891d8 = 0;
        _DAT_027891e0 = 0;
        uRam00000000027891e8 = 0;
        _DAT_027891f0 = 0;
        ___cxa_guard_release();
      }
      if (plVar5 == (longlong *)0x0) {
LAB_01eb37d6:
        unaff_RSI = &DAT_02802688;
      }
      else {
        (**(code **)(*plVar5 + 0x360))();
        cVar3 = FUN_00e85ea0();
        if (cVar3 == '\0') goto LAB_01eb37d6;
      }
      lVar9 = *unaff_RSI;
      lVar8 = unaff_RSI[1];
      if (((char)lVar8 == '\0') || (lVar9 == 0)) {
        if (lVar9 == 0) {
          return;
        }
      }
      else {
        FUN_00d50b00();
      }
      iVar4 = *(int *)(lVar9 + 0x18);
      (**(code **)(*unaff_RDI + 0x4a0))();
      iVar6 = iVar4 + 3;
      if (-1 < iVar4) {
        iVar6 = iVar4;
      }
      iVar4 = *(int *)(local_50 + 0xc);
      if (local_48 != '\0') {
        FUN_00d50b20();
      }
      if (iVar6 >> 2 == iVar4) {
        lVar7 = 0;
        local_58 = (longlong *)0x0;
        bVar1 = false;
        while( true ) {
          (**(code **)(*unaff_RDI + 0x4a0))();
          iVar4 = *(int *)(local_50 + 0xc);
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (iVar4 <= lVar7) break;
          (**(code **)(*unaff_RDI + 0x4a0))();
          plVar5 = *(longlong **)(*(longlong *)(local_50 + 0x10) + lVar7 * 8);
          if (local_58 == plVar5) {
            if ((!bVar1) && (local_58 != (longlong *)0x0)) {
              FUN_00d50b00();
              plVar5 = local_58;
              goto LAB_01eb38e0;
            }
          }
          else {
            if (plVar5 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            if ((bVar1) && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
LAB_01eb38e0:
            bVar1 = true;
            local_58 = plVar5;
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          (**(code **)(*local_58 + 0x928))(*(undefined4 *)(*(longlong *)(lVar9 + 0x10) + lVar7 * 4))
          ;
          lVar7 = lVar7 + 1;
        }
        if ((bVar1) && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      bVar1 = true;
      if ((char)lVar8 != '\0') {
        FUN_00d50b20();
      }
      goto LAB_01eb3781;
    }
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar5 = unaff_RSI;
    if (cVar2 == '\0') {
      plVar5 = &DAT_02802688;
    }
    lVar9 = *plVar5;
    cVar2 = (char)plVar5[1];
    lVar8 = lVar9;
    if (cVar2 == '\0') goto LAB_01eb3763;
LAB_01eb3754:
    lVar9 = 0;
    if (lVar8 == 0) goto LAB_01eb3763;
    FUN_00d50b00();
  }
  FUN_00d45870();
  (**(code **)(*unaff_RDI + 0x918))();
  bVar1 = false;
LAB_01eb3781:
  if ((cVar2 != '\0') && (!bVar1)) {
    FUN_00d50b20();
  }
  return;
}


