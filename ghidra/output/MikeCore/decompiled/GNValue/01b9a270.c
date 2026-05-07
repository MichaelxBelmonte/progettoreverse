// Function: FUN_01b9a270
// Address: 01b9a270
// Size: 1004 bytes
// Class: GNValue


char FUN_01b9a270(pthread_key_t param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  ulonglong uVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  longlong *unaff_RDI;
  ulonglong local_70;
  ulonglong local_68;
  undefined4 local_60 [2];
  char local_58 [8];
  ulonglong local_50;
  char local_48 [8];
  longlong local_40;
  char local_38;
  char local_30 [8];
  
  cVar2 = (**(code **)(*unaff_RDI + 0xa78))();
  if (cVar2 == '\0') {
    cVar2 = '\0';
  }
  else {
    cVar2 = (**(code **)(*unaff_RDI + 0x9d0))();
    if ((cVar2 != '\0') && (param_2 != '\0')) {
      uVar3 = (**(code **)(*unaff_RDI + 0x9d8))();
      local_70 = uVar3;
      local_68 = (**(code **)(*unaff_RDI + 0x9e0))();
      if (uVar3 >> 0x20 == 0) {
        if (local_68 >> 0x20 == 0) {
          FUN_01b6d0d0();
          pvVar4 = _pthread_getspecific(param_1);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          puVar7 = local_60;
          FUN_01252670(puVar7,0,local_58,0);
          uVar3 = local_50;
          pVar5 = (pthread_key_t)CONCAT71((int7)((ulonglong)puVar7 >> 8),local_48[0]);
          pcVar8 = local_30;
          if (local_48[0] != '\0') {
            pcVar8 = local_48;
          }
          local_30[0] = local_48[0];
          *pcVar8 = '\0';
          if ((local_48[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (uVar3 == 0) {
            uVar3 = 0;
            bVar1 = false;
          }
          else {
            bVar1 = true;
            if (local_30[0] == '\0') {
              FUN_00d50b00();
            }
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          FUN_01b6d0d0();
          pvVar4 = _pthread_getspecific(param_1);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_60[0] = 1;
          local_50 = local_68;
          FUN_00e7c260();
          uVar6 = local_50;
          FUN_012521f0(local_50,0,0,&local_68);
          uVar3 = local_50;
          pVar5 = (pthread_key_t)CONCAT71((int7)(uVar6 >> 8),local_48[0]);
          pcVar8 = local_58;
          if (local_48[0] != '\0') {
            pcVar8 = local_48;
          }
          local_58[0] = local_48[0];
          *pcVar8 = '\0';
          if ((local_48[0] != '\0') && (uVar3 != 0)) {
            FUN_00d50b20();
          }
          if (uVar3 == 0) {
            uVar3 = 0;
            bVar1 = false;
          }
          else {
            bVar1 = true;
            if (local_58[0] == '\0') {
              FUN_00d50b00();
            }
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        FUN_01b6d0d0();
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_60[0] = 1;
        local_50 = local_70;
        FUN_00e7c280();
        uVar6 = local_50;
        FUN_012521f0(local_50,0,&local_70,0);
        uVar3 = local_50;
        pVar5 = (pthread_key_t)CONCAT71((int7)(uVar6 >> 8),local_48[0]);
        pcVar8 = local_58;
        if (local_48[0] != '\0') {
          pcVar8 = local_48;
        }
        local_58[0] = local_48[0];
        *pcVar8 = '\0';
        if ((local_48[0] != '\0') && (uVar3 != 0)) {
          FUN_00d50b20();
        }
        if (uVar3 == 0) {
          uVar3 = 0;
          bVar1 = false;
        }
        else {
          bVar1 = true;
          if (local_58[0] == '\0') {
            FUN_00d50b00();
          }
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      if (((char)unaff_RDI[0x42] == '\0') && (uVar3 != 0)) {
        FUN_01b6d0d0();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_48[0] = '\0';
        local_50 = uVar3;
        FUN_012502a0(local_68,local_70,(char)unaff_RDI[0x36]);
        if ((local_48[0] != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_01b92310();
      }
      if ((bVar1) && (uVar3 != 0)) {
        FUN_00d50b20();
      }
      cVar2 = '\x01';
    }
  }
  return cVar2;
}


