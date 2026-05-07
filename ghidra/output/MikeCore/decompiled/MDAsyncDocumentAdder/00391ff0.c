// Function: FUN_00391ff0
// Address: 00391ff0
// Size: 658 bytes
// Class: MDAsyncDocumentAdder


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00391ff0(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  ulonglong uVar8;
  pthread_key_t pVar9;
  char *pcVar10;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  double dVar11;
  undefined8 uVar12;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*(char *)(unaff_RDI + 0x1f8) == '\0') {
    uVar8 = 0;
    goto LAB_00392271;
  }
  pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01264240();
  lVar2 = local_48;
  pVar9 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),local_40[0]);
  pcVar10 = local_38;
  if (local_40[0] != '\0') {
    pcVar10 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar10 = '\0';
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 == 0) {
LAB_003921df:
    local_58 = *unaff_RSI;
    local_50 = '\0';
    uVar6 = FUN_0195c3c0();
    uVar8 = (ulonglong)uVar6;
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    pvVar7 = _pthread_getspecific(pVar9);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar5 = FUN_01326de0();
    lVar1 = DAT_026f6f08;
    if (iVar5 != 3) goto LAB_003921df;
    if (DAT_026f6f08 != 0) {
      FUN_00d50b00();
    }
    dVar11 = (double)FUN_00e7d6f0();
    uVar8 = (ulonglong)(dVar11 * DAT_023907c0);
    dVar11 = dVar11 * DAT_023907c0 - _DAT_023907c8;
    uVar12 = FUN_0071a120();
    if ((((local_40[0] == '\0') && (local_48 != 0)) &&
        (uVar12 = FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != 0)) {
      uVar12 = FUN_00d50b20();
    }
    bVar4 = (byte)(((longlong)dVar11 & (longlong)uVar8 >> 0x3f | uVar8) / 3);
    local_68 = lVar1;
    local_60 = '\0';
    FUN_000175c0(uVar12,&local_68);
    lVar3 = local_48;
    if (local_40[0] == '\0') {
      if (((local_48 != 0) && (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40[0] = '\0';
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      local_40[0] = '\0';
      local_48 = lVar3;
      bVar4 = FUN_00c70bc0();
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    uVar8 = CONCAT71((int7)((ulonglong)lVar3 >> 8),lVar3 != 0 & bVar4);
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_38[0] != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
LAB_00392271:
  return uVar8 & 0xffffffff;
}


