// Function: FUN_01c73910
// Address: 01c73910
// Size: 1037 bytes
// Class: GNString


ulonglong FUN_01c73910(pthread_key_t param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  void *pvVar4;
  longlong lVar5;
  undefined8 uVar6;
  pthread_key_t pVar7;
  ulonglong uVar8;
  longlong *unaff_RDI;
  undefined1 local_88 [8];
  undefined1 local_80;
  undefined1 local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (unaff_RDI[0x31] == 0) {
    uVar8 = 0;
  }
  else {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar5 = unaff_RDI[0x31];
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar3 = FUN_016c2730();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if (param_2 == '\x01' && (char)uVar3 == '\0') {
      lVar5 = unaff_RDI[0x31];
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      local_60 = '\x01';
      local_68 = lVar5;
      FUN_016cbba0();
      lVar5 = local_40;
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
      lVar1 = unaff_RDI[0x31];
      local_58 = lVar5;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      pvVar4 = _pthread_getspecific(param_1);
      if ((pvVar4 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
        lVar5 = unaff_RDI[0x42];
      }
      else {
        lVar5 = unaff_RDI[0x42];
      }
      if (lVar5 != 0) {
        local_48 = 0;
        FUN_00d50b00();
      }
      local_48 = '\x01';
      pVar7 = 1;
      local_50 = lVar5;
      FUN_016ec420(1,0,(int)unaff_RDI[0x39]);
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      lVar5 = local_58;
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((int)unaff_RDI[0x39] == 0) {
        lVar1 = unaff_RDI[0x31];
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        FUN_01c44d20();
        lVar2 = local_40;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_80 = 1;
        uVar6 = FUN_00e7bdb0();
        FUN_01c45410(uVar6,local_88);
        pVar7 = (pthread_key_t)uVar6;
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        lVar1 = unaff_RDI[0x31];
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        FUN_01c44d20();
        lVar2 = local_40;
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
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_01c62c70();
      lVar1 = unaff_RDI[0x31];
      if (lVar1 != 0) {
        FUN_00d50b00();
        pvVar4 = _pthread_getspecific(pVar7);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016c1150();
        FUN_00d50b20();
      }
      (**(code **)(*unaff_RDI + 0x620))();
      *(undefined1 *)(unaff_RDI + 0x3a) = 1;
      uVar8 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      uVar8 = (ulonglong)uVar3 ^ 1;
    }
  }
  return uVar8 & 0xffffffff;
}


