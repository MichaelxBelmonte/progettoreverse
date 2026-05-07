// Function: FUN_019f5e40
// Address: 019f5e40
// Size: 803 bytes
// Class: MUAudioSourceAttackItem
// String references:
//   "MUAudioSourceAttackItem"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_019f5e40(pthread_key_t param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  void *pvVar8;
  ulonglong uVar9;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  double dVar10;
  double dVar11;
  
  plVar1 = (longlong *)*unaff_RDI;
  if ((DAT_02790f20 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
    _DAT_0272f7c8 = FUN_007ef2d0();
    _DAT_0272f7b0 = "MUAudioSourceAttackItem";
    _DAT_0272f7b8 = 0xe8;
    param_1 = 0x7ef270;
    _DAT_0272f7c0 = FUN_007ef270;
    _DAT_0272f7d0 = 0;
    uRam000000000272f7d8 = 0;
    _DAT_0272f7e0 = 0;
    uRam000000000272f7e8 = 0;
    _DAT_0272f7f0 = 0;
    uRam000000000272f7f8 = 0;
    _DAT_0272f800 = 0;
    uRam000000000272f808 = 0;
    _DAT_0272f810 = 0;
    uRam000000000272f818 = 0;
    _DAT_0272f820 = 0;
    uRam000000000272f828 = 0;
    _DAT_0272f830 = 0;
    uRam000000000272f838 = 0;
    _DAT_0272f840 = 0;
    uRam000000000272f848 = 0;
    _DAT_0272f850 = 0;
    uRam000000000272f858 = 0;
    _DAT_0272f860 = 0;
    uRam000000000272f868 = 0;
    _DAT_0272f870 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_019f5e89:
    unaff_RDI = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') goto LAB_019f5e89;
  }
  lVar2 = *unaff_RDI;
  lVar4 = unaff_RDI[1];
  if (((char)lVar4 != '\0') && (lVar2 != 0)) {
    FUN_00d50b00();
  }
  plVar1 = (longlong *)*unaff_RSI;
  if ((DAT_02790f20 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
    _DAT_0272f7c8 = FUN_007ef2d0();
    _DAT_0272f7b0 = "MUAudioSourceAttackItem";
    _DAT_0272f7b8 = 0xe8;
    param_1 = 0x7ef270;
    _DAT_0272f7c0 = FUN_007ef270;
    _DAT_0272f7d0 = 0;
    uRam000000000272f7d8 = 0;
    _DAT_0272f7e0 = 0;
    uRam000000000272f7e8 = 0;
    _DAT_0272f7f0 = 0;
    uRam000000000272f7f8 = 0;
    _DAT_0272f800 = 0;
    uRam000000000272f808 = 0;
    _DAT_0272f810 = 0;
    uRam000000000272f818 = 0;
    _DAT_0272f820 = 0;
    uRam000000000272f828 = 0;
    _DAT_0272f830 = 0;
    uRam000000000272f838 = 0;
    _DAT_0272f840 = 0;
    uRam000000000272f848 = 0;
    _DAT_0272f850 = 0;
    uRam000000000272f858 = 0;
    _DAT_0272f860 = 0;
    uRam000000000272f868 = 0;
    _DAT_0272f870 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_019f5ede:
    unaff_RSI = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') goto LAB_019f5ede;
  }
  lVar3 = *unaff_RSI;
  lVar5 = unaff_RSI[1];
  if (((char)lVar5 != '\0') && (lVar3 != 0)) {
    FUN_00d50b00();
  }
  if (lVar2 == lVar3) {
    uVar9 = 0;
  }
  else if (lVar2 == 0) {
    uVar9 = 1;
  }
  else {
    if (lVar3 == 0) {
      uVar9 = 0xffffffff;
      goto joined_r0x019f5fcd;
    }
    pvVar8 = _pthread_getspecific(param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar10 = (double)FUN_014bb640();
    pvVar8 = _pthread_getspecific(param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar11 = (double)FUN_014bb640();
    uVar9 = 0xffffffff;
    if (0.0 <= dVar10 - dVar11) {
      uVar9 = (ulonglong)(0.0 < dVar10 - dVar11);
    }
  }
  if (((char)lVar5 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
joined_r0x019f5fcd:
  if (((char)lVar4 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  return uVar9;
}


