// Function: FUN_01b81d90
// Address: 01b81d90
// Size: 567 bytes
// Class: MUSpectrumShaper


ulonglong FUN_01b81d90(undefined8 param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined7 uVar8;
  longlong *unaff_RDI;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  char local_38;
  
  cVar3 = (**(code **)(*unaff_RDI + 0x9d0))();
  if (cVar3 == '\0') {
    puVar7 = (undefined1 *)0x0;
    goto LAB_01b81f95;
  }
  local_50 = FUN_00e7bdb0();
  local_48 = FUN_00e7bdb0();
  puVar6 = &local_48;
  FUN_01b70bd0(puVar6,&local_50);
  lVar1 = local_40;
  pVar5 = (pthread_key_t)puVar6;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if (*(int *)(lVar1 + 0xc) == 1) {
    local_60 = local_50;
    local_58 = local_48;
    local_38 = '\0';
    local_40 = 0;
    lVar1 = unaff_RDI[0x2b];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar6 = &local_60;
    cVar3 = FUN_01253c10(puVar6,&local_40,&local_58,0);
    lVar2 = local_40;
    pVar5 = (pthread_key_t)puVar6;
    if (cVar3 == '\0') {
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
LAB_01b81edd:
      local_60 = local_50;
      local_58 = local_48;
      lVar1 = unaff_RDI[0x2b];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar3 = FUN_012535e0(&local_60,&local_40,&local_58,0);
      lVar2 = local_40;
      if (cVar3 == '\0') {
        if (lVar1 == 0) {
          puVar7 = (undefined1 *)0x0;
        }
        else {
          FUN_00d50b20();
          puVar7 = (undefined1 *)0x0;
        }
      }
      else {
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        uVar8 = (undefined7)((ulonglong)lVar2 >> 8);
        puVar7 = (undefined1 *)CONCAT71(uVar8,lVar2 != 0);
        if ((lVar2 != 0) && (param_2 != '\0')) {
          puVar7 = (undefined1 *)CONCAT71(uVar8,1);
          (**(code **)(*unaff_RDI + 0xa40))();
        }
      }
    }
    else {
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 == 0) goto LAB_01b81edd;
      puVar7 = &DAT_02802501;
      if (param_2 != '\0') {
        (**(code **)(*unaff_RDI + 0xa40))();
      }
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    puVar7 = (undefined1 *)0x0;
  }
  FUN_00d50b20();
LAB_01b81f95:
  return (ulonglong)puVar7 & 0xffffffff;
}


