// Function: FUN_015f66f0
// Address: 015f66f0
// Size: 1316 bytes
// Class: MUAudioFileSource
// String references:
//   "MUAudioFileSource"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_015f66f0(void)

{
  double dVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  longlong lVar9;
  pthread_key_t pVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar13;
  undefined1 auVar14 [16];
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  char local_40;
  char local_31;
  
  plVar12 = (longlong *)*unaff_RSI;
  if ((DAT_026fdd70 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_026e3238 = FUN_00115af0();
    DAT_026e3220 = "MUAudioFileSource";
    _DAT_026e3228 = 0xa0;
    _DAT_026e3230 = FUN_00136df0;
    _DAT_026e3240 = 0;
    uRam00000000026e3248 = 0;
    _DAT_026e3250 = 0;
    uRam00000000026e3258 = 0;
    _DAT_026e3260 = 0;
    uRam00000000026e3268 = 0;
    _DAT_026e3270 = 0;
    uRam00000000026e3278 = 0;
    _DAT_026e3280 = 0;
    uRam00000000026e3288 = 0;
    _DAT_026e3290 = 0;
    uRam00000000026e3298 = 0;
    _DAT_026e32a0 = 0;
    uRam00000000026e32a8 = 0;
    _DAT_026e32b0 = 0;
    uRam00000000026e32b8 = 0;
    _DAT_026e32c0 = 0;
    uRam00000000026e32c8 = 0;
    _DAT_026e32d0 = 0;
    uRam00000000026e32d8 = 0;
    _DAT_026e32e0 = 0;
    ___cxa_guard_release();
  }
  if (plVar12 == (longlong *)0x0) {
LAB_015f673f:
    plVar12 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar12 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar12 = unaff_RSI;
    if (cVar4 == '\0') goto LAB_015f673f;
  }
  local_31 = (char)plVar12[1];
  if ((local_31 == '\0') || (*plVar12 == 0)) {
    if (*plVar12 != 0) goto LAB_015f676b;
    local_40 = '\0';
    local_48 = 0;
    bVar2 = true;
LAB_015f6a9c:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    goto joined_r0x015f6aad;
  }
  FUN_00d50b00();
LAB_015f676b:
  pVar10 = (pthread_key_t)plVar12;
  pvVar8 = _pthread_getspecific(pVar10);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0123b100();
  lVar9 = local_48;
  if (local_40 == '\0') {
    if (local_48 == 0) goto LAB_015f6a57;
    FUN_00d50b00();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_48 == 0) {
LAB_015f6a57:
    bVar2 = false;
    goto LAB_015f6a9c;
  }
  local_58 = lVar9;
  uVar13 = FUN_00b88640();
  local_78 = DAT_02765240;
  if (DAT_02765240 != 0) {
    uVar13 = FUN_00d50b00();
  }
  local_70 = '\x01';
  uVar13 = FUN_000175c0(uVar13,&local_78);
  local_50 = local_48;
  if (local_40 == '\0') {
    if (((local_48 != 0) && (uVar13 = FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
      uVar13 = FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    uVar13 = FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    uVar13 = FUN_00d50b20();
  }
  lVar9 = DAT_027656f0;
  if (local_50 == 0) {
LAB_015f6ac6:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    if (DAT_027656f0 != 0) {
      uVar13 = FUN_00d50b00();
    }
    lVar3 = local_50;
    local_68 = lVar9;
    local_60 = '\x01';
    FUN_000175c0(uVar13,&local_68);
    lVar9 = local_48;
    if (local_40 == '\0') {
      if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (lVar9 == 0) {
LAB_015f6abd:
      FUN_00d50b20();
      goto LAB_015f6ac6;
    }
    cVar4 = FUN_00bc0dc0();
    if ((cVar4 == '\0') || (iVar5 = FUN_00bc0db0(), iVar5 < 1)) {
LAB_015f6ab1:
      FUN_00d50b20();
      goto LAB_015f6abd;
    }
    plVar12 = (longlong *)*unaff_RSI;
    pvVar8 = _pthread_getspecific(pVar10);
    if (pvVar8 != (void *)0x0) {
      plVar12 = (longlong *)*unaff_RSI;
      lVar9 = FUN_00e8b990();
      if (lVar9 != 0) {
        plVar12 = (longlong *)plVar12[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
      }
    }
    dVar1 = (double)(**(code **)(*plVar12 + 0x398))();
    iVar5 = FUN_00bc0db0();
    iVar6 = FUN_00bc0d90();
    iVar7 = FUN_00bc0da0();
    dVar1 = DAT_023b4df8 / (dVar1 / (double)iVar5);
    uVar11 = iVar7 - 1;
    pVar10 = CONCAT31((int3)(uVar11 >> 8),uVar11 < 2);
    auVar14._0_4_ = -(uint)(iVar7 == _DAT_02411230);
    auVar14._4_4_ = -(uint)(iVar7 == _UNK_02411234);
    auVar14._8_4_ = -(uint)(iVar7 == _UNK_02411238);
    auVar14._12_4_ = -(uint)(iVar7 == _UNK_0241123c);
    iVar5 = movmskps((int)lVar3,auVar14);
    if ((((dVar1 < DAT_023908b8) || (_DAT_024111b8 < dVar1)) || (iVar6 < 1)) ||
       ((iVar7 * 8 < iVar6 || (iVar5 == 0 && (iVar7 != 4 && uVar11 >= 2))))) goto LAB_015f6ab1;
    FUN_016c0b50(pVar10,iVar7);
    lVar9 = local_48;
    if (((local_40 == '\0') && (local_48 != 0)) &&
       ((FUN_00d50b00(), local_40 != '\0' && (local_48 != 0)))) {
      FUN_00d50b20();
    }
    pvVar8 = _pthread_getspecific(pVar10);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c1150();
    *unaff_RDI = lVar9;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    FUN_00d50b20();
    FUN_00d50b20();
  }
  FUN_00d50b20();
  bVar2 = false;
joined_r0x015f6aad:
  if ((local_31 != '\0') && (!bVar2)) {
    FUN_00d50b20();
  }
  return;
}


