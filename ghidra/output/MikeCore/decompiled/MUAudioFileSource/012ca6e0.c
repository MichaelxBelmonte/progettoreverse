// Function: FUN_012ca6e0
// Address: 012ca6e0
// Size: 1260 bytes
// Class: MUAudioFileSource
// String references:
//   "%I"


undefined8 * FUN_012ca6e0(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  ulonglong uVar6;
  undefined8 **ppuVar7;
  uint unaff_ESI;
  undefined8 *unaff_RDI;
  uint uVar8;
  bool bVar9;
  undefined8 *local_a0;
  undefined4 local_98;
  uint local_94;
  longlong local_90;
  char local_88;
  undefined4 local_7c;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48 [8];
  longlong local_40;
  longlong *local_38;
  
  local_7c = param_2;
  FUN_01240d70();
  if ((((local_48[0] == '\0') && (local_50 != 0)) && (FUN_00d50b00(), local_48[0] != '\0')) &&
     (local_50 != 0)) {
    FUN_00d50b20();
  }
  local_40 = local_50;
  plVar1 = (longlong *)FUN_00e8fc40();
  FUN_0118a5c0();
  (**(code **)(*plVar1 + 0x18))();
  local_38 = plVar1;
  pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
  if ((pvVar2 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
    lVar4 = local_38[0xd];
    plVar1 = local_38;
    if (lVar4 == local_40) goto LAB_012ca7cb;
  }
  else {
    lVar4 = ((longlong *)local_38[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4])[0xd];
    param_1 = local_38;
    plVar1 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
    if (lVar4 == local_40) goto LAB_012ca7cb;
  }
  if (local_40 != 0) {
    FUN_00d50b00();
  }
  plVar1[0xd] = local_40;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_012ca7cb:
  pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
  lVar3 = DAT_027bed58;
  if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar3 = DAT_027bed58, lVar4 != 0)) {
    param_1 = local_38;
  }
  DAT_027bed58 = lVar3;
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  FUN_012c9770();
  if ((local_48[0] == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  FUN_012ca540();
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    param_1 = local_38;
  }
  pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012407c0();
  FUN_00d23310();
  uVar6 = CONCAT71((int7)((ulonglong)param_1 >> 8),local_48[0]);
  ppuVar7 = &local_a0;
  if (local_48[0] != '\0') {
    ppuVar7 = (undefined8 **)local_48;
  }
  local_a0 = (undefined8 *)CONCAT71(local_a0._1_7_,local_48[0]);
  *(char *)ppuVar7 = '\0';
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_a0 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  FUN_012e89e0();
  plVar1 = local_38;
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (0 < (int)unaff_ESI) {
    uVar8 = 1;
    do {
      pVar5 = (pthread_key_t)uVar6;
      local_98 = 1;
      local_a0 = &DAT_024cc6f0;
      local_94 = uVar8;
      FUN_00d8cb40();
      if (local_58 == '\0') {
        if (local_60 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      FUN_012c9770();
      if ((local_48[0] == '\0') && (local_50 != 0)) {
        FUN_00d50b00();
      }
      if (local_60 != 0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific(pVar5);
      if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
        pVar5 = (pthread_key_t)local_38;
      }
      pvVar2 = _pthread_getspecific(pVar5);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_90 = local_50;
      local_88 = '\0';
      FUN_012e6520();
      plVar1 = local_38;
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      uVar6 = (ulonglong)(uVar8 + 1);
      bVar9 = uVar8 != unaff_ESI;
      uVar8 = uVar8 + 1;
    } while (bVar9);
  }
  *unaff_RDI = plVar1;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


