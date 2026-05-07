// Function: FUN_01703b00
// Address: 01703b00
// Size: 1370 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01703d40) */

ulonglong * FUN_01703b00(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  bool bVar2;
  ulonglong uVar3;
  char cVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  undefined4 *puVar7;
  undefined1 uVar8;
  ulonglong *unaff_RDI;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  ulonglong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  ulonglong local_c8;
  char local_c0;
  ulonglong local_b8;
  char local_b0;
  ulonglong local_a8;
  char local_a0;
  undefined4 local_94;
  ulonglong local_70;
  char local_68;
  undefined8 local_60;
  undefined4 local_58;
  int iStack_54;
  undefined8 local_50;
  undefined4 local_44;
  ulonglong local_40;
  
  local_44 = 0xffffffff;
  puVar7 = &local_58;
  FUN_01702c00(puVar7,param_2,&local_e0,&local_44);
  pVar6 = (pthread_key_t)puVar7;
  if ((local_68 == '\0') && (local_70 != 0)) {
    FUN_00d50b00();
  }
  local_40 = local_70;
  local_60 = local_e0;
  local_50 = param_2;
  bVar2 = false;
  if ((param_2 >> 0x20 == 0) || (bVar2 = false, iStack_54 == 0)) {
LAB_01703bbe:
    if (*param_1 != 0) goto LAB_01703bca;
LAB_01703d10:
    if (local_40 == 0) {
      uVar8 = 0;
      if ((char)param_1[1] == '\0') {
        uVar8 = 0;
      }
    }
    else {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      *param_1 = local_40;
      *(undefined1 *)(param_1 + 1) = 1;
      uVar8 = 0;
    }
  }
  else {
    cVar4 = FUN_00e7c020();
    if (cVar4 != '\0') {
      local_60 = CONCAT44(iStack_54,local_58);
      FUN_00e7bdb0();
      bVar2 = true;
      goto LAB_01703bbe;
    }
    bVar2 = false;
    if (*param_1 == 0) goto LAB_01703d10;
LAB_01703bca:
    uVar8 = 1;
    if (local_60._4_4_ != 0) {
      local_d8 = FUN_0123fff0();
      uVar1 = local_50;
      local_70 = local_50;
      FUN_00e7b820();
      if (((uVar1 >> 0x20 != 0) && (local_60._4_4_ != 0)) && (cVar4 = FUN_00e7c020(), cVar4 != '\0')
         ) {
        local_94 = local_44;
        FUN_01702c00(&local_d8,uVar1,&local_d0,&local_94);
        if ((local_68 == '\0') && (uVar1 != 0)) {
          FUN_00d50b00();
        }
        local_c8 = uVar1;
        local_c0 = '\0';
        FUN_01701ac0(local_d0,uVar1,&local_c8,0);
        pVar6 = (pthread_key_t)local_d0;
        if ((local_f8 != '\0') && (local_100 != 0)) {
          FUN_00d50b20();
        }
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
        local_60 = uVar1;
        if (uVar1 != 0) {
          FUN_00d50b20();
        }
      }
    }
  }
  if (((local_50._4_4_ == 0) || (iStack_54 == 0)) || (cVar4 = FUN_00e7c000(), cVar4 == '\0')) {
    if (!bVar2) {
      local_b8 = local_40;
      local_b0 = '\0';
      FUN_01701ac0(local_50,CONCAT44(iStack_54,local_58),&local_b8,0);
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar7 = &local_44;
    FUN_0165db00(puVar7,0);
    pVar6 = (pthread_key_t)puVar7;
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0165dca0();
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0165e830();
  }
  local_a8 = *param_1;
  local_a0 = '\0';
  FUN_01701ac0(local_60,local_50,&local_a8,uVar8);
  uVar1 = *param_1;
  if (uVar1 == local_70) {
    if (((char)param_1[1] != '\0') || (local_70 == 0)) {
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01703f9a;
    }
    if (local_68 == '\0') {
      FUN_00d50b00();
    }
  }
  else {
    uVar3 = param_1[1];
    if (local_68 == '\0') {
      if (local_70 != 0) {
        FUN_00d50b00();
      }
      *param_1 = local_70;
      if (((char)uVar3 != '\0') && (uVar1 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      *param_1 = local_70;
      if (((char)uVar3 != '\0') && (uVar1 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  *(undefined1 *)(param_1 + 1) = 1;
LAB_01703f9a:
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  FUN_017033e0();
  FUN_016f28b0();
  *(undefined1 *)(unaff_RDI + 1) = 0;
  uVar1 = *param_1;
  if ((char)param_1[1] == '\0') {
    if (uVar1 != 0) {
      FUN_00d50b00();
    }
    *unaff_RDI = uVar1;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    *unaff_RDI = uVar1;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


