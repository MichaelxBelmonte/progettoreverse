// Function: FUN_01a72180
// Address: 01a72180
// Size: 1406 bytes
// Class: GNValue


void FUN_01a72180(ulonglong param_1,undefined4 param_2)

{
  byte bVar1;
  ulonglong uVar2;
  char cVar3;
  ulonglong uVar4;
  void *pvVar5;
  undefined8 uVar6;
  char *pcVar7;
  pthread_key_t pVar8;
  uint unaff_ESI;
  longlong *unaff_RDI;
  ulonglong local_d8;
  undefined1 local_d0;
  ulonglong local_c8;
  undefined1 local_c0;
  ulonglong local_b8;
  char local_b0;
  undefined4 local_a4;
  undefined4 local_a0;
  uint local_9c;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  longlong local_80;
  char local_78;
  ulonglong local_70;
  int local_64;
  ulonglong local_60;
  byte local_58;
  ulonglong local_50;
  char local_48 [8];
  ulonglong local_40;
  char local_38 [8];
  
  local_a0 = param_2;
  local_9c = unaff_ESI;
  uVar4 = (**(code **)(*unaff_RDI + 0x9d8))();
  local_50 = uVar4;
  local_60 = (**(code **)(*unaff_RDI + 0x9e0))();
  if (((uVar4 >> 0x20 == 0) || (local_60 >> 0x20 == 0)) || (cVar3 = FUN_00e7c000(), cVar3 == '\0'))
  {
    local_58 = 0;
    local_60 = 0;
    local_a4 = 0xffffffff;
    local_40 = 0;
    local_70 = 0;
    local_64 = 0;
    while( true ) {
      pVar8 = (pthread_key_t)param_1;
      FUN_01b6d0d0();
      pvVar5 = _pthread_getspecific(pVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar6 = (**(code **)(*unaff_RDI + 0x9d8))();
      param_1 = (**(code **)(*unaff_RDI + 0x9e0))();
      cVar3 = FUN_01252960(param_1,uVar6,&local_60,&local_88);
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      uVar4 = local_70;
      if (cVar3 == '\0') break;
      if ((local_60 != 0) && (param_1 = 0, local_88 >> 0x20 != 0)) {
        pVar8 = (pthread_key_t)(local_98 >> 0x20);
        param_1 = 0;
        if (local_98 >> 0x20 != 0) {
          if (unaff_RDI[0x3f] == 0) {
            uVar4 = 0;
          }
          else {
            pvVar5 = _pthread_getspecific(pVar8);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01510d50();
            pvVar5 = _pthread_getspecific(pVar8);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012521f0(local_88,0,0,0);
            uVar4 = local_50;
            local_38[0] = local_48[0];
            pcVar7 = local_48;
            if (local_48[0] == '\0') {
              pcVar7 = local_38;
            }
            *pcVar7 = '\0';
            if ((local_48[0] != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            if (local_38[0] == '\0') {
              if (uVar4 == 0) {
                uVar4 = 0;
              }
              else {
                FUN_00d50b00();
              }
            }
            else {
              local_38[0] = '\0';
            }
            if ((local_78 != '\0') && (local_80 != 0)) {
              FUN_00d50b20();
            }
          }
          local_d8 = local_60;
          local_d0 = 0;
          local_c0 = 0;
          pVar8 = local_9c & 0xff;
          local_c8 = uVar4;
          local_90 = uVar4;
          FUN_01a72920((undefined1)local_9c,&local_d8,(undefined1)local_a0,&local_c8);
          uVar2 = local_50;
          bVar1 = local_58;
          uVar4 = local_60;
          if (local_60 == local_50) {
            if ((local_58 == 0) && (local_50 != 0)) {
              if (local_48[0] == '\0') {
                FUN_00d50b00();
              }
              goto LAB_01a724cc;
            }
            if ((local_48[0] != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (local_48[0] == '\0') {
              if (local_50 != 0) {
                FUN_00d50b00();
              }
              local_60 = uVar2;
              if ((bVar1 != 0) && (uVar4 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_60 = local_50;
              if ((local_58 != 0) && (uVar4 != 0)) {
                FUN_00d50b20();
              }
            }
LAB_01a724cc:
            local_58 = 1;
          }
          if (local_64 == 0) {
            uVar4 = local_40;
            (**(code **)(*unaff_RDI + 0xa48))();
            pVar8 = (pthread_key_t)uVar4;
          }
          FUN_01b6d0d0();
          pvVar5 = _pthread_getspecific(pVar8);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_50 = local_60;
          local_48[0] = '\0';
          param_1 = local_98;
          uVar6 = FUN_012502a0(local_98,local_88,0);
          if ((local_48[0] != '\0') && (local_50 != 0)) {
            uVar6 = FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            uVar6 = FUN_00d50b20();
          }
          bVar1 = local_58;
          uVar4 = local_60;
          if (local_64 == 0) {
            if (local_70 == local_60) {
              if (((local_58 != 0) && ((char)local_40 == '\0')) && (local_70 != 0)) {
                local_40 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
                FUN_00d50b00();
              }
            }
            else {
              if ((local_58 != 0) && (local_60 != 0)) {
                FUN_00d50b00();
              }
              if (((char)local_40 == '\0') || (local_70 == 0)) {
                local_40 = (ulonglong)(uint)bVar1;
                local_70 = uVar4;
              }
              else {
                local_70 = uVar4;
                FUN_00d50b20();
                local_40 = (ulonglong)(uint)bVar1;
              }
            }
          }
          local_64 = local_64 + 1;
          if (local_90 != 0) {
            FUN_00d50b20();
          }
        }
      }
    }
    if (local_64 != 0) {
      if (local_64 == 1) {
        local_b8 = local_60;
        local_b0 = '\0';
        (**(code **)(*unaff_RDI + 0xa80))(local_98,local_88);
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
      }
      (**(code **)(*unaff_RDI + 0xa50))();
    }
    if (((char)local_40 != '\0') && (uVar4 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != 0) && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}


