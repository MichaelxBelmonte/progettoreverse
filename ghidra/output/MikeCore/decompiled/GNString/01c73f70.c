// Function: FUN_01c73f70
// Address: 01c73f70
// Size: 993 bytes
// Class: GNString


ulonglong FUN_01c73f70(pthread_key_t param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  void *pvVar6;
  longlong lVar7;
  undefined8 uVar8;
  pthread_key_t pVar9;
  ulonglong uVar10;
  longlong *unaff_RDI;
  undefined1 local_80 [8];
  undefined1 local_78;
  undefined1 local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (unaff_RDI[0x31] != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    cVar4 = FUN_016bf360();
    if ((cVar4 != '\0') && (cVar4 = FUN_016bf450(), cVar4 == '\0')) {
      uVar5 = FUN_016bf4e0();
      uVar10 = (ulonglong)uVar5 ^ 1;
      if (((char)uVar5 == '\0') && (param_2 != '\0')) {
        lVar1 = unaff_RDI[0x31];
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        local_58 = '\x01';
        local_60 = lVar1;
        FUN_016cbba0();
        lVar1 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        lVar2 = unaff_RDI[0x31];
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        pvVar6 = _pthread_getspecific(param_1);
        if ((pvVar6 == (void *)0x0) || (lVar7 = FUN_00e8b990(), lVar7 == 0)) {
          lVar7 = unaff_RDI[0x42];
        }
        else {
          lVar7 = unaff_RDI[0x42];
        }
        if (lVar7 != 0) {
          local_48 = 0;
          FUN_00d50b00();
        }
        local_48 = '\x01';
        pVar9 = *(pthread_key_t *)(unaff_RDI + 0x39);
        local_50 = lVar7;
        FUN_016d20d0(pVar9,1,1);
        if ((local_48 != '\0') && (local_50 != 0)) {
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
          lVar3 = local_40;
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          local_78 = 1;
          uVar8 = FUN_00e7bdb0();
          FUN_01c45410(uVar8,local_80);
          pVar9 = (pthread_key_t)uVar8;
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
          local_68 = 1;
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
          pvVar6 = _pthread_getspecific(pVar9);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_016c1150();
          FUN_00d50b20();
        }
        (**(code **)(*unaff_RDI + 0x620))();
        *(undefined1 *)(unaff_RDI + 0x3a) = 1;
        uVar10 = CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
      goto LAB_01c73fc8;
    }
  }
  uVar10 = 0;
LAB_01c73fc8:
  return uVar10 & 0xffffffff;
}


