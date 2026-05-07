// Function: FUN_01c73310
// Address: 01c73310
// Size: 948 bytes
// Class: GNString


bool FUN_01c73310(pthread_key_t param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  void *pvVar4;
  undefined8 uVar5;
  pthread_key_t pVar6;
  longlong *unaff_RDI;
  undefined1 uVar7;
  undefined1 local_88 [8];
  undefined1 local_80;
  undefined1 local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  longlong local_40;
  char local_38;
  
  lVar1 = unaff_RDI[0x31];
  if (lVar1 != 0) {
    pVar6 = param_1;
    FUN_00d50b00();
    FUN_00d50b20();
    if (param_2 != '\0') {
      lVar2 = unaff_RDI[0x31];
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      local_60 = '\x01';
      local_68 = lVar2;
      FUN_016cbba0();
      local_48 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      lVar2 = unaff_RDI[0x31];
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      pvVar4 = _pthread_getspecific(pVar6);
      if (pvVar4 == (void *)0x0) {
        local_58 = unaff_RDI[0x42];
      }
      else {
        FUN_00e8b990();
        local_58 = unaff_RDI[0x42];
      }
      if (local_58 != 0) {
        local_50 = 0;
        FUN_00d50b00();
      }
      local_50 = '\x01';
      pVar6 = 1;
      FUN_016e9c70(1,param_1);
      if ((local_50 != '\0') && (local_58 != 0)) {
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
        uVar7 = 1;
        FUN_01c44d20();
        lVar3 = local_40;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_80 = 1;
        uVar5 = FUN_00e7bdb0();
        FUN_01c45410(uVar5,local_88,param_3,param_4,uVar7);
        pVar6 = (pthread_key_t)uVar5;
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
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
        FUN_01c44d20();
        lVar3 = local_40;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_70 = 1;
        FUN_01c44700();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_01c62c70();
      if (unaff_RDI[0x31] != 0) {
        FUN_00d50b00();
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016c1150();
        FUN_00d50b20();
      }
      (**(code **)(*unaff_RDI + 0x620))();
      *(undefined1 *)(unaff_RDI + 0x3a) = 1;
      if (local_48 != 0) {
        FUN_00d50b20();
      }
    }
  }
  return lVar1 != 0;
}


