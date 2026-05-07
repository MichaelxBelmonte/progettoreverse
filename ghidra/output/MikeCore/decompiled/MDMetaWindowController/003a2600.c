// Function: FUN_003a2600
// Address: 003a2600
// Size: 1149 bytes
// Class: MDMetaWindowController


/* WARNING: Removing unreachable block (ram,0x003a28e1) */
/* WARNING: Removing unreachable block (ram,0x003a28f1) */
/* WARNING: Removing unreachable block (ram,0x003a2a61) */
/* WARNING: Removing unreachable block (ram,0x003a2a6a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_003a2600(void)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  void *pvVar7;
  char *pcVar8;
  char *pcVar9;
  ulonglong uVar10;
  longlong *unaff_RSI;
  longlong lVar11;
  double dVar12;
  undefined8 uVar13;
  longlong local_70;
  char local_68 [8];
  longlong local_60;
  char local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  char local_38 [8];
  
  lVar1 = DAT_026f6de0;
  if (DAT_026f6de0 != 0) {
    FUN_00d50b00();
  }
  dVar12 = (double)FUN_00e7d6f0();
  uVar6 = (ulonglong)(dVar12 * DAT_023907c0);
  dVar12 = dVar12 * DAT_023907c0 - _DAT_023907c8;
  uVar13 = FUN_0071a120();
  if ((((local_58 == '\0') && (local_60 != 0)) && (uVar13 = FUN_00d50b00(), local_58 != '\0')) &&
     (local_60 != 0)) {
    uVar13 = FUN_00d50b20();
  }
  bVar3 = (byte)(((longlong)dVar12 & (longlong)uVar6 >> 0x3f | uVar6) / 3);
  local_70 = lVar1;
  local_68[0] = '\0';
  FUN_000175c0(uVar13,&local_70);
  lVar11 = local_60;
  if (local_58 == '\0') {
    if (((local_60 != 0) && (FUN_00d50b00(), local_58 != '\0')) && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_58 = '\0';
  }
  if ((local_68[0] != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (lVar11 != 0) {
    local_58 = '\0';
    local_60 = lVar11;
    bVar3 = FUN_00c70bc0();
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_026f6f08;
  if ((lVar11 != 0 & bVar3) == 0) {
LAB_003a2a7a:
    uVar4 = 0;
  }
  else {
    if (DAT_026f6f08 != 0) {
      FUN_00d50b00();
    }
    dVar12 = (double)FUN_00e7d6f0();
    uVar6 = (ulonglong)(dVar12 * DAT_023907c0);
    pcVar9 = (char *)((longlong)uVar6 >> 0x3f);
    uVar10 = (longlong)(dVar12 * DAT_023907c0 - _DAT_023907c8) & (ulonglong)pcVar9;
    uVar13 = FUN_0071a120();
    if ((((local_58 == '\0') && (local_60 != 0)) && (uVar13 = FUN_00d50b00(), local_58 != '\0')) &&
       (local_60 != 0)) {
      uVar13 = FUN_00d50b20();
    }
    bVar3 = (byte)((uVar10 | uVar6) / 3);
    local_70 = lVar1;
    local_68[0] = '\0';
    FUN_000175c0(uVar13,&local_70);
    lVar11 = local_60;
    if (local_58 == '\0') {
      if (((local_60 != 0) && (FUN_00d50b00(), local_58 != '\0')) && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_58 = '\0';
    }
    if ((local_68[0] != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (lVar11 != 0) {
      local_58 = '\0';
      local_60 = lVar11;
      bVar3 = FUN_00c70bc0();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((lVar11 != 0 & bVar3) == 0) {
      lVar1 = *unaff_RSI;
      if (lVar1 != 0) {
        local_58 = '\0';
        local_60 = 0;
        local_40 = 0;
        local_48 = 0;
        local_50 = lVar1;
        if (0 < *(int *)(lVar1 + 0xc)) {
          lVar11 = 0;
          do {
            local_60 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar11 * 8);
            pvVar7 = _pthread_getspecific((pthread_key_t)pcVar9);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01264240();
            lVar2 = local_70;
            local_38[0] = local_68[0];
            pcVar9 = local_38;
            pcVar8 = local_68;
            if (local_68[0] == '\0') {
              pcVar8 = pcVar9;
            }
            *pcVar8 = '\0';
            if ((local_68[0] != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
            if (lVar2 != 0) {
              pvVar7 = _pthread_getspecific((pthread_key_t)pcVar9);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              iVar5 = FUN_01326de0();
              if (local_38[0] != '\0') {
                FUN_00d50b20();
              }
              if (iVar5 == 3) {
                FUN_001159b0();
                goto LAB_003a2a7a;
              }
            }
            lVar11 = lVar11 + 1;
            local_48 = CONCAT44(local_48._4_4_,(int)lVar11);
          } while ((int)lVar11 < *(int *)(lVar1 + 0xc));
        }
        FUN_001159b0();
      }
      uVar4 = FUN_019ec420();
    }
    else {
      uVar4 = FUN_019ec420();
    }
  }
  return uVar4;
}


