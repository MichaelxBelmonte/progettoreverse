// Function: FUN_0061a380
// Address: 0061a380
// Size: 1327 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_0061a380(pthread_key_t param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  void *pvVar6;
  ulonglong uVar7;
  byte unaff_SIL;
  longlong *unaff_RDI;
  double dVar8;
  undefined8 uVar9;
  longlong *local_78;
  char local_70;
  longlong local_50;
  char local_48;
  ulonglong local_40;
  char local_38;
  
  FUN_01f27fe0();
  cVar3 = (**(code **)(*local_78 + 0x450))();
  lVar1 = DAT_02708e90;
  if (cVar3 == '\0') {
    if (DAT_02708e90 != 0) {
      FUN_00d50b00();
    }
    FUN_00e7d6f0();
    param_1 = 0xaaaaaaab;
    uVar9 = FUN_0071a120();
    if ((((local_38 == '\0') && (local_40 != 0)) && (uVar9 = FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != 0)) {
      uVar9 = FUN_00d50b20();
    }
    local_50 = lVar1;
    local_48 = '\0';
    FUN_000175c0(uVar9,&local_50);
    uVar7 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (uVar7 != 0) {
      local_38 = '\0';
      local_40 = uVar7;
      unaff_SIL = FUN_00c70bc0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    bVar4 = uVar7 != 0 & unaff_SIL;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    bVar4 = 0;
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  param_2 = param_2 & 0xffffffff;
  if (bVar4 != 0) {
    (**(code **)(*unaff_RDI + 0x5e8))();
    if (local_40 == 0) {
      cVar3 = '\0';
    }
    else {
      (**(code **)(*unaff_RDI + 0x5e8))();
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar3 = FUN_004a1190();
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      FUN_01caeae0();
      uVar7 = local_40;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (uVar7 != 0) {
        FUN_01caeae0();
        FUN_01d66ab0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      uVar7 = 0;
      goto LAB_0061a89d;
    }
  }
  if ((char)param_2 != '\0') {
    FUN_00643ea0();
    FUN_006447a0();
    lVar1 = DAT_026e1800;
    if (DAT_026e1800 != 0) {
      FUN_00d50b00();
    }
    dVar8 = (double)FUN_00e7d6f0();
    uVar7 = (ulonglong)(dVar8 * DAT_023907c0);
    dVar8 = dVar8 * DAT_023907c0 - _DAT_023907c8;
    uVar9 = FUN_0071a120();
    param_2 = local_40;
    if ((((local_38 == '\0') && (local_40 != 0)) && (uVar9 = FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != 0)) {
      uVar9 = FUN_00d50b20();
    }
    bVar4 = (byte)(((longlong)dVar8 & (longlong)uVar7 >> 0x3f | uVar7) / 3);
    local_50 = lVar1;
    local_48 = '\0';
    FUN_000175c0(uVar9,&local_50);
    uVar7 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (uVar7 != 0) {
      local_38 = '\0';
      local_40 = uVar7;
      bVar4 = FUN_00c70bc0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((uVar7 != 0 & bVar4) != 0) {
      uVar5 = FUN_00643ea0();
      param_2 = (ulonglong)uVar5;
      cVar3 = FUN_00637950();
      if (uVar5 == 0xffffffff) {
        if ((cVar3 == '\0') && (cVar3 = FUN_00645730(), cVar3 != '\0')) goto LAB_0061a816;
      }
      else if ((cVar3 == '\0') && (cVar3 = FUN_00645730(), cVar3 == '\0')) {
LAB_0061a816:
        FUN_00645a20();
      }
    }
    FUN_00643150();
  }
  FUN_01caeae0();
  uVar2 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  uVar7 = CONCAT71((int7)(param_2 >> 8),1);
  if (uVar2 != 0) {
    FUN_01caeae0();
    FUN_00643ea0();
    FUN_01d66ab0();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
LAB_0061a89d:
  return uVar7 & 0xffffffff;
}


