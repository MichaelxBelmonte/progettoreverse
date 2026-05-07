// Function: FUN_0164f500
// Address: 0164f500
// Size: 1318 bytes
// Class: MULSSGenerator


/* WARNING: Removing unreachable block (ram,0x0164f5e2) */
/* WARNING: Removing unreachable block (ram,0x0164f5eb) */
/* WARNING: Removing unreachable block (ram,0x0164fa0f) */
/* WARNING: Removing unreachable block (ram,0x0164fa1c) */

undefined8 FUN_0164f500(pthread_key_t param_1,char param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  void *pvVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  longlong lVar8;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_98;
  char local_90;
  undefined8 local_70;
  longlong local_60;
  char local_58;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_0184a0c0();
  lVar8 = *unaff_RSI;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    lVar8 = *unaff_RSI;
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
    }
  }
  lVar8 = *(longlong *)(lVar8 + 0xa8);
  if (lVar8 != 0) {
    FUN_00d50b00();
  }
  lVar5 = *unaff_RSI;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    lVar5 = *unaff_RSI;
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
    }
  }
  if (*(longlong *)(lVar5 + 0xa8) != 0) {
    *(undefined8 *)(lVar5 + 0xa8) = 0;
    FUN_00d50b20();
  }
  if ((lVar8 == 0) || (cVar3 = FUN_0131bcd0(), cVar3 != '\0')) {
    if (lVar8 == 0) {
      bVar2 = true;
      local_70 = 0;
      bVar1 = false;
    }
    else {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01505930();
      FUN_00d23310();
      param_1 = CONCAT31((int3)(param_1 >> 8),local_40[0]);
      pcVar7 = local_38;
      if (local_40[0] != '\0') {
        pcVar7 = local_40;
      }
      local_38[0] = local_40[0];
      *pcVar7 = '\0';
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c9740();
      if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      if ((local_38[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      lVar8 = DAT_02727928;
      if (DAT_02727928 != 0) {
        FUN_00d50b00();
      }
      local_40[0] = '\0';
      FUN_00ca13a0();
      if ((local_40[0] != '\0') && (lVar8 != 0)) {
        FUN_00d50b20();
      }
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
      lVar8 = DAT_02727930;
      if (DAT_02727930 != 0) {
        FUN_00d50b00();
      }
      local_40[0] = '\0';
      FUN_00ca13a0();
      if ((local_40[0] != '\0') && (lVar8 != 0)) {
        FUN_00d50b20();
      }
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
      lVar8 = DAT_02727938;
      if (DAT_02727938 != 0) {
        FUN_00d50b00();
      }
      local_40[0] = '\0';
      FUN_00ca13a0();
      if ((local_40[0] != '\0') && (lVar8 != 0)) {
        FUN_00d50b20();
      }
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_015058d0();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0150eb60();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01823610();
      if ((local_40[0] != '\0') && (lVar8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if (local_60 != 0) {
        FUN_00d50b20();
      }
      local_70 = 1;
      bVar2 = false;
      bVar1 = false;
    }
  }
  else {
    FUN_00d50b20();
    bVar2 = true;
    local_70 = 0;
    bVar1 = true;
  }
  FUN_0164e420();
  lVar8 = *unaff_RSI;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    lVar8 = *unaff_RSI;
    lVar5 = FUN_00e8b990();
    if (lVar5 != 0) {
      lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
    }
  }
  *(undefined1 *)(unaff_RDI + 0xb0) = *(undefined1 *)(lVar8 + 0xb0);
  if (param_2 != '\0') {
    lVar8 = *unaff_RSI;
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      lVar8 = *unaff_RSI;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
      }
    }
    *(undefined1 *)(unaff_RDI + 0xb1) = *(undefined1 *)(lVar8 + 0xb1);
  }
  FUN_01733c40();
  if (!bVar1 && !bVar2) {
    FUN_00d50b20();
  }
  return local_70;
}


