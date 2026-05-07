// Function: FUN_012c9e50
// Address: 012c9e50
// Size: 1259 bytes
// Class: MUAudioFileSource
// String references:
//   "%I"


undefined8 * FUN_012c9e50(longlong *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  longlong *plVar6;
  undefined8 **ppuVar7;
  int unaff_ESI;
  undefined8 *unaff_RDI;
  int iVar8;
  bool bVar9;
  undefined8 *local_a8;
  undefined4 local_a0;
  int local_9c;
  longlong local_98;
  char local_90;
  undefined4 local_84;
  longlong local_80;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40 [8];
  longlong *local_38;
  
  plVar6 = param_1;
  local_84 = param_2;
  FUN_01241e00();
  if ((((local_40[0] == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40[0] != '\0')) &&
     (local_48 != 0)) {
    FUN_00d50b20();
  }
  local_80 = local_48;
  plVar2 = (longlong *)FUN_00e8fc40();
  FUN_0118a5c0();
  (**(code **)(*plVar2 + 0x18))();
  local_38 = plVar2;
  pvVar3 = _pthread_getspecific((pthread_key_t)plVar6);
  if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
    lVar4 = local_38[0xd];
    plVar2 = local_38;
  }
  else {
    plVar2 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    lVar4 = plVar2[0xd];
    plVar6 = local_38;
  }
  pVar5 = (pthread_key_t)plVar6;
  if (lVar4 != local_48) {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
    plVar2[0xd] = local_48;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  pvVar3 = _pthread_getspecific(pVar5);
  lVar4 = DAT_027bed58;
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
    lVar4 = DAT_027bed58;
  }
  DAT_027bed58 = lVar4;
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  plVar6 = (longlong *)((ulonglong)param_1 & 0xffffffff);
  FUN_012c9ae0(plVar6,0);
  if ((local_40[0] == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  FUN_012ca540();
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific((pthread_key_t)plVar6);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    plVar6 = local_38;
  }
  pVar5 = (pthread_key_t)plVar6;
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012407c0();
  FUN_00d23310();
  ppuVar7 = &local_a8;
  if (local_40[0] != '\0') {
    ppuVar7 = (undefined8 **)local_40;
  }
  local_a8 = (undefined8 *)CONCAT71(local_a8._1_7_,local_40[0]);
  *(char *)ppuVar7 = '\0';
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_a8 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  FUN_012e89e0();
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (0 < unaff_ESI) {
    uVar1 = (undefined1)local_84;
    iVar8 = 1;
    do {
      local_a0 = 1;
      local_a8 = &DAT_024cc6f0;
      local_9c = iVar8;
      FUN_00d8cb40();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      pVar5 = (pthread_key_t)param_1;
      FUN_012c9ae0((pthread_key_t)param_1,uVar1);
      if ((local_40[0] == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
      }
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      pvVar3 = _pthread_getspecific(pVar5);
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        pVar5 = (pthread_key_t)local_38;
      }
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_98 = local_48;
      local_90 = '\0';
      FUN_012e6520();
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      bVar9 = iVar8 != unaff_ESI;
      iVar8 = iVar8 + 1;
    } while (bVar9);
  }
  *unaff_RDI = local_38;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (local_80 != 0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


