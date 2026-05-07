// Function: FUN_01b8fc70
// Address: 01b8fc70
// Size: 1336 bytes
// Class: MUScaleModeSequence
// String references:
//   "MUScaleModeSequence"


/* WARNING: Removing unreachable block (ram,0x01b8fe89) */
/* WARNING: Removing unreachable block (ram,0x01b8fe92) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b8fc70(undefined4 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  void *pvVar8;
  longlong lVar9;
  pthread_key_t pVar10;
  longlong *in_RCX;
  undefined8 uVar11;
  char *pcVar12;
  longlong lVar13;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  if ((longlong *)unaff_RDI[0x3f] == (longlong *)0x0) goto LAB_01b8fe49;
  plVar1 = (longlong *)*unaff_RSI;
  if (plVar1 == (longlong *)unaff_RDI[0x3f]) {
    pvVar8 = _pthread_getspecific((pthread_key_t)in_RCX);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510030();
    lVar2 = local_58;
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_48 = lVar2;
    local_40[0] = '\0';
    param_1 = FUN_01b6d800();
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      param_1 = FUN_00d50b20();
    }
    if (lVar2 != 0) {
      param_1 = FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      param_1 = FUN_00d50b20();
    }
    goto LAB_01b8fe49;
  }
  if ((DAT_027be908 == '\0') &&
     (iVar7 = ___cxa_guard_acquire(), param_1 = extraout_XMM0_Da_00, iVar7 != 0)) {
    _DAT_027be858 = FUN_010ec850();
    _DAT_027be840 = "MUScaleModeSequence";
    _DAT_027be848 = 0x70;
    _DAT_027be850 = FUN_0124b550;
    _DAT_027be860 = 0;
    uRam00000000027be868 = 0;
    _DAT_027be870 = 0;
    uRam00000000027be878 = 0;
    _DAT_027be880 = 0;
    uRam00000000027be888 = 0;
    _DAT_027be890 = 0;
    uRam00000000027be898 = 0;
    _DAT_027be8a0 = 0;
    uRam00000000027be8a8 = 0;
    _DAT_027be8b0 = 0;
    uRam00000000027be8b8 = 0;
    _DAT_027be8c0 = 0;
    uRam00000000027be8c8 = 0;
    _DAT_027be8d0 = 0;
    uRam00000000027be8d8 = 0;
    _DAT_027be8e0 = 0;
    uRam00000000027be8e8 = 0;
    _DAT_027be8f0 = 0;
    uRam00000000027be8f8 = 0;
    _DAT_027be900 = 0;
    param_1 = ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_01b8fcdc:
    in_RCX = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    in_RCX = unaff_RSI;
    param_1 = extraout_XMM0_Da;
    if (cVar4 == '\0') goto LAB_01b8fcdc;
  }
  if (*in_RCX != 0) {
    pvVar8 = _pthread_getspecific((pthread_key_t)in_RCX);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510030();
    lVar2 = local_58;
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_48 = lVar2;
    local_40[0] = '\0';
    param_1 = FUN_01b6d800();
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      param_1 = FUN_00d50b20();
    }
    if (lVar2 != 0) {
      param_1 = FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      param_1 = FUN_00d50b20();
    }
  }
LAB_01b8fe49:
  pVar10 = (pthread_key_t)in_RCX;
  local_68 = *param_2;
  local_60 = '\0';
  FUN_01b68d40(param_1,&local_68);
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  cVar4 = (**(code **)(*unaff_RDI + 0xa78))();
  *(undefined1 *)(unaff_RDI + 0x40) = 1;
  if (unaff_RDI[0x3f] != 0) {
    FUN_00d50b00();
    lVar2 = unaff_RDI[0x3f];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    pvVar8 = _pthread_getspecific(pVar10);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510d50();
    lVar13 = local_48;
    pvVar8 = _pthread_getspecific(pVar10);
    lVar3 = local_48;
    if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar13 = lVar3, lVar9 != 0)) {
      lVar13 = *(longlong *)(lVar3 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
    }
    iVar7 = *(int *)(*(longlong *)(lVar13 + 0x48) + 0x18);
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (iVar7 + 7U < 0xf) {
      lVar2 = unaff_RDI[0x3f];
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      pvVar8 = _pthread_getspecific(pVar10);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01510d50();
      pvVar8 = _pthread_getspecific(pVar10);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar11 = 0;
      FUN_01252670(0,0,0,0);
      lVar13 = local_48;
      pVar10 = (pthread_key_t)CONCAT71((int7)((ulonglong)uVar11 >> 8),local_40[0]);
      pcVar12 = local_38;
      if (local_40[0] != '\0') {
        pcVar12 = local_40;
      }
      local_38[0] = local_40[0];
      *pcVar12 = '\0';
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      pvVar8 = _pthread_getspecific(pVar10);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar5 = FUN_0173f250();
      *(undefined1 *)(unaff_RDI + 0x40) = uVar5;
      if ((local_38[0] != '\0') && (lVar13 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
  }
  cVar6 = (**(code **)(*unaff_RDI + 0xa78))();
  if (cVar4 != cVar6) {
    (**(code **)(*unaff_RDI + 0x620))();
  }
  return;
}


