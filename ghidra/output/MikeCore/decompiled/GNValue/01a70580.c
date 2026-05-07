// Function: FUN_01a70580
// Address: 01a70580
// Size: 987 bytes
// Class: GNValue


undefined8 FUN_01a70580(pthread_key_t param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  void *pvVar6;
  uint7 uVar7;
  uint7 extraout_var;
  uint7 extraout_var_00;
  uint7 extraout_var_01;
  uint7 extraout_var_02;
  uint7 extraout_var_03;
  ulonglong uVar8;
  char *pcVar9;
  longlong *unaff_RDI;
  ulonglong local_68;
  ulonglong local_60;
  undefined4 local_54;
  longlong local_50;
  char local_48;
  ulonglong local_40;
  char local_38 [8];
  char local_30 [8];
  
  cVar2 = (**(code **)(*unaff_RDI + 0xa78))();
  if (cVar2 == '\0') {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(*unaff_RDI + 0x9d0))();
    if (((char)uVar4 != '\0') && (param_2 != '\0')) {
      uVar5 = (**(code **)(*unaff_RDI + 0x9d8))();
      local_68 = uVar5;
      local_60 = (**(code **)(*unaff_RDI + 0x9e0))();
      if ((char)unaff_RDI[0x40] == '\0') {
        if (uVar5 >> 0x20 == 0) {
          if (local_60 >> 0x20 == 0) {
            bVar1 = false;
            uVar5 = 0;
          }
          else {
            FUN_01b6d0d0();
            pvVar6 = _pthread_getspecific(param_1);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_54 = 1;
            local_40 = local_60;
            FUN_00e7c260();
            uVar8 = local_40;
            FUN_012521f0(local_40,0,0,&local_60);
            uVar5 = local_40;
            param_1 = (pthread_key_t)CONCAT71((int7)(uVar8 >> 8),local_38[0]);
            pcVar9 = local_30;
            if (local_38[0] != '\0') {
              pcVar9 = local_38;
            }
            local_30[0] = local_38[0];
            *pcVar9 = '\0';
            if ((local_38[0] != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if (uVar5 == 0) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
              if (local_30[0] == '\0') {
                FUN_00d50b00();
              }
            }
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          FUN_01b6d0d0();
          pvVar6 = _pthread_getspecific(param_1);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_54 = 1;
          local_40 = local_68;
          FUN_00e7c280();
          uVar8 = local_40;
          FUN_012521f0(local_40,0,&local_68,0);
          uVar5 = local_40;
          param_1 = (pthread_key_t)CONCAT71((int7)(uVar8 >> 8),local_38[0]);
          pcVar9 = local_30;
          if (local_38[0] != '\0') {
            pcVar9 = local_38;
          }
          local_30[0] = local_38[0];
          *pcVar9 = '\0';
          if ((local_38[0] != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (uVar5 == 0) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
            if (local_30[0] == '\0') {
              FUN_00d50b00();
            }
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
        FUN_01b6d0d0();
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_38[0] = '\0';
        local_40 = uVar5;
        FUN_012502a0(local_60,local_68,(char)unaff_RDI[0x36]);
        uVar7 = extraout_var_00;
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
          uVar7 = extraout_var_01;
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
          uVar7 = extraout_var_02;
        }
        if ((bVar1) && (uVar5 != 0)) {
          FUN_00d50b20();
          uVar7 = extraout_var_03;
        }
      }
      else {
        bVar3 = (**(code **)(*unaff_RDI + 0x9e8))();
        FUN_01b6d0d0();
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_40 = 0;
        local_38[0] = '\0';
        FUN_012502a0(local_60,local_68,(char)unaff_RDI[0x36]);
        if ((local_38[0] != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        uVar7 = (uint7)(local_68 >> 0x28);
        if ((bVar3 & local_68 >> 0x20 != 0) == 1) {
          FUN_01a68710();
          uVar7 = extraout_var;
        }
      }
      uVar4 = CONCAT71(uVar7,1);
    }
  }
  return uVar4;
}


