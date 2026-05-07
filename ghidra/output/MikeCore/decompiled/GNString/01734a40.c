// Function: FUN_01734a40
// Address: 01734a40
// Size: 1226 bytes
// Class: GNString
// String references:
//   "GNString"


/* WARNING: Removing unreachable block (ram,0x01734a80) */
/* WARNING: Removing unreachable block (ram,0x01734a8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01734a40(void)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  longlong lVar7;
  int iVar8;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong **pplVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar10;
  longlong local_c8;
  char local_c0;
  longlong local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong *local_60;
  char local_58;
  longlong local_50;
  undefined8 local_48;
  int local_40;
  char local_31;
  
  FUN_00d50f50();
  if ((*(longlong *)(unaff_RDI + 0x18) == unaff_RDI) && (*(longlong *)(unaff_RDI + 0x58) != 0)) {
    local_58 = '\0';
    local_60 = (longlong *)0x0;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_48._4_4_ = 0;
    local_50 = *(longlong *)(unaff_RDI + 0x58);
    while( true ) {
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar8 = -local_48._4_4_;
        }
        else {
          iVar8 = (int)local_48 - local_48._4_4_;
          local_48 = CONCAT44(local_48._4_4_,iVar8);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar8 = 0;
        }
        local_48 = CONCAT44(iVar8,(int)local_48);
      }
      lVar4 = (longlong)(int)local_48;
      iVar8 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar8);
      if (*(int *)(local_50 + 0xc) <= iVar8) break;
      lVar7 = *(longlong *)(local_50 + 0x10);
      local_60 = *(longlong **)(lVar7 + 8 + lVar4 * 8);
      pvVar5 = _pthread_getspecific((pthread_key_t)lVar7);
      pVar6 = (pthread_key_t)lVar7;
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01739bc0();
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if (local_c8 != unaff_RDI) {
        pvVar5 = _pthread_getspecific(pVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d50b00();
        FUN_01739bf0();
        if (unaff_RDI != 0) {
          FUN_00d50b20();
        }
      }
    }
    FUN_0176e380();
  }
  plVar1 = (longlong *)*unaff_RSI;
  FUN_0002c940();
  if (plVar1 == (longlong *)0x0) {
LAB_01734c3d:
    unaff_RSI = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01734c3d;
  }
  plVar1 = (longlong *)*unaff_RSI;
  local_31 = (char)unaff_RSI[1];
  if ((local_31 == '\0') || (plVar1 == (longlong *)0x0)) {
    if (plVar1 == (longlong *)0x0) {
      return;
    }
  }
  else {
    FUN_00d50b00();
  }
  lVar4 = DAT_027092b8;
  if (DAT_027092b8 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar1 + 0x590))();
  uVar10 = extraout_XMM0_Da;
  if (lVar4 != 0) {
    uVar10 = FUN_00d50b20();
  }
  lVar4 = DAT_027092b8;
  if (cVar3 == '\0') goto LAB_01734e52;
  if (DAT_027092b8 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_98 = lVar4;
  local_90 = '\x01';
  pplVar9 = &local_60;
  (**(code **)(*plVar1 + 0x578))(uVar10,&local_98);
  plVar1 = local_60;
  if ((DAT_026fd0c0 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
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
  if (plVar1 == (longlong *)0x0) {
LAB_01734d35:
    pplVar9 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01734d35;
  }
  plVar1 = *pplVar9;
  if (*(char *)(pplVar9 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar9 + 1) = 0;
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    local_80 = '\0';
    local_88 = plVar1;
    FUN_017aacd0();
    plVar1 = local_60;
    if (local_58 == '\0') {
      if (local_60 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    if (*(longlong **)(unaff_RDI + 0x38) != plVar1) {
      FUN_00d64850();
      plVar2 = *(longlong **)(unaff_RDI + 0x38);
      if (plVar2 != plVar1) {
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        *(longlong **)(unaff_RDI + 0x38) = plVar1;
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d64910();
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
LAB_01734e52:
  if (local_31 != '\0') {
    FUN_00d50b20();
  }
  return;
}


