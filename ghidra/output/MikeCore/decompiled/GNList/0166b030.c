// Function: FUN_0166b030
// Address: 0166b030
// Size: 1320 bytes
// Class: GNList


undefined4 FUN_0166b030(pthread_key_t param_1)

{
  longlong lVar1;
  pthread_key_t pVar2;
  undefined4 uVar3;
  void *pvVar4;
  longlong *plVar5;
  char unaff_SIL;
  longlong unaff_RDI;
  longlong local_f8;
  longlong local_f0;
  char local_e8;
  undefined8 *local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  undefined8 *local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  undefined8 *local_90;
  longlong local_88;
  char local_80;
  undefined8 *local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  undefined8 *local_38;
  
  if (((*(longlong *)(unaff_RDI + 0x108) == 0) && (*(longlong *)(unaff_RDI + 0x110) == 0)) &&
     (*(char *)(unaff_RDI + 0x107) == '\0')) {
    return 0;
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0124df10();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d900();
  local_38 = local_78;
  if (local_70 == '\0') {
    if (((local_78 != (undefined8 *)0x0) && (FUN_00d50b00(), local_70 != '\0')) &&
       (local_78 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_70 = '\0';
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  pVar2 = 0;
  if (unaff_SIL != '\0') {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510280();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    pVar2 = FUN_018847d0();
    if ((local_70 != '\0') && (local_78 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01688ba0(pVar2,*(undefined8 *)(unaff_RDI + 0x38));
  if (local_70 == '\0') {
    if (local_78 != (undefined8 *)0x0) {
      local_90 = local_78;
      FUN_00d50b00();
      if ((local_70 != '\0') && (local_78 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_0166b22e;
    }
  }
  else {
    local_90 = local_78;
    if (local_78 != (undefined8 *)0x0) {
LAB_0166b22e:
      plVar5 = (longlong *)FUN_00e8fc40();
      FUN_0013dd30();
      (**(code **)(*plVar5 + 0x18))();
      pvVar4 = _pthread_getspecific(pVar2);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_e0 = local_90;
      local_d8 = '\0';
      FUN_0150c7f0();
      if ((local_d8 != '\0') && (local_e0 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(pVar2);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_c8 = '\0';
      local_d0 = plVar5;
      uVar3 = FUN_01512890();
      if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((char)uVar3 == '\0') {
        FUN_00d50b20();
      }
      else {
        FUN_00d403d0();
        local_c0 = DAT_027c8280;
        if (DAT_027c8280 != 0) {
          FUN_00d50b00();
        }
        local_b8 = '\x01';
        local_b0 = local_38;
        local_a8 = '\0';
        FUN_00d46300();
        lVar1 = DAT_027c8270;
        if (DAT_027c8270 != 0) {
          FUN_00d50b00();
        }
        local_f8 = lVar1;
        FUN_00083ea0(2,&local_f8);
        FUN_000b4da0();
        local_88 = local_a0;
        local_80 = 0;
        if (local_98 == '\0') {
          if (local_a0 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_98 = '\0';
        }
        local_80 = '\x01';
        FUN_00d40470(&local_88,&local_b0,3,3);
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        local_78 = (undefined8 *)&DAT_0253d630;
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        local_78 = &DAT_024c5048;
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if ((local_e8 != '\0') && (local_f0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_b8 != '\0') && (local_c0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
      goto LAB_0166b530;
    }
  }
  uVar3 = 0;
LAB_0166b530:
  if (local_38 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return uVar3;
}


