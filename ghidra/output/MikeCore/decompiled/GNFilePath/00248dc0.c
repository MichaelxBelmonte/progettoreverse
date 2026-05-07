// Function: FUN_00248dc0
// Address: 00248dc0
// Size: 989 bytes
// Class: GNFilePath


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00248dc0(void)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  void *pvVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  ulonglong uVar8;
  longlong unaff_RDI;
  longlong *plVar9;
  bool bVar10;
  double dVar11;
  undefined8 uVar12;
  longlong local_70;
  char local_68;
  ulonglong local_60;
  char local_58;
  ulonglong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  uVar8 = DAT_026f6fa0;
  if (DAT_026f6fa0 != 0) {
    FUN_00d50b00();
  }
  dVar11 = (double)FUN_00e7d6f0();
  uVar4 = (ulonglong)(dVar11 * DAT_023907c0);
  dVar11 = dVar11 * DAT_023907c0 - _DAT_023907c8;
  pVar7 = 0xaaaaaaab;
  uVar12 = FUN_0071a120();
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
      (uVar12 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
    uVar12 = FUN_00d50b20();
  }
  bVar1 = (byte)(((longlong)dVar11 & (longlong)uVar4 >> 0x3f | uVar4) / 3);
  local_50 = uVar8;
  local_48 = '\0';
  FUN_000175c0(uVar12,&local_50);
  plVar9 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (plVar9 != (longlong *)0x0) {
    local_38 = '\0';
    local_40 = plVar9;
    bVar1 = FUN_00c70bc0();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (uVar8 != 0) {
    FUN_00d50b20();
  }
  if (((plVar9 != (longlong *)0x0 & bVar1) == 0) || (*(int *)(unaff_RDI + 0x198) == 1)) {
    uVar8 = 0;
    goto LAB_00248f32;
  }
  if (*(longlong *)(unaff_RDI + 0x1c0) == 0) {
LAB_00248f85:
    plVar9 = (longlong *)0x0;
  }
  else {
    FUN_006f3f00();
    plVar9 = local_40;
    if (local_38 == '\0') {
      if (local_40 == (longlong *)0x0) goto LAB_00248f85;
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  uVar3 = FUN_00788fb0();
  uVar8 = (ulonglong)uVar3;
  if (((char)uVar3 == '\0') && (*(int *)(unaff_RDI + 0x198) != 2)) {
    (**(code **)(*plVar9 + 0x628))();
    if (local_40 == (longlong *)0x0) {
      bVar10 = false;
    }
    else {
      (**(code **)(*plVar9 + 0x628))();
      uVar8 = local_50;
      pvVar5 = _pthread_getspecific(pVar7);
      uVar4 = local_50;
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), uVar8 = uVar4, lVar6 != 0)) {
        uVar8 = *(ulonglong *)(uVar4 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
      cVar2 = FUN_004a1190();
      if (cVar2 == '\0') {
        bVar10 = false;
      }
      else {
        (**(code **)(*plVar9 + 0x628))();
        pvVar5 = _pthread_getspecific(pVar7);
        uVar8 = local_60;
        if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          uVar8 = *(ulonglong *)(local_60 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
        }
        FUN_004a11a0();
        bVar10 = local_70 != 0;
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar8 = CONCAT71((int7)(uVar8 >> 8),1);
    if (bVar10) {
      (**(code **)(*plVar9 + 0x628))();
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_004a11a0();
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar3 = FUN_0170f820();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      uVar8 = (ulonglong)uVar3 ^ 1;
    }
  }
  else {
    uVar8 = (ulonglong)uVar3 ^ 1;
    if (plVar9 == (longlong *)0x0) goto LAB_00248f32;
  }
  FUN_00d50b20();
LAB_00248f32:
  return uVar8 & 0xffffffff;
}


