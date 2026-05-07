// Function: FUN_01b7cfc0
// Address: 01b7cfc0
// Size: 593 bytes
// Class: GNString


ulonglong FUN_01b7cfc0(pthread_key_t param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  void *pvVar6;
  undefined8 uVar7;
  pthread_key_t pVar8;
  char *pcVar9;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  cVar2 = (**(code **)(*unaff_RDI + 0x9a0))();
  if (cVar2 == '\0') {
    (**(code **)(*unaff_RDI + 0x370))();
    local_68 = *unaff_RSI;
    local_60 = '\0';
    uVar3 = (**(code **)(*local_48 + 0x3b8))();
    uVar5 = (ulonglong)uVar3;
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    cVar2 = (**(code **)(*unaff_RDI + 0x9d0))();
    if ((cVar2 != '\0') && (uVar5 = (**(code **)(*unaff_RDI + 0x9d8))(), uVar5 >> 0x20 != 0)) {
      lVar1 = unaff_RDI[0x2b];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar7 = (**(code **)(*unaff_RDI + 0x9d8))();
      FUN_012521f0(uVar7,0,local_70,local_78);
      pVar8 = (pthread_key_t)CONCAT71((int7)((ulonglong)uVar7 >> 8),local_40[0]);
      pcVar9 = local_38;
      if (local_40[0] != '\0') {
        pcVar9 = local_40;
      }
      local_38[0] = local_40[0];
      *pcVar9 = '\0';
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] == '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      local_58 = local_48;
      local_50 = '\x01';
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = unaff_RDI[0x2b];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      pvVar6 = _pthread_getspecific(pVar8);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar4 = FUN_012535e0(local_70,&local_58,local_78,0);
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((char)uVar4 != '\0') {
        if (param_2 != '\0') {
          (**(code **)(*unaff_RDI + 0x9f8))();
        }
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        return CONCAT71((uint7)(uint3)((uint)uVar4 >> 8),1);
      }
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    uVar5 = 0;
  }
  return uVar5;
}


