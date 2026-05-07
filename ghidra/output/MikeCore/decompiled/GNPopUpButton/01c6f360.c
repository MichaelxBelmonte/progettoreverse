// Function: FUN_01c6f360
// Address: 01c6f360
// Size: 974 bytes
// Class: GNPopUpButton


ulonglong FUN_01c6f360(pthread_key_t param_1,int param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  ulonglong uVar7;
  longlong *unaff_RDI;
  undefined8 uVar8;
  undefined1 local_98 [8];
  undefined1 local_90;
  undefined1 local_88 [8];
  undefined1 local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  longlong local_48;
  char local_40;
  char local_31;
  
  pVar6 = param_1;
  uVar4 = FUN_016bf360();
  uVar7 = (ulonglong)uVar4;
  if ((param_2 != 0) && (local_31 = (char)uVar4, local_31 != '\0')) {
    lVar1 = unaff_RDI[0x31];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_70 = '\x01';
    local_78 = lVar1;
    FUN_016cbba0();
    lVar1 = local_48;
    if (local_40 == '\0') {
      if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    lVar2 = unaff_RDI[0x31];
    local_68 = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_50 = lVar2;
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_58 = 0;
    lVar1 = unaff_RDI[0x42];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_58 = '\x01';
    pVar6 = param_3 & 0xff;
    local_60 = lVar1;
    FUN_016e5250(DAT_023908c8,param_1,1,(int)unaff_RDI[0x39]);
    lVar2 = local_50;
    lVar1 = local_68;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((int)unaff_RDI[0x39] == 0) {
      lVar2 = unaff_RDI[0x31];
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      FUN_01c44d20();
      lVar3 = local_48;
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_90 = 1;
      uVar8 = FUN_00e7bdb0();
      FUN_01c45410(uVar8,local_98);
      pVar6 = (pthread_key_t)uVar8;
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      lVar2 = unaff_RDI[0x31];
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      uVar8 = FUN_01c44d20();
      lVar3 = local_48;
      if (local_40 == '\0') {
        if (local_48 != 0) {
          uVar8 = FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_80 = 1;
      FUN_01c44700(uVar8,local_88);
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_01c62c70();
    lVar2 = unaff_RDI[0x31];
    if (lVar2 != 0) {
      FUN_00d50b00();
      pvVar5 = _pthread_getspecific(pVar6);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016c1150();
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RDI + 0x620))();
    *(undefined1 *)(unaff_RDI + 0x3a) = 1;
    uVar7 = CONCAT71((int7)((ulonglong)lVar2 >> 8),local_31);
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  return uVar7 & 0xffffffff;
}


